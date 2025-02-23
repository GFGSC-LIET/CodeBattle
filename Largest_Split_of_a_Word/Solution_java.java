import java.util.Scanner;

public class Main {
    public static String answerString(String word, int n) {
        if (n == 1) return word;
        int length = word.length();
        int maxlen = length - n + 1;
        char maxchar = word.charAt(0);
        String res = "";

        for (int i = 0; i < length; i++) {
            if (word.charAt(i) >= maxchar) {
                String curr = word.substring(i, Math.min(i + maxlen, length));
                if (curr.compareTo(res) > 0) {
                    res = curr;
                }
                maxchar = word.charAt(i);
            }
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            String word = scanner.next();
            int n = scanner.nextInt();
            String ans = answerString(word, n);
            System.out.println(ans);
        }
        scanner.close();
    }
}
