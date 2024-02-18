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

// ----- EXERCICES : MAPS -----
// https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/

// -- Cr�er une fonction qui prends un string et un int en param�tre, puis cr�e une nouvelle map avec le string
// en tant que cl� et le int en tant que valeur.

// -- Cr�er une fonction qui prends un string et un int en param�tre, puis qui l'ajoute � notre map _playersMap.

// -- Cr�er une fonction qui prends une map en param�tre et qui en retourne sa longueur (nombre d'�l�ment).

// -- Cr�er une fonction qui affiche dans le log la valeur de chaque cl� de la map pass�e en param�tre.

// -- Cr�er une fonction qui prends un string en param�tre et qui retourne si oui ou non une cl� identique existe d�j�
// dans notre map _playersMap.

// ----- EXERCICES : ENUMS -----
// Dans un jeu, un enum sera souvent utilis� � la place d'un string pour
// pouvoir identifier un attribut d'un personnage parmi une liste existante, quelle que soit sa taille.
// Cela permet d'�viter d'utiliser des string en dur dans notre code.

// -- Cr�er un enum "Size" qui contiendra plusieurs tailles.
// https://www.w3schools.com/c/c_enums.php

// -- Cr�er une classe d'enum "Seasons" qui contiendra les quatre saisons.
// -- Attention : les classes d'enum sont un peu particuliers par rapport aux enum classiques.
// Une classe d'enum est plus s�curis�e � utiliser.
// Il faut rajouter le mot-cl� "class" et pr�ciser le nom de l'enum devant la valeur utilis�e.
// Au final, une classe d'enum ressemble aux enum utilis�s en c#.
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
// Une struct est totalement similaire � une classe, � l'exception qu'une struct ne poss�de pas de constructeur.
// En g�n�ral, on utilise les struct pour cr�er de petits objets poss�dant uniquement des attributs (variables).
// Si notre objet doit poss�der des m�thodes (fonctions), on optera plut�t pour une classe.
// https://www.w3schools.com/cpp/cpp_structs.asp

// -- Cr�er une struct "Pokemon" qui poss�de les informations suivantes :
// - un nom
// - un element
// - un niveau
// - un taux d'exp
// - un sexe

// -- Cr�er une fonction qui prends un Pokemon en param�tre et lui augmente son niveau de 1.

// -- Cr�er une struct "Dresseur" qui poss�de les informations suivantes :
// - un nom
// - un sexe
// - une �quipe de Pok�mon

// -- Cr�er une fonction qui va cr�er un nouveau Pokemon. Le nom et l'�l�ment seront pass�s en param�tres.
// On d�finira le niveau � 1 et le taux d'exp � 0. Le sexe sera d�fini de fa�on al�atoire.
// https://www.codecademy.com/resources/docs/cpp/random (include d�j� d�finis)

// -- Cr�er une fonction qui va cr�er un nouveau Dresseur. Le nom et le sexe seront pass�s en param�tre.
// Il faudra utiliser la fonction pr�c�dente pour cr�er une �quipe de six pokemon � ce dresseur.

// ----- EXERCICES : CLASSES -----