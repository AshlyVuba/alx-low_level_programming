#!/bin/bash
gcc -c _putchar.c _islower.c _isalpha.c _abs.c _isupper.c _isdigit.c \
  _strlen.c _puts.c _strcpy.c _atoi.c _strcat.c _strncat.c _strncpy.c \
  _strcmp.c _memset.c _memcpy.c _strchr.c _strspn.c _strpbrk.c _strstr.c
ar rcs libmy.a _putchar.o _islower.o _isalpha.o _abs.o _isupper.o _isdigit.o \
  _strlen.o _puts.o _strcpy.o _atoi.o _strcat.o _strncat.o _strncpy.o \
  _strcmp.o _memset.o _memcpy.o _strchr.o _strspn.o _strpbrk.o _strstr.o
rm *.o
