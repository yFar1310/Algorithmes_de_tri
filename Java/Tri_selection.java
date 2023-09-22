public class Tri_selection {

    public static void triSelection(int[] tableau) {
        int n = tableau.length;

        for (int i = 0; i < n - 1; i++) {
            int indiceDuMinimum = i;

            // Recherche de l'indice du minimum dans le reste du tableau
            for (int j = i + 1; j < n; j++) {
                if (tableau[j] < tableau[indiceDuMinimum]) {
                    indiceDuMinimum = j;
                }
            }

            // Échange du minimum trouvé avec l'élément actuel
            int temp = tableau[i];
            tableau[i] = tableau[indiceDuMinimum];
            tableau[indiceDuMinimum] = temp;
        }
    }

    public static void main(String[] args) {
        int[] tableau = {64, 25, 12, 22, 11};
        triSelection(tableau);

        System.out.println("Tableau trié :");
        for (int valeur : tableau) {
            System.out.print(valeur + " ");
        }
    }
}
