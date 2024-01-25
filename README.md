# Get_next_line

Get_next_line is function created as part of 42Firenze's core curriculum. This project focuses on creating a function to read from any given file descriptor one line at a time.

## Features

- **Reading from fds:** Reading from any file descriptor and return the next line up until the first `\n` character.
- **Multiple fd handling:** Support for reading from multiple file descriptors in any order without losing track of what was last read.

## Technologies

- **Programming Language:** the project was fully written in C.
- **Operating System:** Unix-based systems.

## How to Use

Compile the project files with your program and then call the `get_next_line(n)` function with any file descriptor as input, it will then return a single line of text.
