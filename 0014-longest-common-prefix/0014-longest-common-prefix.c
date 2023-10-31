#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *longestCommonPrefix(char **strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    int minLen = strlen(strs[0]);
    for (int i = 1; i < strsSize; i++) {
        int len = strlen(strs[i]);
        if (len < minLen) {
            minLen = len;
        }
    }

    char *prefix = (char *)malloc((minLen + 1) * sizeof(char));
    int i, j;

    for (i = 0; i < minLen; i++) {
        char ch = strs[0][i];
        for (j = 1; j < strsSize; j++) {
            if (strs[j][i] != ch) {
                break;
            }
        }
        if (j < strsSize) {
            break;
        }
        prefix[i] = ch;
    }

    prefix[i] = '\0';
    return prefix;
}


