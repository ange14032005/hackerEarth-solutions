# Favourite Singer

# Test de Performance des Impl�mentations de la Fonction Factorielle

## Objectif
Comparer les performances des trois impl�mentations de la fonction factorielle (en termes de temps et de m�moire) pour les langages **C**, **Python**, et **Java**. Le test consistera � calculer la factorielle d'un nombre entier compris entre 1 et 10.

## Impl�mentations
### Langage : **C**
- **Approche utilis�e :** It�rative
- **Code :** Voir la section ci-dessous.
- **Complexit� attendue :** O(n) pour le calcul de la factorielle, o� `n` est le nombre donn� en entr�e.

### Langage : **Python**
- **Approche utilis�e :** It�rative
- **Code :** Voir la section ci-dessous.
- **Complexit� attendue :** O(n) pour le calcul de la factorielle, o� `n` est le nombre donn� en entr�e.

### Langage : **Java**
- **Approche utilis�e :** It�rative
- **Code :** Voir la section ci-dessous.
- **Complexit� attendue :** O(n) pour le calcul de la factorielle, o� `n` est le nombre donn� en entr�e.
---

## Sc�narios de Test
1. **Entr�e :** Nombre entre 1 et 10
   - **Attendu :** Calcul de la factorielle de `n`.
   - **Cas limite :** 1, 10
   - **Cas d'erreur :** Si `n` est inf�rieur � 1 ou sup�rieur � 10, le r�sultat doit �tre 0.

---

## Mesure des Performances
Pour chaque langage, mesurer les crit�res suivants :
1. **Temps d'ex�cution** pour calculer la factorielle (en secondes).
2. **Utilisation de la m�moire** pendant l'ex�cution.
   - Si possible, utilisez un outil ou une biblioth�que pour suivre la m�moire utilis�e pendant l'ex�cution du calcul.

---

## R�sultats Attendues
- **C** devrait �tre le plus rapide et le plus �conome en m�moire en raison de la compilation directe en code machine.
- **Java** devrait �tre plus lent que C mais plus rapide que Python, car Java utilise la JVM.
- **Python** devrait �tre le plus lent des trois, �tant donn� que Python est un langage interpr�t� et plus abstrait.