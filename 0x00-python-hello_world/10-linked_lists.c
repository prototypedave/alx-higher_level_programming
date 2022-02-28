
0x00. Python - Hello, World

 By Guillaume Weight: 1 Ongoing second chance project - started 11-15-2021, must end by 11-18-2021 (in about 13 hours) - you're done with 173% of tasks. QA review fully automated.

In a nutshell…Auto QA review: 51.0/89 mandatory & 0.0/27 optionalAltogether:  57.3%Mandatory: 57.3%Optional: 0.0%Calculation:  57.3% + (57.3% * 0.0%)  == 57.3%

Concepts

For this project, students are expected to look at these concepts:

Python programmingPython programmingPython programming

Author’s disclaimerWelcome to the Python world! The first projects are more "C-oriented" - no tricks, no funky syntax - simple! If you've already played with Python, don't worry, fun things will come. You'll soon find that with Python (and the majority of higher level languages), there are ten different ways to do the same thing. Some tasks will expect only one implementation, while other tasks will have multiple possible implementations. Like C, Python also has a linter / style guide like Betty, called PEP8, also now known as PyCode. At Holberton, we won't start off with using PyCode, because it's much more strict compared to PEP8. Don't worry if you see a warning when you are running PEP8, you can ignore it. Enjoy! - Guillaume Resources

Read or watch:

The Python tutorial (only the first three chapters below)Whetting Your AppetiteUsing the Python InterpreterAn Informal Introduction to Python (Read up until “3.1.2. Strings” included)How To Use String Formatters in Python 3Learn to ProgramPycodestyle – Style Guide for Python CodeLearning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

GeneralWhy Python programming is awesomeWho created PythonWho is Guido van RossumWhere does the name ‘Python’ come fromWhat is the Zen of PythonHow to use the Python interpreterHow to print text and variables using printHow to use stringsWhat are indexing and slicing in PythonWhat is the official Python coding style and how to check your code with pycodestyleRequirementsPython ScriptsAllowed editors: vi, vim, emacsAll your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)All your files should end with a new lineThe first line of all your files should be exactly #!/usr/bin/python3A README.md file at the root of the repo, containing a description of the repositoryA README.md file, at the root of the folder of this project, is mandatoryYour code should use the pycodestyle (version 2.7.*)All your files must be executableThe length of your files will be tested using wcShell ScriptsAllowed editors: vi, vim, emacsAll your scripts will be tested on Ubuntu 20.04 LTSAll your scripts should be exactly two lines long (wc -l file should print 2)All your files should end with a new lineThe first line of all your files should be exactly #!/bin/bashAll your files must be executableC ScriptsAllowed editors: vi, vim, emacsAll your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89All your files should end with a new lineYour code should use the Betty style. It will be checked using betty-style.pl and betty-doc.plYou are not allowed to use global variablesNo more than 5 functions per fileIn the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examplesThe prototypes of all your functions should be included in your header file called lists.hDon’t forget to push your header fileAll your header files should be include guardedMore InfoZenThe Zen of Python, by Tim Peters Beautiful is better than ugly. Explicit is better than implicit. Simple is better than complex. Complex is better than complicated. Flat is better than nested. Sparse is better than dense. Readability counts. Special cases aren't special enough to break the rules. Although practicality beats purity. Errors should never pass silently. Unless explicitly silenced. In the face of ambiguity, refuse the temptation to guess. There should be one-- and preferably only one --obvious way to do it. Although that way may not be obvious at first unless you're Dutch. Now is better than never. Although never is often better than *right* now. If the implementation is hard to explain, it's a bad idea. If the implementation is easy to explain, it may be a good idea. Namespaces are one honking great idea -- let's do more of those! Pycodestyle

Pycodestyle is now the new standard of Python style code



Quiz questions

Show

Tasks

0. Run Python file

mandatory

Score: 100.00% (Checks completed: 100.00%)

Write a Shell script that runs a Python script.

The Python file name will be saved in the environment variable $PYFILE

guillaume@ubuntu:~/py/0x00$ cat main.py #!/usr/bin/python3 print("Best School") guillaume@ubuntu:~/py/0x00$ export PYFILE=main.py guillaume@ubuntu:~/py/0x00$ ./0-run Best School guillaume@ubuntu:~/py/0x00$ 

Repo:

GitHub repository: alx-higher_level_programmingDirectory: 0x00-python-hello_worldFile: 0-run

 Done! Help Re-check your code Get a sandbox QA Review

1. Run inline

mandatory

Score: 100.00% (Checks completed: 100.00%)

Write a Shell script that runs Python code.

The Python code will be saved in the environment variable $PYCODE

guillaume@ubuntu:~/py/0x00$ export PYCODE='print("Best School: {}".format(88+10))' guillaume@ubuntu:~/py/0x00$ ./1-run_inline Best School: 98 guillaume@ubuntu:~/py/0x00$ 

