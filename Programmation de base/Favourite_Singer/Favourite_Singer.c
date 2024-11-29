#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);
    
    // Vérification de la contrainte sur n
    if (n < 1 || n > 2000000) {
        printf("0\n");
        return 0;
    }
    
    long long *list1 = malloc(n * sizeof(long long));
    if (!list1) {
        printf("0\n");
        return 0;
    }

    for (long long i = 0; i < n; i++) {
        scanf("%lld", &list1[i]);
        if (list1[i] < 1 || list1[i] > 1000000000000000) {
            printf("0\n");
            free(list1);
            return 0;
        }
    }

    // Compter les occurrences avec un tableau de fréquence
    long long freq[2000000] = {0}; // Si n <= 2000000
    for (long long i = 0; i < n; i++) {
        freq[list1[i]]++;
    }

    // Trouver la fréquence maximale et le nombre d'éléments avec cette fréquence
    long long maxi = 0, nbr = 0;
    for (long long i = 0; i < n; i++) {
        if (freq[list1[i]] > maxi) {
            maxi = freq[list1[i]];
            nbr = 1;
        } else if (freq[list1[i]] == maxi) {
            nbr++;
        }
    }

    printf("%lld\n", nbr);
    free(list1);
    return 0;
}