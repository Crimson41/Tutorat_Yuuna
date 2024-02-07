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

    #region Dictionnaires, enum et structures
    private Dictionary<string, string> phoneBook = new();

    private void Dictionary()
    {
        // Créer une fonction qui va ajouter une nouvelle entrée à notre dictionnaire "phoneBook".
        // L'entrée doit être un numéro de téléphone associé à un prénom.
        // Ensuite, elle retournera la valeur de cette nouvelle entrée (le prénom).
    }

    // ----- //

    enum Season { Winter, Spring, Summer, Autumn }
    enum Month { January, February, March, April, May, June, July, August, September, October, November, December }

    private Dictionary<Month, Season> months = new()
    {
        { Month.January, Season.Winter }, { Month.February, Season.Winter },
        { Month.March, Season.Winter }, { Month.April, Season.Spring },
        { Month.May, Season.Spring }, { Month.June, Season.Spring },
        { Month.July, Season.Summer }, { Month.August, Season.Summer },
        { Month.September, Season.Summer }, { Month.October, Season.Autumn },
        { Month.November, Season.Autumn }, { Month.December, Season.Autumn },
    };

    private void GetSeason()
    {
        // Créer une fonction qui doit retourner la saison associée au mois passé en argument.
        // Il faudra utiliser les deux enum.
    }

    // ----- //

    private Dictionary<Season, List<Month>> seasons = new()
    {
        { Season.Winter, new List<Month> { Month.January, Month.February, Month.March } },
        { Season.Spring, new List<Month> { Month.April, Month.May, Month.June } },
        { Season.Summer, new List<Month> { Month.July, Month.August, Month.September } },
        { Season.Autumn, new List<Month> { Month.October, Month.November, Month.December } }
    };

    private void GetMonths()
    {
        // Créer une fonction qui doit retourner les mois associés à la saison passée en paramètre.
        // Il faudra utiliser les deux enum.
    }

    // ----- //

    struct Person
    {
        string Name;
        int Age;
    }

    private void AddPerson()
    {
        // Créer une fonction qui retourne une structure Person avec les paramètres Name et Age passés dans la fonction.
    }

    // ----- //

    // Créer un enum PokemonType contenant différents types de Pokémon.

    // ----- //

    // Créer désormais une structure pour représenter un pokémon, et une structure pour représenter un dresseur.
    // Le pokémon doit contenir des stats (au choix), un niveau et un type.
    // Le dresseur doit contenir un prénom, un nombre de badge et une liste de pokémon.

    private void CreateTrainer()
    {
        // Crée une fonction qui va créer un nouveau dresseur grâce au prénom passé en paramètre.
        // Il n'a donc aucun badge et aucun pokémon.
    }

    #endregion

    #region Création d'un jeu de rôle - les bases

    // Créer une structure Player contenant les stats suivantes sous la forme de int :
    // health, strength, mind, dexterity, armor, shield
    // Créer ensuite une instance de cette structure qui sera utilisée pour la suite.

    private void RollingDice()
    {
        // Créer une fonction pour simuler un lancé de dé classique de jdr.
        // La fonction doit retourner un string en fonction d'une réussite,
        // d'une réussite critique (5 ou moins), d'un échec ou d'un échec critique (95 ou plus).
        // Le chiffre obtenu aléatoirement devra être inférieur ou égal à la statistique du personnage.

        int random = Random.Range(1, 100);
    }

    private int _wyvernDamage = 50;
    private int _goblinDamage = 5;

    private void DamageCalculation()
    {
        // Créer une fonction qui va retourner les dégâts qui vont être infligés à la cible.
        // Les dégâts bruts sont passés en paramètre de la fonction.
        // Les dégâts sont réduis grâce à l'armure de la cible.
        // Ensuite, le bouclier absorbe une partie des dégâts.
    }

    private void TakeDamage()
    {
        // Créer une fonction qui va infliger des dégâts à notre héros en fonction
        // des dégâts passés en paramètres (la fonction DamageCalcultation peut directement être utilisée en paramètre).
        // Les points de vie ne doivent pas descendre en-dessous de 0.
    }

    private void IsDead()
    {
        // Créer une fonction qui permet de vérifier si le héros est mort.
        // À combiner avec les fonctions précédentes pour des tests.
    }
    #endregion
}