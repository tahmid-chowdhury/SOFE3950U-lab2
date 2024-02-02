# Makefile
# Operating Systems - Lab 2
# Tahmid Chowdhury, 100822671
# Armaghan Nasir, 100820948

myshell: myshell.c utility.c myshell.h
	gcc -Wall myshell.c utility.c -o myshell

