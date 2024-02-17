#include "TutoratBasic.h"

// Un fichier .cpp contient "les d�finitions" des m�thodes d'une classe.
// On utilise la signature d'une fonction en pr�cisant le nom de ses param�tres et son corps.
// Attention, en cpp, il faut pr�ciser le nom de la classe devant le nom de la fonction.
// Exemple : void MyClass::MyFunction(int myParam) { [corps de la fonction] }

void TutoratBasic::HelloWorld()
{
    std::cout << "Hello World!\n";
}

TutoratBasic::TutoratBasic() // La d�finition du constructeur de la classe.
{
    // Lorsqu'une classe poss�de une instance de classe, un vector, un array ou une map
    // en tant que champs, il faut l'initialiser dans le constructeur (de pr�f�rence) ou ailleurs.
    // Ici, on initialise notre vector _numbers.
    _numbers = { 1, 2, 3, 4, 5 };

    // Qu'est-ce qu'une instance de classe ?
    // Il s'agit d'une variable qui poss�de le type d'une classe et peut donc utiliser ses m�thodes.
    // Exemple : TutoratBasic tb;
    // tb est une instance de la classe TutoratBasic.
    // On peut donc utiliser ses fonctions : tb.HelloWorld();
}

// ----- EXERCICES -----
// Cr�er les fonctions suivantes :

// -- Une fonction qui prends deux int en param�tres, les additionne et retourne le r�sultat

// -- Une fonction qui prends deux int en param�tres, les multiplie et retourne le r�sultat

// -- Une fonction qui prends un int en param�tre, y ajoute 10 et retourne le r�sultat

// -- Une fonction qui prends un int en param�tre, et retourne si oui ou non ce int est strictement inf�rieur � 10

// -- Une fonction qui prends un int en param�tre, et retourne si oui ou non ce int est �gal 10

// -- Une fonction qui prends un int en param�tre. Si le int est �gal � 2, on arr�te tout et on retourne -1.
// Sinon, on lui ajoute 10 puis on le divise par 2 et on retourne le r�sultat.

// -- Une fonction qui prends trois int en param�tre et les ajoute � un vector nouvellement cr�� qu'elle retourne
// https://hackingcpp.com/cpp/std/vector_intro.html

// Pour la suite : utiliser le vector _numbers pour les tests.

// -- Une fonction qui prends un vector de int en param�tre, et en retourne la somme

// -- Une fonction qui prends un vector de int en param�tre, y ajoute d'abord 10 puis en retourne la somme.

// -- Une fonction qui prends un vector de int en param�tre, multiplie chacun de ses nombres et en retourne la somme.

// Pour la suite, quelques liens utiles :
// https://www.w3schools.com/cpp/cpp_for_loop.asp
// https://www.w3schools.com/cpp/cpp_while_loop.asp
// https://www.w3schools.com/cpp/cpp_do_while_loop.asp

// -- Deux fonctions qui prennent un vector de int en param�tre, et qui s'arr�tent pour retourner le chiffre 4 s'il existe.
// Sinon, elles retournent -1.
// La premi�re doit utiliser une boucle for, la seconde une boucle while.

// -- Une fonction qui prends un vector de int en param�tre, qui va d'abord multiplier chacun de ses nombres par lui-m�me, puis qui va s'arr�ter
// pour retourner le chiffre 4 s'il existe apr�s multiplication. Sinon, elle retourne -1.

// -- Une fonction qui prends deux int en param�tre : largeur et hauteur. Il faut ensuite dessiner une forme avec un nombre de * �quivalent � la hauteur
// et la largeur.
// Il faudra utiliser une boucle dans une boucle.
// Solution � regarder seulement en cas d'�chec :
// https://openclassrooms.com/fr/courses/1894236-apprenez-a-programmer-en-c/7533556-decoupez-votre-programme-en-fonctions#/id/r-7533680

// -- Une fonction qui prends un vector de int en param�tre et en retourne sa longueur (nombre d'�l�ments � l'int�rieur).

// -- Une fonction qui prends un vector de int en param�tre et retourne l'index du nombre 4 s'il existe. Sinon, elle retourne -1.

// -- Une fonction qui prends un int en param�tre, et retourne un message personnalis� en fonction du int
// Il faut utiliser un switch pour �a. On veut retourner un message diff�rent si on obtient 1, 2 ou 3.
// Sinon, on veut retourner un message g�n�rique pour tous les autres chiffres.
// https://www.w3schools.com/cpp/cpp_switch.asp