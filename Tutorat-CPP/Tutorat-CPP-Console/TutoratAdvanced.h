#pragma once
#include "Dependencies.h"

class TutoratAdvanced
{
private:
	// Cr�ation d'un array : on pr�cise sa taille statique entre crochet
	int _numbersArray[3];

	// Cr�ation d'un vector (= liste en c#) : std::vector<[type]> [nom];
	// Un include est n�cessaire.
	std::vector<int> _numbersVector;

public:
	TutoratAdvanced();

	void TestFunctionsHere();

	int FirstArray(int, int, int);
	//int LengthArray(array <int,10>);

};