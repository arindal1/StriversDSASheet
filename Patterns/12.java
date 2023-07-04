public class PrintPattern {

    public static void main(String[] args) {
        int rows = 4;

        for (int i = 1; i <= rows; i++) {
            // Print increasing numbers
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
            }

            // Print spaces
            for (int k = 1; k <= 2 * (rows - i); k++) {
                System.out.print(" ");
            }

            // Print decreasing numbers
            for (int l = i; l >= 1; l--) {
                System.out.print(l);
            }

            System.out.println();
        }
    }
}
