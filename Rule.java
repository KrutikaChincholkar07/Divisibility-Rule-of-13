import java.util.Scanner;

public class DivisibleBy13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int temp = num;

        while (temp > 100) {
            int lastDigit = temp % 10;
            temp = temp / 10 + 4 * lastDigit;
        }

        if (temp % 13 == 0)
            System.out.println(num + " is divisible by 13");
        else
            System.out.println(num + " is not divisible by 13");
    }
}
