
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* prefix = malloc(strlen(strs[0]) + 1);
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        while (strncmp(prefix, strs[i],
                       strlen(prefix)) != 0) {
            prefix[strlen(prefix) - 1] = '\0';
        }
    }

    return prefix;
}

int main() {
    char* strs[] = {"flower", "flow", "flight"};

    char* result = longestCommonPrefix(strs, 3);

    printf("Longest Common Prefix: %s\n", result);

    free(result);
    return 0;
}
