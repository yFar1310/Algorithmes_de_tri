# -*- coding: utf-8 -*-
"""
Created on Tue Oct  4 17:44:40 2022

@author: Farehan Yahya
"""

def tri_par_selection(T):
    n = len(T)
    for i in range(n-1):
        min = T[i]
        for j in range(i+1,n):
            if T[j]<min:
                min  = j
                T[i],T[min]=T[min],T[i] 
    return T
                

#Exemple
L=[2,3,8,11,14,13,65,23,65,85,462,25,98,114]
print(tri_par_selection(L))
