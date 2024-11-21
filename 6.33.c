#include <stdio.h>

// Recursive binary search function
int binarySearch(int array[], int start, int end, int key) {
    if (start > end) {
        return -1; // Key not found
    }

    int mid = (start + end) / 2;

    if (array[mid] == key) {
        return mid; // Key found at mid index
    } else if (array[mid] > key) {
        return binarySearch(array, start, mid - 1, key); // Search in the left half
    } else {
        return binarySearch(array, mid + 1, end, key); // Search in the right half
    }
}

int main() {
    int array[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 7;

    int result = binarySearch(array, 0, size - 1, key);

    if (result != -1) {
        printf("Key %d found at index %d.\n", key, result);
    } else {
        printf("Key %d not found.\n", key);
    }

    return 0;
}