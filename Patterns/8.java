public class PrintPattern {

    public static void main(String[] args) {
        int rows = 5;
        int spaces = 0;
        int asterisks = 2 * rows - 1;

        for (int i = rows; i >= 1; i--) {
            // Print spaces
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }

            // Print asterisks
            for (int k = 1; k <= asterisks; k++) {
                System.out.print("*");
            }

            System.out.println();

            spaces++;
            asterisks -= 2;
        }
    }
}
