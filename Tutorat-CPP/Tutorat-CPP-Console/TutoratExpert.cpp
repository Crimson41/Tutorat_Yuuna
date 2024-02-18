#include "TutoratExpert.h"

TutoratExpert::TutoratExpert()
{
	// ----- Initialisation d'une map -----
	// Une map est une structure possédant des pairs clé / valeur.
	// Il faut d'abord préciser le type de la clé, puis celui de la valeur.
	// Comme pour les array et vector, il est possible d'initialiser une map avant
	// ou après sa déclaration.

	std::map<std::string, int> zip = {
		{ "Lyon", 69000 },
		{ "Paris", 75000 }
	};

	std::map<std::string, std::string> contacts;
	contacts["Emilie"] = "07 77 36 35 88";

	// Chaque clé d'une map est unique et permet d'accéder à une valeur associée.
	// On peut par exemple l'utiliser pour stocker les différents joueurs d'un jeu et leur score associé.

	_playersMap = {
		{ "Emilie", 100 },
		{ "Alexis", 0 }
	};

	// Les maps sont énormément utilisées pour stocker des données.
	// Il est notamment possible de ranger des array et vector dans des maps.
	// Exemple : une map contenant la liste des serveurs d'un jeu avec leur liste de joueurs.

	std::map<std::string, std::vector<std::string>> playersOnServers = {
		{ "Serveur1", { "Emilie", "Alexis" } },
		{ "Serveur2", { } } // Ici, le serveur est vide, donc le vector l'est également.
	};
}

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

// ----- EXERCICES : MAPS -----

// ----- EXERCICES : STRUCTS -----

// ----- EXERCICES : CLASSES -----