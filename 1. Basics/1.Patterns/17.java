public class PrintPattern {

    public static void main(String[] args) {
        int rows = 4;

        for (int i = 1; i <= rows; i++) {
            // Print spaces
            for (int j = 1; j <= rows - i; j++) {
                System.out.print(" ");
            }

            // Print letters in increasing order
            for (int k = 1; k <= i; k++) {
                char ch = (char) (k + 64); // Convert numerical value to corresponding uppercase letter
                System.out.print(ch);
            }

            // Print letters in decreasing order
            for (int l = i - 1; l >= 1; l--) {
                char ch = (char) (l + 64); // Convert numerical value to corresponding uppercase letter
                System.out.print(ch);
            }

            System.out.println();
        }
    }
}
