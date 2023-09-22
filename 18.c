#include <stdio.h>
#include <string.h>

void countCharacters(char *str, int count[]) {
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        count[str[i] - 'a']++;
    }
}

int areAnagrams(char *str1, char *str2) {
    int count1[26] = {0};
    int count2[26] = {0};

    countCharacters(str1, count1);
    countCharacters(str2, count2);

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
