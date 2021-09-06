import java.util.Scanner;

public class sofibonacci {
    public static void main(String[] args) {
        long[] fibo = new long[93];
        fibo[0] = 0;
        fibo[1] = 1;
        for (int i = 2; i <= 92; i++)
            fibo[i] = fibo[i - 1] + fibo[i - 2];

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0) {
            t -= 1;
            int n = sc.nextInt();
            System.out.println(fibo[n]);
        }
    }
}