#pragma once
#include "Dependencies.h"

class TutoratExpert
{
private:
	// Cr�ation d'une map (= dictionary en c#)
	// std::map<[type de la cl�], [type de la valeur]> [nom];
	std::map<std::string, int> _playersMap;

public:
	TutoratExpert();

	void TestFunctionsHere();
};