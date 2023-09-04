#Tri fusion fonction de division du tableau
def tri_fusion(t):
    if  len(t) <= 1: 
        return t
    pivot = len(t)//2
    t1 = t[:pivot]
    t2 = t[pivot:]
    gauche = tri_fusion(t1)
    droite = tri_fusion(t2)
    fusionne = fusion(gauche,droite)
    return fusionne


#Tri fusion fonction de fusion de 2 listes
def fusion(T1,T2):
    i1 = 0
    i2 = 0    
    sizeT1 = len(T1)
    sizeT2 = len(T2)
    T3 = []
    while i1<sizeT1 and i2<sizeT2:
        if T1[i1] < T2[i2]:
            T3.append(T1[i1])
            i1 += 1
        else:
            T3.append(T2[i2])
            i2 += 1
    while i1<sizeT1:
        T3.append(T1[i1])
        i1+=1
    while i2<sizeT2:
        T3.append(T2[i2])
        i2+=1
    return T3
T = [11, 222, 3, 899, 24, 5, 46, 67]
print(T)
print("\n")
T_sorted = tri_fusion(T)
print(T_sorted)