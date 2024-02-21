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
	TutoColor c = BLUE; //OK
	c = TutoColor::RED; //Toujours OK

	//TutoElement e = FIRE; //Pas OK
	TutoElement e = TutoElement::FIRE; //OK
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

// -- Créer une fonction qui va créer une map prenant un élement en clé et une liste de Pokémon en valeur.
// Cette fonction aura un dresseur.
// L'objectif est le suivant : stocker tous les Pokemon du dresseur, regroupés par élément, dans la map.

// ----- EXERCICES : CLASSES -----

// -- Créer une classe "TutoratExpert_Song". Elle devra contenir :
// - un titre (string)
// - un interprète (string)
// - une année (int)
// - un genre (enum)
// https://www.w3schools.com/cpp/cpp_classes.asp

// -- Créer un constructeur pour la classe "TutoratExpert_Song".

// -- Créer une instance de la classe "TutoratExpert_Song" avec une chanson au choix depuis la classe "TutoratExpert".
// Ne pas oublier les include.

// Créer une classe "TutoratExpert_Animal". Elle devra contenir :
// - un nom (string)
// - une classification (enum) [mammifère, oiseau, poisson, reptile]
// - un nombre de pattes (int)

// -- Créer un constructeur pour la classe "TutoratExpert_Animal".
// Il est impossible de créer un animal par défaut, nous aurons donc besoin
// d'avoir notre nom, classification et nombre de pattes passés en paramètre de notre constructeur.

// Fichier .h
class MyParent
{
public:
	int _var1;
	int _var2;
	int _var3;

	MyParent(int, int, int); // Constructeur
};

// Fichier .cpp
MyParent::MyParent(int var1, int var2, int var3)
{
	_var1 = var1;
	_var2 = var2;
	_var3 = var3;
}

// -- Créer les classes "TutoratExpert_Dog" et "TutoratExpert_Snake" qui héritent de la classe "TutoratExpert_Animal".
// En c++, on déclare un enfant ainsi :
// class MyChild : public MyParent
// En c#, c'est la même écriture, sans le "public".

// -- Créer un constructeur pour les classes "TutoratExpert_Dog" et "TutoratExpert_Snake".
// Cette fois-ci, il est possible de définir par défaut la classification et le nombre de
// pattes de notre chien et de notre serpent,
// nous n'avons donc besoin que d'un paramètre dans notre constructeur pour le nom.
// Il est possible d'utiliser le constructeur d'un parent depuis un enfant afin d'éviter
// de répéter notre code. Dans notre exemple, le constructeur du parent prends trois éléments
// en paramètre, donc nous devons lui en envoyer trois également.
// Mais comme dit plus haut, nos enfants ne prendront qu'un seul élément en paramètre.
// Voici comment faire :

// Fichier .h
class MyChild : public MyParent
{
public:
	MyChild(int); // Constructeur
};

// Fichier .cpp
// On envoie les valeurs par défaut de l'enfant pour les deux autres paramètres du constructeur du parent
MyChild::MyChild(int var1) : MyParent(var1, 1, 1) { };

// -- Créer un second constructeur pour "TutoratExpert_Dog".
// Par défaut, nous créons toujours un chien avec 4 pattes. Mais imaginons que notre chien n'en possède que 2 ou 3 ?
// Il nous faut un second constructeur qui prends le nombre de pattes en paramètre en plus du nom.
// Il est possible de créer un second constructeur de la même façon qu'une fonction surchargée.
// Il faudra bien envoyer les arguments dans le bon ordre vers le constructeur du parent.

// Note : il est souvent utile d'avoir un constructeur par défaut qui ne prends aucun paramètre (= valeurs par défaut)
// ainsi qu'un second constructeur qui pourra personnaliser les données de notre classe dès sa création.
// Cela permet par exemple de créer des classes par défaut que l'on peut modifier par la suite si nécessaire.

// -- Créer la fonction virtuelle "MakeSound" dans "TutoratExpert_Animal",
// qui sera override dans "TutoratExpert_Dog" et qui devra retourner un string du son de l'animal.
// En c++, il n'existe pas de mot-clé "override". Dans la classe enfant,
// il n'est donc pas nécessaire de préciser de mot-clé tant que la signature de la
// fonction est identique à celle du parent.
// Fichier .h du parent : virtual void Test();
// Fichier .h de l'enfant : void Test();

// -- Rendre la classe "TutoratExpert_Animal" abstraite grâce à la fonction "MakeSound".
// En c++, il n'existe pas de mot-clé "abstract". Pour rendre une classe abstraite,
// il faut créer ce que l'on appelle une fonction "pure virtual".
// En reprenant notre example plus haut, il suffit de modifier la signature de la fonction du parent ainsi :
// virtual void Test() = 0;
// Ainsi, "Test" devient une fonction virtuelle pure et rends automatiquement la classe parent abstraite.

// Rappel :
// - une classe abstraite ne peut pas être instanciée (= on ne peut pas créer d'objet avec).
// - une fonction virtuelle peut être override ou non dans les classes enfants.
// => utile quand on veut un effet par défaut qui peut potentiellement être modifié.
// - une fonction virtuelle pure (= abstraite) doit obligatoirement être override dans les classes enfants.
// => utile quand on veut pouvoir définir un effet différent dans chaque enfant, mais que l'on souhaite pouvoir manipuler
// cette fonction depuis le type du parent. On va utiliser ce cas dans les prochains exercices.

// -- Créer un objet "TutoratExpert_Dog" et un objet "TutoratExpert_Snake",
// puis créer une seule liste qui contiendra ces deux objets.

// Indice :
// Il n'est pas possible de dire que "TutoratExpert_Dog" == "TutoratExpert_Snake".
// En revanche, il est possible de dire que "TutoratExpert_Dog" == "TutoratExpert_Animal".
// Nous pouvons donc manipuler des objets enfants grâce au type du parent.

// -- Créer une fonction qui appellera la fonction "MakeSound" de tous les objets contenus
// dans la liste créée précédemment.