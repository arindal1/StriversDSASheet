public class PrintPattern {

    public static void main(String[] args) {
        int rows = 5;
        int spaces = rows - 1;
        int asterisks = 1;

        for (int i = 1; i <= rows; i++) {
            // Print spaces
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }

            // Print asterisks
            for (int k = 1; k <= asterisks; k++) {
                System.out.print("*");
            }

            System.out.println();

            spaces--;
            asterisks += 2;
        }
    }
}
