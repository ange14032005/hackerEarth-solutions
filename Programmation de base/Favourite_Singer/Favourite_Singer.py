n = int(input())

if n < 1 or n > 2000000:
    print(0)
else:
    list1 = list(map(int, input().split()))

    # Vérification des conditions
    if len(list1) != n or any(i < 1 or i > 10**15 for i in list1):
        print(0)
    else:
        freq = {}
        maxi = 0
        count_max = 0
        
        # Construction du dictionnaire de fréquences et calcul du maximum en une seule passe
        for i in list1:
            freq[i] = freq.get(i, 0) + 1
            if freq[i] > maxi:
                maxi = freq[i]
                count_max = 1  # Reset le compteur pour cette fréquence maximale
            elif freq[i] == maxi:
                count_max += 1
        
        print(count_max)