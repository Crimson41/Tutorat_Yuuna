using System.Collections.Generic;
using UnityEngine;

public class Tutorat_01 : MonoBehaviour
{
    private void Awake()
    {
        // Appeler les fonctions des exos en param�tre d'un Debug.Log() pour les tester en lancant la sc�ne.
        // Exemple : Debug.Log(MyFunction());
    }

    #region Basic Math
    private void Add()
    {
        // Cr�er une fonction qui retourne l'addition des deux chiffres pass�s en param�tres
        // Un param�tre est une variable qui doit �tre pr�cis�e lors de l'appel de la fonction.
        // Par exemple, cette fonction prends un int en tant que param�tre : void MyFunction(int param) { };
    }

    private void Multiply()
    {
        // Cr�er une fonction qui retourne la multiplication des deux chiffres pass�s en param�tres.
    }
    #endregion

    #region Listes
    private List<int> _numbers1 = new() { 5, 1, 10, 7, 4 };
    private List<int> _numbers2 = new() { 10, 5, 9 };
    private List<int> _numbers3 = new() { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    private void Sum()
    {
        // Cr�er une fonction retournant la somme de n'importe quelle liste de int pass�e en argument.
        // Utiliser les listes "numbers" pour tester dans Awake.
    }

    private void NumSeven()
    {
        // Cr�er une fonction qui va retourner un boolean si un 7 est pr�sent dans la liste pass�e en argument.
        // Pour optimiser la fonction, elle doit s'arr�ter d�s qu'un 7 est trouv�e.
        // Utiliser les listes "numbers" pour tester dans Awake.
    }

    private void HighestNum()
    {
        // Cr�er une fonction qui va retourner le chiffre le plus haut d'une liste de int.
        // Pour cela, utiliser une boucle qui va v�rifier un � un chaque chiffre.
        // Utiliser les listes "numbers" pour tester dans Awake.
    }

    private void MultiplesOfThree()
    {
        // Cr�er une fonction qui va retourner une nouvelle liste comprenant
        // uniquement les multiples de 3 contenus dans la liste pass�e en param�tre.
        // Utiliser les listes "numbers" pour tester dans Awake.
    }
    #endregion

    #region Dictionnaires
    private Dictionary<int, string> phoneBook = new();

    private void Dictionary()
    {
        // Cr�er une fonction qui va ajouter une nouvelle entr�e � notre dictionnaire "phoneBook".
        // Ensuite, elle retournera la valeur de cette nouvelle entr�e.
    }
    #endregion

    #region Cr�ation d'un jeu de r�le

    // Liste des champs utilis�s pour cette partie
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
        // Cr�er une fonction pour simuler un lanc� de d� classique de jdr.
        // La fonction doit retourner un string en fonction d'une r�ussite,
        // d'une r�ussite critique (5 ou moins), d'un �chec ou d'un �chec critique (95 ou plus).
        // La statistique du personnage sera n�cessaire en param�tre de la fonction.
        // Le chiffre obtenu al�atoirement devra �tre inf�rieur ou �gal � la statistique du personnage.

        int random = Random.Range(1, 100);
    }

    private void DamageCalculation()
    {
        // Cr�er une fonction qui va retourner les d�g�ts qui vont �tre inflig�s � la cible.
        // Les d�g�ts bruts sont pass�s en param�tre de la fonction.
        // Les d�g�ts sont r�duis gr�ce � l'armure de la cible.
        // Ensuite, le bouclier absorbe une partie des d�g�ts.
    }

    private void TakeDamage()
    {
        // Cr�er une fonction qui va infliger des d�g�ts � notre h�ros
        // en fonction des d�g�ts pass�s en param�tres.
        // Les points de vie ne doivent pas descendre en-dessous de 0.
    }

    private void IsDead()
    {
        // Cr�er une fonction qui permet de v�rifier si le h�ros est mort.
        // � combiner avec les fonctions pr�c�dentes pour des tests.
    }
    #endregion
}