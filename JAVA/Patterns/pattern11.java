// *
// * *
// *  *
// *   *
// *    *
// ******
public class pattern11 {
    public static void main(String args[]){
        int n;
       // Scanner sc=new Scanner (System.in);
        n=6;
        System.err.println("*");
        for(int i=0;i<n-2;i++){
            System.err.print("* ");
            for(int j=0;j<i;j++){
                System.err.print(" ");
            }
            System.err.print("*");
            System.err.print("\n");
        }
        for(int i=0;i<n;i++){
            System.err.print("*");
        }
    }
}