Repo:

GitHub repository: alx-higher_level_programmingDirectory: 0x00-python-hello_worldFile: 1-run_inline

 Done! Help Re-check your code Get a sandbox QA Review

2. Hello, print

mandatory

Score: 100.00% (Checks completed: 100.00%)

Write a Python script that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

Use the function printguillaume@ubuntu:~/py/0x00$ ./2-print.py "Programming is like building a multilingual puzzle guillaume@ubuntu:~/py/0x00$ 

Repo:

GitHub repository: alx-higher_level_programmingDirectory: 0x00-python-hello_worldFile: 2-print.py

 Done! Help Re-check your code Get a sandbox QA Review

3. Print integer

mandatory

Score: 100.00% (Checks completed: 100.00%)

Complete this source code in order to print the integer stored in the variable number, followed by Battery street, followed by a new line.

You can find the source code hereThe output of the script should be:the number, followed by Battery street,followed by a new lineYou are not allowed to cast the variable number into a stringYour code must be 3 lines longYou have to use the new print numbers tips (with .format(...))guillaume@ubuntu:~/py/0x00$ ./3-print_number.py 98 Battery street guillaume@ubuntu:~/py/0x00$ 

C is strongly typed… not in Python! The variable number can be assigned to a string, a float, a bool etc… Forcing the type during a string format ("...".format(...)) is a way to control the type of a variable

Repo:

GitHub repository: alx-higher_level_programmingDirectory: 0x00-python-hello_worldFile: 3-print_number.py

 Done! Help Re-check your code Get a sandbox QA Review

4. Print float

mandatory

Score: 100.00% (Checks completed: 100.00%)

Complete the source code in order to print the float stored in the variable number with a precision of 2 digits.

You can find the source code hereThe output of the program should be:Float:, followed by the float with only 2 digitsfollowed by a new lineYou are not allowed to cast number to stringYou have to use the new print formatting tips (with .format(...))guillaume@ubuntu:~/py/0x00$ ./4-print_float.py Float: 3.14 guillaume@ubuntu:~/py/0x00$ 

Repo:

GitHub repository: alx-higher_level_programmingDirectory: 0x00-python-hello_worldFile: 4-print_float.py

 Done! Help Re-check your code Get a sandbox QA Review

5. Print string

mandatory

Score: 100.00% (Checks completed: 100.00%)

Complete this source code in order to print 3 times a string stored in the variable str, followed by its first 9 characters.

You can find the source code hereThe output of the program should be:3 times the value of strfollowed by a new linefollowed by the 9 first characters of strfollowed by a new lineYou are not allowed to use any loops or conditional statementYour program should be maximum 5 lines longguillaume@ubuntu:~/py/0x00$ ./5-print_string.py Holberton SchoolHolberton SchoolHolberton School Holberton guillaume@ubuntu:~/py/0x00$ 

Repo:

GitHub repository: alx-higher_level_programmingDirectory: 0x00-python-hello_worldFile: 5-print_string.py

 Done! Help Re-check your code Get a sandbox QA Review

6. Play with strings

mandatory

Score: 11.11% (Checks completed: 11.11%)

Complete this source code to print Welcome to Holberton School!

You can find the source code hereYou are not allowed to use any loops or conditional statements.You have to use the variables str1 and str2 in your new line of codeYour program should be exactly 5 lines longguillaume@ubuntu:~/py/0x00$ ./6-concat.py Welcome to Holberton School! guillaume@ubuntu:~/py/0x00$ wc -l 6-concat.py 5 6-concat.py guillaume@ubuntu:~/py/0x00$ 

Repo:

GitHub repository: alx-higher_level_programmingDirectory: 0x00-python-hello_worldFile: 6-concat.py

 Done! Help Re-check your code Get a sandbox QA Review

7. Copy - Cut - Paste

mandatory

Score: 100.00% (Checks completed: 100.00%)

Complete this source code

You can find the source code hereYou are not allowed to use any loops or conditional statementsYour program should be exactly 8 lines longword_first_3 should contain the first 3 letters of the variable wordword_last_2 should contain the last 2 letters of the variable wordmiddle_word should contain the value of the variable word without the first and last lettersguillaume@ubuntu:~/py/0x00$ ./7-edges.py First 3 letters: Hol Last 2 letters: on Middle word: olberto guillaume@ubuntu:~/py/0x00$ wc -l 7-edges.py 8 7-edges.py guillaume@ubuntu:~/py/0x00$ 

Repo:

GitHub repository: alx-higher_level_programmingDirectory: 0x00-python-hello_worldFile: 7-edges.py

 Done! Help Re-check your code Get a sandbox QA Review

8. Create a new sentence


