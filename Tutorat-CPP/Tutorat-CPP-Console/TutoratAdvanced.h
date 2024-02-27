#pragma once
#include "Dependencies.h"

class TutoratAdvanced
{
private:
	// Création d'un array : on précise sa taille statique entre crochet
	int _numbersArray[3];

	// Création d'un vector (= liste en c#) : std::vector<[type]> [nom];
	// Un include est nécessaire.
	std::vector<int> _numbersVector;

public:
	TutoratAdvanced();

	void TestFunctionsHere();

	int FirstArray(int, int, int);
	//int LengthArray(array <int,10>);

};