// 1 2 3 4 5
// 4 3 2 1
// 3 2 1
// 2 1
// 1

public class pattern10{
    public static void main(String args[]){
        int n=5;

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                System.out.print(j+1 +" ");
            }
            System.out.print("\n");
        }
        
        System.err.println("1 2 3 4 5");

        for(int i=0;i<n;i++){
            for(int j=n-1;j>0;j--){
                System.out.print(j+" ");
            }
            n--;
            System.out.print("\n");
        }
        System.err.println("1");

      
         
     }
}