#include "TutoratExpert.h"

TutoratExpert::TutoratExpert()
{
	// ----- Initialisation d'une map -----
	// Une map est une structure poss�dant des pairs cl� / valeur.
	// Il faut d'abord pr�ciser le type de la cl�, puis celui de la valeur.
	// Comme pour les array et vector, il est possible d'initialiser une map avant
	// ou apr�s sa d�claration.

	std::map<std::string, int> zip = {
		{ "Lyon", 69000 },
		{ "Paris", 75000 }
	};

	std::map<std::string, std::string> contacts;
	contacts["Emilie"] = "07 77 36 35 88";

	// Chaque cl� d'une map est unique et permet d'acc�der � une valeur associ�e.
	// On peut par exemple l'utiliser pour stocker les diff�rents joueurs d'un jeu et leur score associ�.

	_playersMap = {
		{ "Emilie", 100 },
		{ "Alexis", 0 }
	};

	// Les maps sont �norm�ment utilis�es pour stocker des donn�es.
	// Il est notamment possible de ranger des array et vector dans des maps.
	// Exemple : une map contenant la liste des serveurs d'un jeu avec leur liste de joueurs.

	std::map<std::string, std::vector<std::string>> playersOnServers = {
		{ "Serveur1", { "Emilie", "Alexis" } },
		{ "Serveur2", { } } // Ici, le serveur est vide, donc le vector l'est �galement.
	};
}

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

// ----- EXERCICES : MAPS -----

// ----- EXERCICES : STRUCTS -----

// ----- EXERCICES : CLASSES -----