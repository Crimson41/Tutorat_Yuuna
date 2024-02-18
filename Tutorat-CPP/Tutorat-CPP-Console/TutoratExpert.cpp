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

// ----- EXERCICES : MAPS -----
// https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/

// -- Créer une fonction qui prends un string et un int en paramètre, puis crée une nouvelle map avec le string
// en tant que clé et le int en tant que valeur.

// -- Créer une fonction qui prends un string et un int en paramètre, puis qui l'ajoute à notre map _playersMap.

// -- Créer une fonction qui prends une map en paramètre et qui en retourne sa longueur (nombre d'élément).

// -- Créer une fonction qui affiche dans le log la valeur de chaque clé de la map passée en paramètre.

// -- Créer une fonction qui prends un string en paramètre et qui retourne si oui ou non une clé identique existe déjà
// dans notre map _playersMap.

// ----- EXERCICES : ENUMS -----
// Dans un jeu, un enum sera souvent utilisé à la place d'un string pour
// pouvoir identifier un attribut d'un personnage parmi une liste existante, quelle que soit sa taille.
// Cela permet d'éviter d'utiliser des string en dur dans notre code.

// -- Créer un enum "Size" qui contiendra plusieurs tailles.
// https://www.w3schools.com/c/c_enums.php

// -- Créer une classe d'enum "Seasons" qui contiendra les quatre saisons.
// -- Attention : les classes d'enum sont un peu particuliers par rapport aux enum classiques.
// Une classe d'enum est plus sécurisée à utiliser.
// Il faut rajouter le mot-clé "class" et préciser le nom de l'enum devant la valeur utilisée.
// Au final, une classe d'enum ressemble aux enum utilisés en c#.
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
// Une struct est totalement similaire à une classe, à l'exception qu'une struct ne possède pas de constructeur.
// En général, on utilise les struct pour créer de petits objets possèdant uniquement des attributs (variables).
// Si notre objet doit posséder des méthodes (fonctions), on optera plutôt pour une classe.
// https://www.w3schools.com/cpp/cpp_structs.asp

// -- Créer une struct "Pokemon" qui possède les informations suivantes :
// - un nom
// - un element
// - un niveau
// - un taux d'exp
// - un sexe

// -- Créer une fonction qui prends un Pokemon en paramètre et lui augmente son niveau de 1.

// -- Créer une struct "Dresseur" qui possède les informations suivantes :
// - un nom
// - un sexe
// - une équipe de Pokémon

// -- Créer une fonction qui va créer un nouveau Pokemon. Le nom et l'élément seront passés en paramètres.
// On définira le niveau à 1 et le taux d'exp à 0. Le sexe sera défini de façon aléatoire.
// https://www.codecademy.com/resources/docs/cpp/random (include déjà définis)

// -- Créer une fonction qui va créer un nouveau Dresseur. Le nom et le sexe seront passés en paramètre.
// Il faudra utiliser la fonction précédente pour créer une équipe de six pokemon à ce dresseur.

// ----- EXERCICES : CLASSES -----