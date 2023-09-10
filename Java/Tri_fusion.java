public class Tri_fusion {
    
    //Fusion de deux sous tableaux A et B dans un tableau C
    public static void fusion(int[] C,int first,int mid,int last){
        //Création des deux tableaux A et B (A[first,...,mid] & B[mid+1,...,last])
        int n1 = mid - first + 1;
        int n2 = last - mid;

        int A[]=new int[n1];
        int B[]=new int[n2];

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

    public static void rec_div(int T[] , int l , int p)
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
    public static void printArray(int T[],int size)
    {
    for(int i=0 ; i<size ;i++)
        System.out.print(T[i]+" ");
    }

    public static void main(String[] args) {
        int T[] = {10,3,2,5,1,6,7,4,9,8};
        int size = T.length;
        rec_div(T,0,size-1);

        System.out.println("Tableau trié : ");
        printArray(T,size);
    }


}
