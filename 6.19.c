#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int NUM_ROLLS = 36000;
    int frequency[13] = { 0 };
    int dice1, dice2, sum;


    srand(time(NULL));

    for (int i = 0; i < NUM_ROLLS; i++) {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        frequency[sum]++;
    }

    printf("點數\t次數\t機率\n");
    for (int i = 2; i <= 12; i++) {
        printf("%d\t%d\t%.2f%%\n", i, frequency[i], (frequency[i] / (float)NUM_ROLLS) * 100);
    }

    return 0;
}