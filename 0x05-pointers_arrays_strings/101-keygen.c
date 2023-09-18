#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char getRandomChar() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:'\",.<>?";
    const size_t charsetSize = sizeof(charset) - 1;
    return charset[rand() % charsetSize];
}

void generateRandomPassword(char *password, int length, int i) {
    for (i = 0; i < length; i++) {
        password[i] = getRandomChar();
    }
    password[length] = '\0';
}

int main() {
    int passwordLength = 12; 
    char password[passwordLength + 1];

    srand(time(NULL));
    generateRandomPassword(password, passwordLength);

    printf("Generated Password: %s\n", password);

    return 0;
}
