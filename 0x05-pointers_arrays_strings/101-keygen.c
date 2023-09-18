#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char getRandomChar() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}|;:'\",.<>?";
    const size_t charsetSize = sizeof(charset) - 1;
    return charset[rand() % charsetSize];
}

char *generateRandomPassword(int length, int i) {
    char *password = (char *)malloc((length + 1) * sizeof(char));
    if (password == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < length; i++) {
        password[i] = getRandomChar();
    }
    password[length] = '\0';

    return password;
}

int main() {
    int passwordLength = 12;

    srand(time(NULL));
    char *password = generateRandomPassword(passwordLength);

    printf("Generated Password: %s\n", password);

    free(password);

    return 0;
}
