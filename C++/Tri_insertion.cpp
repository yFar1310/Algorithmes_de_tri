#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) 
{
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Déplacer les éléments de arr[0..i-1] qui sont plus grands que key
        // vers la droite d'une position.
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;
    }
}

//Main
int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6};
    
    std::cout << "Tableau non trié : ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    insertionSort(arr);
    
    std::cout << "Tableau trié : ";
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
