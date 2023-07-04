public class PrintPattern {

    public static void main(String[] args) {
        int rows = 5;

        for (int i = rows; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                char ch = (char) (j + 64); // Convert numerical value to corresponding uppercase letter
                System.out.print(ch);
            }
            System.out.println();
        }
    }
}
