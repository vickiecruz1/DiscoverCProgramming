#include <stdio.h>
#include <string.h>

int areAnagrams(char *str1, char *str2) {
    int count1[26] = {0};
    int count2[26] = {0};

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0;
    }

    for (int i = 0; i < len1; ++i) {
        count1[str1[i] - 'a']++;
        count2[str2[i] - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        if (count1[i] != count2[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];
    
    printf("Введите первую строку: ");
    scanf("%s", str1);
    
    printf("Введите вторую строку: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("Строки являются анаграммами.\n");
    } else {
        printf("Строки не являются анаграммами.\n");
    }

    return 0;
}
