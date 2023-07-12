public class PrintPattern {

    public static void main(String[] args) {
        int rows = 5;

        for (int i = 1; i <= rows; i++) {
            char ch = (char) (i + 64); // Convert numerical value to corresponding uppercase letter

            for (int j = 1; j <= i; j++) {
                System.out.print(ch);
            }

            System.out.println();
        }
    }
}
