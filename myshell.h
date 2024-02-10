// myshell.h
// Operating Systems - Lab 2
// CRN 74026 - Group 9
// Tahmid Chowdhury, 100822671
// Suluxan Manogharan, 100823684
// Armaghan Nasir, 100820948
// Saieashan Sathivel, 100818528

#ifndef MYSHELL_H  // Prevents double inclusion of this header file
#define MYSHELL_H

#include <stdio.h>   // Standard I/O functions
#include <stdlib.h>  // Standard library for functions like malloc
#include <string.h>  // String handling functions
#include <unistd.h>  // Provides access to the POSIX operating system API

// Function declarations from utility.h
void change_directory(char *path);
void clear_screen();
void list_directory(char *path);
void list_environment();
void display_comment(char *comment);
void display_manual();
void pause_operation();

#endif
