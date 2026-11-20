
#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int count[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[(unsigned char)s[i]]++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[(unsigned char)t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main() {
    char s[] = "anagram";
    char t[] = "nagaram";

    if (isAnagram(s, t))
        printf("Valid Anagram\n");
    else
        printf("Not a Valid Anagram\n");

    return 0;
}
