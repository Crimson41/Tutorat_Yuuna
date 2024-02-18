#include "TutoratExpert.h"

void TutoratExpert::TestFunctionsHere()
{
    // Utiliser cette fonction pour tester les exercices.
}

// ----- EXERCICES : ENUMS -----

// -- Créer un enum "Size" qui contiendra plusieurs tailles.
// https://www.w3schools.com/c/c_enums.php

// -- Créer une classe d'enum "Seasons" qui contiendra les quatre saisons.
// -- Attention : les classes d'enum sont un peu particuliers par rapport aux enum classiques.
// Une classe d'enum est plus sécurisée à utiliser.
// Il faut rajouter le mot-clé "class" et préciser le nom de l'enum devant la valeur utilisée.
// Voici à quoi ressemble leur utilisation :

enum TutoColor { BLUE, RED, YELLOW }; // Enum classique
enum class TutoElement { FIRE, WATER, AIR }; // Classe enum

void MyFunction()
{
	TutoColor c = BLUE;
	TutoElement e = TutoElement::FIRE;
}

// -- Créer une fonction qui prends un enum de type "Seasons" créé précédement en paramètre.
// Elle doit retourner si oui on non l'enum est équivalent à "Winter".

// -- Créer une fonction qui prends un enum en paramètre et retourne un string différent en fonction de l'enum.
// Il faudra utiliser un switch pour cela.

// ----- EXERCICES : STRUCTS -----

// ----- EXERCICES : CLASSES -----