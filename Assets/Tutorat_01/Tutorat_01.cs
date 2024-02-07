using System.Collections.Generic;
using UnityEngine;

public class Tutorat_01 : MonoBehaviour
{
    private void Awake()
    {
        // Appeler les fonctions des exos en paramètre d'un Debug.Log() pour les tester en lancant la scène.
        // Exemple : Debug.Log(MyFunction());
    }

    #region Basic Math
    private void Add()
    {
        // Créer une fonction qui retourne l'addition des deux chiffres passés en paramètres
        // Un paramètre est une variable qui doit être précisée lors de l'appel de la fonction.
        // Par exemple, cette fonction prends un int en tant que paramètre : void MyFunction(int param) { };
    }

    private void Multiply()
    {
        // Créer une fonction qui retourne la multiplication des deux chiffres passés en paramètres.
    }
    #endregion

    #region Listes
    private List<int> _numbers1 = new() { 5, 1, 10, 7, 4 };
    private List<int> _numbers2 = new() { 10, 5, 9 };
    private List<int> _numbers3 = new() { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    private void Sum()
    {
        // Créer une fonction retournant la somme de n'importe quelle liste de int passée en argument.
        // Utiliser les listes "numbers" pour tester dans Awake.
    }

    private void NumSeven()
    {
        // Créer une fonction qui va retourner un boolean si un 7 est présent dans la liste passée en argument.
        // Pour optimiser la fonction, elle doit s'arrêter dès qu'un 7 est trouvée.
        // Utiliser les listes "numbers" pour tester dans Awake.
    }

    private void HighestNum()
    {
        // Créer une fonction qui va retourner le chiffre le plus haut d'une liste de int.
        // Pour cela, utiliser une boucle qui va vérifier un à un chaque chiffre.
        // Utiliser les listes "numbers" pour tester dans Awake.
    }

    private void MultiplesOfThree()
    {
        // Créer une fonction qui va retourner une nouvelle liste comprenant
        // uniquement les multiples de 3 contenus dans la liste passée en paramètre.
        // Utiliser les listes "numbers" pour tester dans Awake.
    }
    #endregion

    #region Dictionnaires
    private Dictionary<int, string> phoneBook = new();

    private void Dictionary()
    {
        // Créer une fonction qui va ajouter une nouvelle entrée à notre dictionnaire "phoneBook".
        // Ensuite, elle retournera la valeur de cette nouvelle entrée.
    }
    #endregion

    #region Création d'un jeu de rôle

    // Liste des champs utilisés pour cette partie
    private int _health = 50;

    private int _mind = 50;
    private int _strength = 25;
    private int _dexterity = 70;

    private int _armor = 5;
    private int _shield = 10;

    private int _wyvernDamage = 50;
    private int _goblinDamage = 5;

    private void RollingDice()
    {
        // Créer une fonction pour simuler un lancé de dé classique de jdr.
        // La fonction doit retourner un string en fonction d'une réussite,
        // d'une réussite critique (5 ou moins), d'un échec ou d'un échec critique (95 ou plus).
        // La statistique du personnage sera nécessaire en paramètre de la fonction.
        // Le chiffre obtenu aléatoirement devra être inférieur ou égal à la statistique du personnage.

        int random = Random.Range(1, 100);
    }

    private void DamageCalculation()
    {
        // Créer une fonction qui va retourner les dégâts qui vont être infligés à la cible.
        // Les dégâts bruts sont passés en paramètre de la fonction.
        // Les dégâts sont réduis grâce à l'armure de la cible.
        // Ensuite, le bouclier absorbe une partie des dégâts.
    }

    private void TakeDamage()
    {
        // Créer une fonction qui va infliger des dégâts à notre héros
        // en fonction des dégâts passés en paramètres.
        // Les points de vie ne doivent pas descendre en-dessous de 0.
    }

    private void IsDead()
    {
        // Créer une fonction qui permet de vérifier si le héros est mort.
        // À combiner avec les fonctions précédentes pour des tests.
    }
    #endregion
}