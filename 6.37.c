#include <stdio.h>

// 遞迴函式：尋找最大值
int recursiveMaximum(int array[], int size) {
    // 當陣列僅有一個元素時，返回該元素
    if (size == 1) {
        return array[0];
    }

    // 遞迴取得剩餘陣列的最大值
    int maxOfRest = recursiveMaximum(array, size - 1);

    // 返回當前元素與剩餘最大值中的較大者
    return (array[size - 1] > maxOfRest) ? array[size - 1] : maxOfRest;
}

int main() {
    int array[] = {3, 5, 1, 9, 6, 8};
    int size = sizeof(array) / sizeof(array[0]);

    int max = recursiveMaximum(array, size);
    printf("Maximum value in the array: %d\n", max);

    return 0;
}
