#pragma once
#include "Dependencies.h"

class TutoratExpert
{
private:
	// Création d'une map (= dictionary en c#)
	// std::map<[type de la clé], [type de la valeur]> [nom];
	std::map<std::string, int> _playersMap;

public:
	TutoratExpert();

	void TestFunctionsHere();
};