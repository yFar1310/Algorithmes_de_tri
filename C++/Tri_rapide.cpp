#include <iostream>
using namespace std;

int partition(int T[], int debut, int fin)
{

    int pivot = T[debut];
    int cmp = 0;

    for(int i=debut+1 ; i<=fin;i++)
    {
        if(T[i]<=pivot) cmp++;
    }

    int indicePivot = debut + cmp;
    swap(T[indicePivot],T[debut]);//On permute le plus grand element avec le premier element du tableau

    int i = debut , j = fin;

    while(i < indicePivot && j > indicePivot)
    {
        while(T[i] <= pivot)
        {
            i++;
        }
        while(T[j] > pivot)
        {
            j--;
        }
        if(i < indicePivot && j > indicePivot)
        {
            swap(T[i++],T[j--]);
        }
    }
    return indicePivot;
}

void rapide(int T[], int debut , int fin)
{
    if(debut >= fin) return ;

    int p = partition(T,debut,fin);

    rapide(T,debut,p - 1);

    rapide(T, p + 1, fin);
}
void affiche(int T[],int size)
{
    for(int i=0 ; i< size ; i++)
    {
        cout << T[i] << " " << endl; 
    }
    cout << "\n" << endl;
}

int main()
{
    int T[] = {72, 19, 33, 91, 11, 50, 67, 87, 25, 5, 38, 8, 56, 76, 42, 14, 30, 62, 49, 99, 1, 70, 45, 20, 2, 97, 26, 68, 84, 55, 73, 18, 12, 71, 21, 89, 59, 61, 77, 7, 3, 69, 36, 23, 74, 81, 35, 78, 65, 64, 17, 31, 93, 29, 79, 43, 10, 60, 83, 66, 4, 24, 48, 28, 54, 98, 22, 80, 46, 58, 32, 9, 57, 37, 75, 85, 63, 15, 86, 94, 16, 88, 27, 82, 6, 95, 47, 51, 90, 41, 96, 40, 53, 52, 44, 34};
    int n = sizeof(T)/sizeof(T[0]);
    rapide(T,0,n-1);
    affiche(T,n);
    return 0;
}
