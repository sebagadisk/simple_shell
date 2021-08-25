# 0x16. C - Simple Shell

# Background Context
Write a simple UNIX command interpreter. 

**This is the task**

## General
- Who designed and implemented the original Unix operating system
- Who wrote the first version of the UNIX shell
- Who invented the B programming language (the direct predecessor to the C programming language)
- Who is Ken Thompson
- How does a shell work
- What is a pid and a ppid
- How to manipulate the environment of the current process
- What is the difference between a function and a system call
- How to create processes
- What are the three prototypes of main
- How does the shell use the PATH to find the programs
- How to execute another program with the execve system call
- How to suspend the execution of a process until one of its children terminates
- What is EOF / “end-of-file”?

## Features of the shell

The end product should:

- Display a prompt and wait for the user to type a command. A command line always ends with a new line.
- If an executable cannot be found, print an error message and display the prompt again.
- Handle errors.
- Handling the “end of file” condition (Ctrl+D)
- Hanling the command line with arguments
- Handle the PATH
- Support the exit features and the exit status
- Handle the Ctrl-C to not terminate the shell
- Handling the command seperator ;
- Handling && and || logical operators
- Handle variable replacements $? and $$
- Handle the comments #
- Support the history feature
- Support the file input

### AUTHORS

Eugene Simiyu <wechuli017@gmail.com>

