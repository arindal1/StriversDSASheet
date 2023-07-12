public class PrintPattern {

    public static void main(String[] args) {
        int rows = 9;
        int midRow = (rows + 1) / 2;

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= rows; j++) {
                if (j <= i) {
                    System.out.print("*");
                } else if (j > (rows - i + 1)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
