public class TriParSelection
{


    public static void TriSelec(int[] tab){
        int temp=0;
        for(int i=0;i<tab.length;i++){
            int x=tab[i];
            int y=i;
            while(y>0 && tab[y-1]>temp){
                y=i+1;
                temp=x;
                tab[i]=tab[i+1];
            }
            tab[y]=temp;
            
        }
    }

    public static String toString(int[] tab){
        String s="";
        for(int i=0;i<tab.length;i++){
            s+=(tab[i]+" ");
        }
        return s;
    }



    public static void main(String[] args) {
        int[] tab={4,1,3,2};
        TriSelec(tab);
        System.out.println(toString(tab));
    }
}
