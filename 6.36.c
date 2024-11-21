#include <stdio.h>

// 遞迴函式：反向列印字串
void stringReverse(char str[], int index) {
    // 如果到達字串結尾或空字元 (null character)，停止遞迴
    if (str[index] == '\0') {
        return;
    }

    // 遞迴處理下一個字元
    stringReverse(str, index + 1);

    // 列印當前字元（從遞迴返回後執行，反向列印）
    putchar(str[index]);
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    stringReverse(str, 0);
    printf("\n");
    return 0;
}
