def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        # Flag pour indiquer si des échanges ont été effectués lors de cette itération
        swapped = False
        
        # Balayer la liste de 0 à n-i-1. Le dernier élément est déjà trié après i itérations.
        for j in range(0, n-i-1):
            # Comparer l'élément courant avec son voisin et les échanger si nécessaire.
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                swapped = True
        
        # Si aucun échange n'a été effectué lors de cette itération, la liste est triée.
        if not swapped:
            break

# Exemple d'utilisation
arr = [64, 34, 25, 12, 22, 11, 90]
bubble_sort(arr)
print("Liste triée : ", arr)
