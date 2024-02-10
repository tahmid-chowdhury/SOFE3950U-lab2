# Operating Systems - Lab 2
**CRN 74026 - Group 18**
[Tahmid Chowdhury](https://github.com/tahmid-chowdhury) - 100822671

[Suluxan Manogharan]() - 100823684

[Armaghan Nasir](https://github.com/Armaghan180) - 100820948

[Saieashan Sathivel](https://github.com/Saieashan1) - 100818528

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
