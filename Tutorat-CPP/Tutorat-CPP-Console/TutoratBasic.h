#pragma once

// Un fichier .h contient une classe et la liste de ses attributs et m�thodes (fonctions)
// Un attribut est une variable de classe - une m�thode est une fonction de classe

// Seule "la signature" des fonctions est pr�sente dans un fichier .h
// Il faudra inscrire sa "d�finition" dans le fichier .cpp (voir tuto l�-bas)

// -- Qu'est-ce que la signature d'une fonction ?
// C'est ce qui d�termine le type qu'elle renvoie, son nom et les potentiels param�tres qu'elle prends.
// [type] [nom]([param�tres])
// Exemple : void MyFunction(int)

// -- Comment pr�ciser l'accessibilit� ?
// En c#, on �crirait l'accessibilit� ainsi : private void MyFunction(int)
// En c++, on range les donn�es par accessibilit� (voir la classe ci-dessous)

// -- Gestion des include
// Tout au long du d�veloppement en c++, il faut rajouter diff�rents include.
// Afin d'�viter de les r��crire partout, il peut �tre utile de cr�er un fichier.h
// qui va contenir tous les include n�cessaires.
#include "Dependencies.h"
// Il pourra �galement contenir des "DEFINE" ou d'autres donn�es utilis�es globalement.

class TutoratBasic
{
private:
	// Toutes les donn�es inscrites ici seront private

protected:
	// Toutes les donn�es inscrites ici seront protected

public:
	// Toutes les donn�es inscrites ici seront public

	// Voici le constructeur de la classe. Il s'agit d'une m�thode qui se lance
	// automatiquement lorsqu'on instancie la classe.
	// Le constructeur ne retourne rien et doit forc�ment avoir le m�me nom que la classe.
	TutoratBasic();

	void TestFunctionsHere();
	void UseConsole();
	void MyFunction(int);
};