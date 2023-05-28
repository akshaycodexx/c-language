#include <stdio.h>

void stringConcatenate(char* str1, const char* str2) {
    // Find the end of str1
    while (*str1 != '\0') {
        str1++;
    }

    // Copy the characters of str2 to the end of str1
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0'; // Add null character at the end of the concatenated string
}

int main() {
    char str1[50] = "Hello, ";
    const char* str2 = "World!";

    stringConcatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
