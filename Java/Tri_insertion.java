

public class Tri_insertion{
    
    public static void insertionSort(int[] arr) {
        int n = arr.length;
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

    public static void main(String[] args) {
        int[] arr = {12, 11, 13, 5, 6};

        System.out.print("Tableau non trié : ");
        for (int val : arr) {
            System.out.print(val + " ");
        }
        System.out.println();

        insertionSort(arr);

        System.out.print("Tableau trié : ");
        for (int val : arr) {
            System.out.print(val + " ");
        }
        System.out.println();
    }
}
