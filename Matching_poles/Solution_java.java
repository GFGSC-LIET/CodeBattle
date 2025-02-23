import java.util.*;

public class EqualHeightPoles {
    static int maxHeight = 0;

    static void findMaxHeight(int[] rods, int index, int sum1, int sum2) {
        if (index == rods.length) {
            if (sum1 == sum2) {
                maxHeight = Math.max(maxHeight, sum1);
            }
            return;
        }
        findMaxHeight(rods, index + 1, sum1 + rods[index], sum2);
        findMaxHeight(rods, index + 1, sum1, sum2 + rods[index]);
        findMaxHeight(rods, index + 1, sum1, sum2);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] rods = new int[n];
        for (int i = 0; i < n; i++) {
            rods[i] = scanner.nextInt();
        }
        findMaxHeight(rods, 0, 0, 0);
        System.out.println(maxHeight);
        scanner.close();
    }
}
