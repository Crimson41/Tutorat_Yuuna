#pragma once

// Un fichier .h contient une classe et la liste de ses attributs et méthodes (fonctions)
// Un attribut est une variable de classe - une méthode est une fonction de classe

// Seule "la signature" des fonctions est présente dans un fichier .h
// Il faudra inscrire sa "définition" dans le fichier .cpp (voir tuto là-bas)

// -- Qu'est-ce que la signature d'une fonction ?
// C'est ce qui détermine le type qu'elle renvoie, son nom et les potentiels paramètres qu'elle prends.
// [type] [nom]([paramètres])
// Exemple : void MyFunction(int)

// -- Comment préciser l'accessibilité ?
// En c#, on écrirait l'accessibilité ainsi : private void MyFunction(int)
// En c++, on range les données par accessibilité (voir la classe ci-dessous)

// -- Gestion des include
// Tout au long du développement en c++, il faut rajouter différents include.
// Afin d'éviter de les réécrire partout, il peut être utile de créer un fichier.h
// qui va contenir tous les include nécessaires.
#include "Dependencies.h"
// Il pourra également contenir des "DEFINE" ou d'autres données utilisées globalement.

class TutoratBasic
{
private:
	// Toutes les données inscrites ici seront private

protected:
	// Toutes les données inscrites ici seront protected

public:
	// Toutes les données inscrites ici seront public

	// Voici le constructeur de la classe. Il s'agit d'une méthode qui se lance
	// automatiquement lorsqu'on instancie la classe.
	// Le constructeur ne retourne rien et doit forcément avoir le même nom que la classe.
	TutoratBasic();

	void TestFunctionsHere();
	void UseConsole();
	void MyFunction(int);
};