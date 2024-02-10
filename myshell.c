// myshell.c
// Operating Systems - Lab 2
// CRN 74026 - Group 9
// Tahmid Chowdhury, 100822671
// Suluxan Manogharan, 100823684
// Armaghan Nasir, 100820948
// Saieashan Sathivel, 100818528

#include "myshell.h"

// Function to execute the entered command
void execute_command(char *input) {
    char *token;
    char *delim = " \n";
    token = strtok(input, delim); // Tokenize the input

    // If the first token is a recognizable command
    if (token != NULL) {
	if (strcmp(token, "cd") == 0) {
            token = strtok(NULL, delim); // Get the next part of the input (directory path)
            change_directory(token); // Call the change_directory function
        } else if (strcmp(token, "clr") == 0) {
            clear_screen(); // Call the clear_screen function
        } else if (strcmp(token, "dir") == 0) {
            token = strtok(NULL, delim); // Get the next part of the input (directory path)
            list_directory(token); // Call the list_directory function
        } else if (strcmp(token, "environ") == 0) {
            list_environment(); // Call the list_environment function
        } else if (strcmp(token, "echo") == 0) {
            token = strtok(NULL, delim); // Get the next part of the input (comment)
            display_comment(token);
        } else if (strcmp(token, "help") == 0) {
            display_manual(); // Call the display_manual function
        } else if (strcmp(token, "pause") == 0) {
            pause_operation(); // Call the pause_operation function
        } else if (strcmp(token, "quit") == 0) {
            exit(0); // Quit the shell
        } else {
            printf("Command not recognized.\n");
        }
    }
}


int main() {
    char input[1024]; // Buffer for user input

    // Main command loop
    while (1) {
        printf("MyShell> "); // Prompt for input
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break; // Exit on EOF
        }
        execute_command(input); // Process the input
    }

    return 0;
}
