#include "TutoratExpert.h"

void TutoratExpert::TestFunctionsHere()
{
    // Utiliser cette fonction pour tester les exercices.
}

// ----- EXERCICES : ENUMS -----

// -- Cr�er un enum "Size" qui contiendra plusieurs tailles.
// https://www.w3schools.com/c/c_enums.php

// -- Cr�er une classe d'enum "Seasons" qui contiendra les quatre saisons.
// -- Attention : les classes d'enum sont un peu particuliers par rapport aux enum classiques.
// Une classe d'enum est plus s�curis�e � utiliser.
// Il faut rajouter le mot-cl� "class" et pr�ciser le nom de l'enum devant la valeur utilis�e.
// Voici � quoi ressemble leur utilisation :

enum TutoColor { BLUE, RED, YELLOW }; // Enum classique
enum class TutoElement { FIRE, WATER, AIR }; // Classe enum

void MyFunction()
{
	TutoColor c = BLUE;
	TutoElement e = TutoElement::FIRE;
}

// -- Cr�er une fonction qui prends un enum de type "Seasons" cr�� pr�c�dement en param�tre.
// Elle doit retourner si oui on non l'enum est �quivalent � "Winter".

// -- Cr�er une fonction qui prends un enum en param�tre et retourne un string diff�rent en fonction de l'enum.
// Il faudra utiliser un switch pour cela.

// ----- EXERCICES : STRUCTS -----

// ----- EXERCICES : CLASSES -----