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
	TutoColor c = BLUE; //OK
	c = TutoColor::RED; //Toujours OK

	//TutoElement e = FIRE; //Pas OK
	TutoElement e = TutoElement::FIRE; //OK
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

// -- Cr�er une fonction qui va cr�er une map prenant un �lement en cl� et une liste de Pok�mon en valeur.
// Cette fonction aura un dresseur.
// L'objectif est le suivant : stocker tous les Pokemon du dresseur, regroup�s par �l�ment, dans la map.

// ----- EXERCICES : CLASSES -----

// -- Cr�er une classe "TutoratExpert_Song". Elle devra contenir :
// - un titre (string)
// - un interpr�te (string)
// - une ann�e (int)
// - un genre (enum)
// https://www.w3schools.com/cpp/cpp_classes.asp

// -- Cr�er un constructeur pour la classe "TutoratExpert_Song".

// -- Cr�er une instance de la classe "TutoratExpert_Song" avec une chanson au choix depuis la classe "TutoratExpert".
// Ne pas oublier les include.

// Cr�er une classe "TutoratExpert_Animal". Elle devra contenir :
// - un nom (string)
// - une classification (enum) [mammif�re, oiseau, poisson, reptile]
// - un nombre de pattes (int)

// -- Cr�er un constructeur pour la classe "TutoratExpert_Animal".
// Il est impossible de cr�er un animal par d�faut, nous aurons donc besoin
// d'avoir notre nom, classification et nombre de pattes pass�s en param�tre de notre constructeur.

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

// -- Cr�er les classes "TutoratExpert_Dog" et "TutoratExpert_Snake" qui h�ritent de la classe "TutoratExpert_Animal".
// En c++, on d�clare un enfant ainsi :
// class MyChild : public MyParent
// En c#, c'est la m�me �criture, sans le "public".

// -- Cr�er un constructeur pour les classes "TutoratExpert_Dog" et "TutoratExpert_Snake".
// Cette fois-ci, il est possible de d�finir par d�faut la classification et le nombre de
// pattes de notre chien et de notre serpent,
// nous n'avons donc besoin que d'un param�tre dans notre constructeur pour le nom.
// Il est possible d'utiliser le constructeur d'un parent depuis un enfant afin d'�viter
// de r�p�ter notre code. Dans notre exemple, le constructeur du parent prends trois �l�ments
// en param�tre, donc nous devons lui en envoyer trois �galement.
// Mais comme dit plus haut, nos enfants ne prendront qu'un seul �l�ment en param�tre.
// Voici comment faire :

// Fichier .h
class MyChild : public MyParent
{
public:
	MyChild(int); // Constructeur
};

// Fichier .cpp
// On envoie les valeurs par d�faut de l'enfant pour les deux autres param�tres du constructeur du parent
MyChild::MyChild(int var1) : MyParent(var1, 1, 1) { };

// -- Cr�er un second constructeur pour "TutoratExpert_Dog".
// Par d�faut, nous cr�ons toujours un chien avec 4 pattes. Mais imaginons que notre chien n'en poss�de que 2 ou 3 ?
// Il nous faut un second constructeur qui prends le nombre de pattes en param�tre en plus du nom.
// Il est possible de cr�er un second constructeur de la m�me fa�on qu'une fonction surcharg�e.
// Il faudra bien envoyer les arguments dans le bon ordre vers le constructeur du parent.

// Note : il est souvent utile d'avoir un constructeur par d�faut qui ne prends aucun param�tre (= valeurs par d�faut)
// ainsi qu'un second constructeur qui pourra personnaliser les donn�es de notre classe d�s sa cr�ation.
// Cela permet par exemple de cr�er des classes par d�faut que l'on peut modifier par la suite si n�cessaire.

// -- Cr�er la fonction virtuelle "MakeSound" dans "TutoratExpert_Animal",
// qui sera override dans "TutoratExpert_Dog" et qui devra retourner un string du son de l'animal.
// En c++, il n'existe pas de mot-cl� "override". Dans la classe enfant,
// il n'est donc pas n�cessaire de pr�ciser de mot-cl� tant que la signature de la
// fonction est identique � celle du parent.
// Fichier .h du parent : virtual void Test();
// Fichier .h de l'enfant : void Test();

// -- Rendre la classe "TutoratExpert_Animal" abstraite gr�ce � la fonction "MakeSound".
// En c++, il n'existe pas de mot-cl� "abstract". Pour rendre une classe abstraite,
// il faut cr�er ce que l'on appelle une fonction "pure virtual".
// En reprenant notre example plus haut, il suffit de modifier la signature de la fonction du parent ainsi :
// virtual void Test() = 0;
// Ainsi, "Test" devient une fonction virtuelle pure et rends automatiquement la classe parent abstraite.

// Rappel :
// - une classe abstraite ne peut pas �tre instanci�e (= on ne peut pas cr�er d'objet avec).
// - une fonction virtuelle peut �tre override ou non dans les classes enfants.
// => utile quand on veut un effet par d�faut qui peut potentiellement �tre modifi�.
// - une fonction virtuelle pure (= abstraite) doit obligatoirement �tre override dans les classes enfants.
// => utile quand on veut pouvoir d�finir un effet diff�rent dans chaque enfant, mais que l'on souhaite pouvoir manipuler
// cette fonction depuis le type du parent. On va utiliser ce cas dans les prochains exercices.

// -- Cr�er un objet "TutoratExpert_Dog" et un objet "TutoratExpert_Snake",
// puis cr�er une seule liste qui contiendra ces deux objets.

// Indice :
// Il n'est pas possible de dire que "TutoratExpert_Dog" == "TutoratExpert_Snake".
// En revanche, il est possible de dire que "TutoratExpert_Dog" == "TutoratExpert_Animal".
// Nous pouvons donc manipuler des objets enfants gr�ce au type du parent.

// -- Cr�er une fonction qui appellera la fonction "MakeSound" de tous les objets contenus
// dans la liste cr��e pr�c�demment.