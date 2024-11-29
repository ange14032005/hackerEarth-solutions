import java.util.Scanner;

public class Factorial {
    public static long factorial(int n) {
        if (n < 1 || n > 10) return 0;  // Si le nombre n'est pas entre 1 et 10, retourner 0
        long result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Entrez un nombre entre 1 et 10 : ");
        int num = scanner.nextInt();

        long fact = factorial(num);
        if (fact == 0)
            System.out.println(0);
        else
            System.out.println("Factorielle de " + num + " : " + fact);
    }
}