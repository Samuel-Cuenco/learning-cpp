#include <iostream>
using std::cout;

void bubbleSort(int array[], int arrayLength) {
    for (int i = 0; i < arrayLength - 1; i++) {
        for (int j = 0; j < arrayLength - i - 1; j++) {
            // ALl Logic here
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(void) {
    int array[] = { 1,2,3,74,3,5,245,2,25,25,25,25,253,6446,4,64,6467,24,124,63,5 };
    int arraylength = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, arraylength);
    for (int i = 0; i < arraylength; i++) {
        cout << array[i] << ", ";
    }

    return 0;
}