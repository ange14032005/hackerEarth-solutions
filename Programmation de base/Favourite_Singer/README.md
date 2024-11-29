# Favourite Singer

# Test de Performance des Implémentations de la Fonction Factorielle

## Objectif
Comparer les performances des trois implémentations de la fonction factorielle (en termes de temps et de mémoire) pour les langages **C**, **Python**, et **Java**. Le test consistera à calculer la factorielle d'un nombre entier compris entre 1 et 10.

## Implémentations
### Langage : **C**
- **Approche utilisée :** Itérative
- **Code :** Voir la section ci-dessous.
- **Complexité attendue :** O(n) pour le calcul de la factorielle, où `n` est le nombre donné en entrée.

### Langage : **Python**
- **Approche utilisée :** Itérative
- **Code :** Voir la section ci-dessous.
- **Complexité attendue :** O(n) pour le calcul de la factorielle, où `n` est le nombre donné en entrée.

### Langage : **Java**
- **Approche utilisée :** Itérative
- **Code :** Voir la section ci-dessous.
- **Complexité attendue :** O(n) pour le calcul de la factorielle, où `n` est le nombre donné en entrée.
---

## Scénarios de Test
1. **Entrée :** Nombre entre 1 et 10
   - **Attendu :** Calcul de la factorielle de `n`.
   - **Cas limite :** 1, 10
   - **Cas d'erreur :** Si `n` est inférieur à 1 ou supérieur à 10, le résultat doit être 0.

---

## Mesure des Performances
Pour chaque langage, mesurer les critères suivants :
1. **Temps d'exécution** pour calculer la factorielle (en secondes).
2. **Utilisation de la mémoire** pendant l'exécution.
   - Si possible, utilisez un outil ou une bibliothèque pour suivre la mémoire utilisée pendant l'exécution du calcul.

---

## Résultats Attendues
- **C** devrait être le plus rapide et le plus économe en mémoire en raison de la compilation directe en code machine.
- **Java** devrait être plus lent que C mais plus rapide que Python, car Java utilise la JVM.
- **Python** devrait être le plus lent des trois, étant donné que Python est un langage interprété et plus abstrait.