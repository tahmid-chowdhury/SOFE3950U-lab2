# Makefile
# Operating Systems - Lab 2
# CRN 74026 - Group 9
# Tahmid Chowdhury, 100822671
# Suluxan Manogharan, 100823684
# Armaghan Nasir, 100820948
# Saieashan Sathivel, 100818528

all: myshell

myshell: myshell.c utility.c
	gcc -o myshell myshell.c utility.c -I.

