# Operating Systems - Lab 2
**CRN 74026 - Group 18**
- [Tahmid Chowdhury](https://github.com/tahmid-chowdhury) - 100822671
- [Suluxan Manogharan](https://github.com/Suluseahawks) - 100823684
- [Armaghan Nasir](https://github.com/Armaghan180) - 100820948
- [Saieashan Sathivel](https://github.com/Saieashan1) - 100818528

## Introduction
MyShell is a simple shell program for educational purposes, supporting basic command-line operations. The purpose of this README is to provide users with comprehensive instructions on how to efficiently run MyShell.

## Features
Internal commands:
- `cd <directory>` for changing the current working directory to the specified directory
  - If the `<directory>` argument is not present, then the current directory is reported
  - If the `<directory>` does not exist, then an appropriate error is reported
- `clr` for clearing the screen
- `dir <directory>` for listing the contents of the specified directory
- `environ` for listing all the environment strings
- `echo <comment>` for displaying the specified comment on the display followed by a new line
- `help` for displaying the user manual
- `pause` for pausing the operation of the shell until 'Enter' is pressed
- `quit` for quitting the shell

External commands:
- All other command line input is interpreted as program invocation which is done by the shell 'fork'ing and 'exec'ing the programs as its own child processes
  - After reading a command and determining it's not an internal command, MyShell uses 'fork' to create a child process
  - Before using the `execvp` function to run the command, the parent environment variable is set in the child process
    - This is done using the `setenv` function
  - The parent process waits for the child process to finish executing before taking more user input
    - This is done using the `wait` function

Batch mode:
- MyShell is able to take its command line input from a file
  - `./myshell <batchfile>` where the specified batchfile is assumed to contain a set of command lines for the shell to process
    - When the end-of-file is reached, the shell exits
    - Obviously, if the shell is invoked without a command line argument it solicits input from the user via a prompt on the display
   
I/O Redirection:
- `<` for redirecting input from a file
- `>` for redirecting output to a file
- `>>` for appending output to a file

## Installation and Compilation
To install MyShell, run the following command in the terminal:
```bash
git clone https://github.com/tahmid-chowdhury/SOFE3950U-lab2.git
```

To navigate to the directory containing the source code:
```bash
cd SOFE3950U-lab2
```

To compile MyShell:
```bash
make
```

To run the compiled executable:
```bash
./myshell
```

## Usage
To test out MyShell, try running the following commands:

- Display "Hello World!" on the display:
  ```bash
  echo Hello World!
  ```
- Print the current working directory:
  ```bash
  pwd
  ```
- Print the current date and time:
  ```bash
  date
  ```
- Append text to a file (I/O redirection):
  ```bash
  cat >> file.txt
  This is a text file.
  ```
