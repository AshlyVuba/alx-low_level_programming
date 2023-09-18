#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function to generate a random character
char getRandomChar() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:'\",.<>?";
    const size_t charsetSize = sizeof(charset) - 1;
    return charset[rand() % charsetSize];
}

// Function to generate a random password
void generateRandomPassword(char *password, int length) {
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        password[i] = getRandomChar();
    }
    password[length] = '\0'; // Null-terminate the string
}

int main() {
    int passwordLength = 12; // Change this to set the desired password length
    char password[passwordLength + 1]; // +1 for the null terminator

    generateRandomPassword(password, passwordLength);

    printf("Generated Password: %s\n", password);

    return 0;
}
