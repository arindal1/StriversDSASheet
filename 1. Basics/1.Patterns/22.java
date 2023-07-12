public class PrintPattern {

    public static void main(String[] args) {
        int rows = 7;
        int midRow = (rows + 1) / 2;

        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= rows; j++) {
                int distanceFromMidRow = Math.abs(midRow - i);

                if (j <= distanceFromMidRow || j > rows - distanceFromMidRow) {
                    System.out.print(rows - distanceFromMidRow);
                } else {
                    System.out.print(j);
                }
            }
            System.out.println();
        }
    }
}
