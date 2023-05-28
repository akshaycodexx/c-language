#include <stdio.h>

void stringCopy(const char* source, char* destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }

    *destination = '\0'; // Add null character at the end of the destination string
}

int main() {
    const char* source = "Hello, World!";
    char destination[50];

    stringCopy(source, destination);

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}
