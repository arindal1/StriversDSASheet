public class CountDivisibleDigits {

    public static void main(String[] args) {
        int N = 12345;
        int count = 0;

        // Convert N to a string to iterate over each digit
        String number = String.valueOf(N);

        for (int i = 0; i < number.length(); i++) {
            // Get the current digit
            int digit = number.charAt(i) - '0';

            // Check if the digit evenly divides N
            if (digit != 0 && N % digit == 0) {
                count++;
            }
        }

        System.out.println("Count of digits that evenly divide N: " + count);
    }
}
