def tri_rapide(T,debut,fin):
    if fin - debut < 2:
        return
    
    pivot = T[fin-1]
    curseur = debut

    for i in range(debut, fin - 1):
        if T[i] <= pivot:
            T[i], T[curseur] = T[curseur], T[i]
            curseur += 1

    T[fin - 1], T[curseur] = T[curseur], T[fin - 1]

    tri_rapide(T, debut, curseur)
    tri_rapide(T, curseur + 1, fin)
    return T
    
T = [11, 222, 3, 899, 24, 5, 46, 67]
print("Liste non triée :")
print(T)
A=tri_rapide(T, 0, len(T))
print("\nListe triée :")
print(A)
