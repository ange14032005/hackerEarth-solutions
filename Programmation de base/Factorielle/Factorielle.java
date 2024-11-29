import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        
        // Vérification de la contrainte sur n
        if (n < 1 || n > 2000000) {
            System.out.println(0);
            return;
        }
        
        long[] list1 = new long[(int)n];
        for (int i = 0; i < n; i++) {
            list1[i] = sc.nextLong();
            if (list1[i] < 1 || list1[i] > 1000000000000000L) {
                System.out.println(0);
                return;
            }
        }

        // Utilisation d'une HashMap pour compter les occurrences
        Map<Long, Integer> freq = new HashMap<>();
        for (long num : list1) {
            freq.put(num, freq.getOrDefault(num, 0) + 1);
        }

        // Trouver la fréquence maximale et le nombre d'éléments avec cette fréquence
        int maxi = Collections.max(freq.values());
        long nbr = freq.values().stream().filter(count -> count == maxi).count();
        
        System.out.println(nbr);
    }
}