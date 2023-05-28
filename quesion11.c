#include <stdio.h>

int stringLength(const char* str) {
    int length = 0;
    const char* ptr = str;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    return length;
}

int main() {
    const char* str = "Hello, World!";

    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
