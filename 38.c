#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toLowerCase(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];
    
    printf("Введите строку: ");
    scanf("%s", str);

    toLowerCase(str);

    printf("Строка в нижнем регистре: %s\n", str);

    return 0;
}
