#include <iostream>
#include <vector>
using namespace std;

// Fonction pour réorganiser un sous-arbre en un tas max
void max_heapify(vector<int>& arr, int n, int i) {
    int largest = i; // Initialise le nœud le plus grand en tant que racine
    int left = 2 * i + 1; // Indice du fils gauche
    int right = 2 * i + 2; // Indice du fils droit

    // Si le fils gauche est plus grand que la racine
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Si le fils droit est plus grand que la racine
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Si le nœud le plus grand n'est pas la racine
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Récursivement réorganiser le sous-arbre affecté
        max_heapify(arr, n, largest);
    }
}

// Fonction pour effectuer le tri par tas sur un tableau
void heap_sort(vector<int>& arr) {
    int n = arr.size();

    // Construire un tas max
    for (int i = n / 2 - 1; i >= 0; i--)
        max_heapify(arr, n, i);

    // Extraire les éléments un par un du tas
    for (int i = n - 1; i > 0; i--) {
        // Déplacer la racine actuelle à la fin
        swap(arr[0], arr[i]);

        // Appeler max_heapify sur le réduit le tas
        max_heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();

    cout << "Tableau non trié : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    heap_sort(arr);

    cout << "Tableau trié : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
