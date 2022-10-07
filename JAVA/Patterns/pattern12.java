// *****     *****
// *******   *******
// ********* *********
// *****FIRST PR***** 
//  ****************
//   **************
//    ************
//     **********
//      ********
//       ******
//        ****
//         **
public class pattern12 {
    public static void main(String args[]){
        int n;
        n=10;


        for (int i = n/2; i < n+1; i++) {
            if (i%2!=0) {
                for (int j = 0; j <(n-i)/2; j++) {
                    System.out.print(" ");
                }
                for (int j = 0; j < i; j++) {
                    System.out.print("*");
                }
                for (int j = 0; j <(n-i); j++) {
                    System.out.print(" ");
                }
                for (int j = 0; j < i; j++) {
                    System.out.print("*");
                }
                System.out.print("\n");
            }
        }
        for (int i = 0; i <1; i++) {
            System.out.print(" ");
        }
        

        for (int i = 0; i < (n/2); i++) {
            System.out.print("*");
        }
        
        System.out.print("FIRST PR");

        for (int i = 0; i < (n/2); i++) {
            System.out.print("*");
        }
        for (int i = 0; i < (n-10)/2; i++) {
            System.out.print("*");
        }


        System.out.println(" ");
        for (int i = (n-2); i >0; i--) {
            
                for (int j = 0; j <n-i; j++) {
                    System.out.print(" ");
                }
                for (int j = 0; j < 2*i; j++) {
                    System.out.print("*");
                }
                
                System.out.print("\n");
            }
        
    }
}
