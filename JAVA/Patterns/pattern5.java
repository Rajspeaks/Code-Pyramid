    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *

    public class pattern5 {
        public static void main(String[] args) {
            pattern(9);
        }
    
        static void pattern(int n) {
            for (int i = 0; i < n; i++) {
                
                for (int j = n/2; i < j; j--) {
                    System.out.print(" ");
                }
    
                for (int j = 0; j < (2*i)+1 ; j++) {
                    System.out.print("*");
                }
                System.out.println();
            }
        }
    }
    