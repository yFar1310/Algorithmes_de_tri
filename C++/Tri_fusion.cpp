#include <iostream>
using namespace  std;

//Fusion de deux sous tableaux A et B dans un tableau C
void fusion(int C[],int first,int mid,int last)
{
  //Création des deux tableaux A et B (A[first,...,mid] & B[mid+1,...,last])
  int n1 = mid - first + 1; 
  int n2 = last - mid;

  int A[n1];
  int B[n2]; 
 
  for(int i=0 ; i<n1 ; i++)
    A[i] = C[first + i];
  for(int j=0 ; j<n2 ; j++)
    B[j] = C[mid + 1 + j];
  
  //Initialisation des indices des sous tableaux
  int i,j,k;
  i=0;
  j=0;
  k=first;

  while(i < n1 && j < n2)
  {
    if(A[i] <= B[j])
    {
      C[k] = A[i];
      i++;
    }
    else
    {
      C[k] = B[j];
      j++;
    }
    k++;
  }

  while(i < n1)
  {
    C[k] = A[i];
    i++;
    k++;
  }

  while(j < n2)
  {
    C[k] = B[j];
    j++;
    k++;
  }
}

//Ici on va diviser le tableau initial en deux sous tableaux

void rec_div(int T[] , int l , int p)
{
  if(l<p)
  {
    int m = l + (p - l)/2; // m c'est le milieu du tableau
    rec_div(T,l,m);
    rec_div(T,m+1,p);

    //Appel de la première fonction (fusion)

    fusion(T,l,m,p);

  }
}

//Print 
void printArray(int T[],int size)
{
  for(int i=0 ; i<size ;i++)
    cout << T[i] << " ";
  cout << endl;
}

//MAIN
int main()
{
  int T[] = {10,3,2,5,1,6,7,4,9,8};
  int size = sizeof(T)/sizeof(T[0]);
  //La division sizeof(T) / sizeof(T[0]) donne donc le nombre d'éléments dans le tableau, car elle divise la taille totale du tableau par la taille d'un élément pour obtenir le nombre d'éléments.

  rec_div(T,0,size-1);

  cout << "Tableau trié : \n";
  printArray(T,size);
  return 0;
}
