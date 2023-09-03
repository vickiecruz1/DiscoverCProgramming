#include <stdio.h>
#include <string.h>

void findLCS(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    int dp[len1 + 1][len2 + 1];
    int maxLen = 0;
    int endIndex = 0;
    
    for (int i = 0; i <= len1; ++i) {
        for (int j = 0; j <= len2; ++j) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLen) {
                    maxLen = dp[i][j];
                    endIndex = i - 1;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }
    
    if (maxLen == 0) {
        printf("Нет общей подстроки.\n");
        return;
    }
    
    printf("Наибольшая общая подстрока: ");
    for (int i = endIndex - maxLen + 1; i <= endIndex; ++i) {
        printf("%c", str1[i]);
    }
    printf("\n");
}

int main() {
    char str1[100], str2[100];
    
    printf("Введите первую строку: ");
    scanf("%s", str1);
    
    printf("Введите вторую строку: ");
    scanf("%s", str2);

    findLCS(str1, str2);

    return 0;
}
