import java.util.Scanner;

public class songuyento {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int a = sc.nextInt();
            if (checkPrime(a))
                System.out.println("YES\n");
            else
                System.out.println("NO\n");
        }
    }

    public static boolean checkPrime(int a) {
        if (a % 2 == 0)
            return false;
        for (int i = 3; i * i <= a; i += 2)
            if (a % i == 0)
                return false;
        return true;
    }
}
