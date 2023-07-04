public class PrintPattern {

    public static void main(String[] args) {
        int rows = 5;

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                char ch = (char) (j + 64); // Convert numerical value to corresponding uppercase letter
                System.out.print(ch);
            }
            System.out.println();
        }
    }
}
