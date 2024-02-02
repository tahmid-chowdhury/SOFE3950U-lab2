# Makefile
# Operating Systems - Lab 2
# Tahmid Chowdhury, 100822671
# Armaghan Nasir, 100820948
all: myshell

myshell: myshell.c utility.c
	gcc -o myshell myshell.c utility.c -I.

# Note: The command under 'myshell:' must be preceded by a tab, not spaces.

