#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 6

int indexOf(int *arr, int num) {
    for (int i=0; i<ARR_SIZE; i++) {
        if (arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int value) {
    int first = 0, last = n-1, index = -1;
    while (first <= last) {
        int middle = (first + last) / 2;
        if (arr[middle] == value) {
            index = middle;
            break;
        } else if (arr[middle] > value) {
            last = middle -1;
        } else {
            first = middle + 1;
        }
    }
    return index;
}

int main() {

    int arr[] = { 90, 88, 56, 100, 2, 25 };
    printf("Enter the number to search for: ");
    int num;
    scanf("%d", &num);

    printf("IndexOf %d: %d", num, indexOf(arr, num));
    
    exit(0);
}

