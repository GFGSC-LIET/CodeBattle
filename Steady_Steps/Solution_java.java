import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t--> 0) {
            int n = scanner.nextInt();
            if (n % 2 == 0) {
                System.out.println(n);
            } else {
                System.out.println(n + 2);
            }
        }
        scanner.close();
    }
}
