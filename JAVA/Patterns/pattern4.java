    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5


    public class pattern4 {
        public static void main(String[] args) {
            
            for (int i = 0; i < 5; i++) {
                int num = 1;
                for (int j = 0; j <= i; j++) {
                    //int num = 1;
                    System.out.print(num++);
                }
                System.out.println();
            }
        }
    }
    