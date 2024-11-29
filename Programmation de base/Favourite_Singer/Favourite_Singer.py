def factorial(n):
    if n < 1 or n > 10:
        return 0  # Si le nombre n'est pas entre 1 et 10, retourner 0
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

# Demander à l'utilisateur d'entrer un nombre
num = int(input("Entrez un nombre entre 1 et 10 : "))

fact = factorial(num)
if fact == 0:
    print(0)
else:
    print(f"Factorielle de {num} : {fact}")