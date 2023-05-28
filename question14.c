#include <stdio.h>

int stringCompare(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }

    return (*str1 - *str2);
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "Hello";
    
    int result = stringCompare(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is lexicographically smaller than String 2.\n");
    } else {
        printf("String 1 is lexicographically larger than String 2.\n");
    }

    return 0;
}
