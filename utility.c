// utility.c
// Operating Systems - Lab 2
// CRN 74026 - Group 9
// Tahmid Chowdhury, 100822671
// Suluxan Manogharan, 100823684
// Armaghan Nasir, 100820948
// Saieashan Sathivel, 100818528

#include "myshell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Function to change the current working directory
void change_directory(char *path) {
    // Check if the path argument is NULL, which implies no specific directory was provided
    if (path == NULL) {
        // Create a buffer to store the current working directory path
        char cwd[1024];

        // Use getcwd to get the current working directory.
        if (getcwd(cwd, sizeof(cwd)) != NULL) {
            // If successful, print the current working directory to the user
            printf("%s\n", cwd);
        } else {
            // If getcwd fails, use perror to print an error message.
            perror("getcwd() error");
        }
    } else {
        // If a path is provided, try changing the directory to the specified path using chdir
        if (chdir(path) != 0) {
            // In case of an error, use perror to print the error message.
            perror("myshell");
        }
    }
}

// Function to clear the screen
void clear_screen() {
	// Use ANSI escape sequence to clear the screen
	printf("\033[H\033[J");
}

// Function to list the contents of the specified directory
void list_directory(char *path) {
	// Check if the path argument is NULL, which implies no specific directory was provided
	if (path == NULL) {
		// Set path to the current directory
		path = ".";
	}
	
	// Create a buffer to store the command to list directory contents
	char command[1024];
	sprintf(command, "ls -l %s", path);
	
	// Use a system call to execute the command
	system(command);
}

// Function to list all the environment strings
void list_environment() {
	// Create an external variable for the environment
	extern char **environ;
	
	// Use a for loop to print each environment variable
	for (char **env = environ; *env != NULL; env++) {
		printf("%s\n", *env);
	}
}

// Function to display comment on the display followed by a new line
void display_comment(char *comment) {
	// Print the comment to the user
	printf("%s\n", comment);
}

// Function to display the user manual
void display_manual() {
	// Print the user manual to the user
	printf("User Manual: This is a simple shell.\nAvailable commands: cd, clr, dir, environ, echo, help, pause, quit\nFor more information, please check the README file\n");
}

// Function to pause operation of the shell until 'Enter' is pressed
void pause_operation() {
	// Print a message telling the user to press 'Enter' to unpause operation
	printf("Press Enter to continue...\n");
	
	// Use getchar to wait for Enter key
	getchar();
}

