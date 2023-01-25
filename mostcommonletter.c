//finding the most common letter in c
#include <stdio.h>
#include <string.h>

char mostCommonLetter(char *str) {
    int counts[26] = {0}; 
    int maxCount = 0;
    char mostCommon = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            counts[str[i] - 'a']++;
            if (counts[str[i] - 'a'] > maxCount) {
                maxCount = counts[str[i] - 'a'];
                mostCommon = str[i];
            }
        }
    }
    return mostCommon;
}

int main() {
    char str[] = "it is what it is";
    char mostCommon = mostCommonLetter(str);
    if (mostCommon != '\0') {
        printf("The most common letter is '%c'\n", mostCommon);
    } else {
        printf("No letters found in the string.\n");
    }
    return 0;
}
