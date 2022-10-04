    // *********
    //  *******
    //   *****
    //    ***
    //     *

    public class pattern9 {
        public static void main(String[] args) {
            
            for (int i = 0; i < 5; i++) {
                
                for (int j = 0; j < i ; j++) {
                    System.out.print(" ");
                }
    
                for (int j2 = 0; j2 < (2*5)-1-(2*i) ; j2++) {
                    System.out.print("*");
                }
                System.out.println();
            }
        }
    }
    