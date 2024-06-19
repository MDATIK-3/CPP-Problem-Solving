import java.util.Scanner;

public class project_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextLine()) {
            String seq1 = scanner.nextLine();
            String seq2 = scanner.nextLine();
            System.out.println(longestCommonSubsequence(seq1, seq2));
        }

        scanner.close();
    }

    private static int longestCommonSubsequence(String seq1, String seq2) {
        int m = seq1.length();
        int n = seq2.length();

        int[][] dp = new int[m + 1][n + 1];

        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (seq1.charAt(i - 1) == seq2.charAt(j - 1))
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[m][n];
    }
}
