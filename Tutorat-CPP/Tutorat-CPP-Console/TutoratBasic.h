#pragma once
#include <iostream>
#include <vector>

// Un fichier .h contient une classe et la liste de ses champs et méthodes (fonctions)
// Seule "la signature" des fonctions est présente dans un fichier .h
// Il faudra inscrire sa "déclaration" dans le fichier .cpp (voir tuto là-bas)

// Qu'est-ce que la signature d'une fonction ?
// C'est ce qui détermine le type qu'elle renvoie, son nom et les potentiels paramètres qu'elle prends.
// [type] [nom]([paramètres])
// Exemple : void MyFunction(int)

// Comment préciser l'accessibilité ?
// En c#, on écrirait l'accessibilité ainsi : private void Test(int)
// En c++, on range les données par accessibilité (voir la classe ci-dessous)

class TutoratBasic
{
private:
	// Toutes les données inscrites ici seront private

	// Création d'un vector (= liste en c#) : std::vector<[type]> [nom];
	// Un include est nécessaire.
	std::vector<int> _numbersVector;
	int _numbersArray[3];

protected:
	// Toutes les données inscrites ici seront protected

public:
	// Toutes les données inscrites ici seront public
	void HelloWorld();

	// Voici le constructeur de la classe. Il s'agit d'une méthode qui se lance
	// automatiquement lorsqu'on instancie la classe.
	// Le constructeur ne retourne rien et doit forcément avoir le même nom que la classe.
	TutoratBasic();
};