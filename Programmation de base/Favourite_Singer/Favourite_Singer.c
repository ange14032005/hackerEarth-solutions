#include <stdio.h>

long long factorial(int n) {
    if (n < 1 || n > 10) return 0;  // Si le nombre n'est pas entre 1 et 10, retourner 0
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Entrez un nombre entre 1 et 10 : ");
    scanf("%d", &num);
    
    long long fact = factorial(num);
    if (fact == 0)
        printf("0\n");
    else
        printf("Factorielle de %d : %lld\n", num, fact);

    return 0;
}