#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Trouver l'indice du minimum dans le tableau non trié
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Échanger l'élément minimum avec l'élément à la position i
        swap(arr[i], arr[minIndex]);
    }
}

//MAIN
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Tableau avant le tri par sélection : ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    selectionSort(arr, size);

    std::cout << "Tableau après le tri par sélection : ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
