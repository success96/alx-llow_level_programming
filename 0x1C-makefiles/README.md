f you want to run or update a task when certain files are updated, the make utility can come in handy. The make utility requires a file, Makefile (or makefile), which defines set of tasks to be executed. You may have used make to compile a program from source code. Most open source projects use make to compile a final executable binary, which can then be installed using make install.



In this article, we'll explore make and Makefile using basic and advanced examples. Before you start, ensure that make is installed in your system.



Basic examples

Let's start by printing the classic "Hello World" on the terminal. Create a empty directory myproject containing a file Makefile with this content:



say_hello:

        echo "Hello World"

Now run the file by typing make inside the directory myproject. The output will be:



$ make

echo "Hello World"

Hello World

In the example above, say_hello behaves like a function name, as in any programming language. This is called the target. The prerequisites or dependencies follow the target. For the sake of simplicity, we have not defined any prerequisites in this example. The command echo "Hello World" is called the recipe. The recipe uses prerequisites to make a target. The target, prerequisites, and recipes together make a rule.



To summarize, below is the syntax of a typical rule:



target: prerequisites

<TAB> recipe

As an example, a target might be a binary file that depends on prerequisites (source files). On the other hand, a prerequisite can also be a target that depends on other dependencies:



final_target: sub_target final_target.c

	Recipe_to_create_final_target



sub_target: sub_target.c

	Recipe_to_create_sub_target

It is not necessary for the target to be a file; it could be just a name for the recipe, as in our example. We call these "phony targets."



Going back to the example above, when make was executed, the entire command echo "Hello World" was displayed, followed by actual command output. We often don't want that. To suppress echoing the actual command, we need to start echo with @:



say_hello:

        @echo "Hello World"

Now try to run make again. The output should display only this:



$ make

Hello World

Let's add a few more phony targets: generate and clean to the Makefile:



say_hello:

        @echo "Hello World"



generate:

	@echo "Creating empty text files..."

	touch file-{1..10}.txt



clean:

	@echo "Cleaning up..."

	rm *.txt

If we try to run make after the changes, only the target say_hello will be executed. That's because only the first target in the makefile is the default target. Often called the default goal, this is the reason you will see all as the first target in most projects. It is the responsibility of all to call other targets. We can override this behavior using a special phony target called .DEFAULT_GOAL.



Let's include that at the beginning of our makefile:



.DEFAULT_GOAL := generate

This will run the target generate as the default:



$ make

Creating empty text files...

touch file-{1..10}.txt

As the name suggests, the phony target .DEFAULT_GOAL can run only one target at a time. This is why most makefiles include all as a target that can call as many targets as needed.



Let's include the phony target all and remove .DEFAULT_GOAL:



all: say_hello generate



say_hello:

	@echo "Hello World"



generate:

	@echo "Creating empty text files..."

	touch file-{1..10}.txt



clean:

	@echo "Cleaning up..."

	rm *.txt

Before running make, let's include another special phony target, .PHONY, where we define all the targets that are not files. make will run its recipe regardless of whether a file with that name exists or what its last modification time is. Here is the complete makefile:



.PHONY: all say_hello generate clean



all: say_hello generate



say_hello:

	@echo "Hello World"



generate:

	@echo "Creating empty text files..."

	touch file-{1..10}.txt



clean:

	@echo "Cleaning up..."

	rm *.txt

The make should call say_hello and generate:



$ make

Hello World

Creating empty text files...

touch file-{1..10}.txt

It is a good practice not to call clean in all or put it as the first target. clean should be called manually when cleaning is needed as a first argument to make:



$ make clean

Cleaning up...

rm *.txt

