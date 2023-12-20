#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int egenerateNegativeRandomNumber() {
    return -1 *((rand() % (-6-1+1)));
}
int egeneratePositiveRandomNumber() {
    return (rand() % (6-0+1))+0;
}
int ogenerateNegativeRandomNumber() {
    return -1 * ((rand() % (6-1+1)));
}
int ogeneratePositiveRandomNumber() {
    return (rand() % (6-0+1))+0;
}
int main() {
   
    srand(time(NULL));

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size % 2 == 0) {
        int array[size];
        for (int i = 0; i < size; i++) {
            if (i % 2 == 0) {
                array[i] = egeneratePositiveRandomNumber();
            } else {
                array[i] = egenerateNegativeRandomNumber();
            }
        }
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    } else {
        int array[size];
        for (int i = 0; i < size; i++) {
            if (i % 2 != 0) {
                array[i] = ogeneratePositiveRandomNumber();
            } else {
                array[i] = ogenerateNegativeRandomNumber();
            }
        }
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
