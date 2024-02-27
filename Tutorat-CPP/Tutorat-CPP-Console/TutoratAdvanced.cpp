#include "TutoratAdvanced.h"
#include "MyClass.h"

TutoratAdvanced::TutoratAdvanced()
{
    // Lorsqu'une classe poss�de un vector, un array ou une map
    // en tant que champs, il faut l'initialiser avant de l'utiliser.

    // ----- Initilisation d'un array -----
    // En c++, un array doit toujours avoir une taille statique.
    // Il faut donc d�clarer un tableau ainsi :

    int array[3];

    // Mais cela ne suffit pas � l'initialiser.
    // Il y a deux mani�res de proc�der. La plus simple est de directement
    // initialiser le tableau en m�me temps que sa d�claration.

    int simpleArray[3] = { 1, 2, 3 };

    // La seconde m�thode est d'attribuer les valeurs du tableau apr�s sa d�claration.
    // Mais cela n�cessite d'entrer chaque valeur une par une (ou via une boucle si possible).

    _numbersArray[0] = 1;
    _numbersArray[1] = 2;
    _numbersArray[2] = 3;

    // ----- Initialisation d'un vector -----
    // Un vector n'a pas de taille statique, il est donc modulable � volont�.
    // En g�n�ral, on pr�f�rera toujours utiliser un vector, mais cela n�cessite plus de m�moire.
    // Tout comme l'array, il est possible d'initialiser un vector en m�me temps que sa d�claration.

    std::vector<int> vector = { 1, 2, 3 };

    // Mais il est �galement possible de les initialiser en une seule ligne apr�s leur d�claration.
    _numbersVector = { 1, 2, 3, 4, 5 };

    // ----- Cas particuliers : les instances de classe -----
    // Qu'est-ce qu'une instance de classe ?
    // Il s'agit d'une variable dont le type est le nom de notre classe.
    
    MyClass mc; // mc est une instance de la classe MyClass.

    // On appelle �galement cette variable "un objet".
    // Une classe d�finie les plans de l'objet, et la variable cr�e l'objet � partir de ce plan.

    mc.MyFunction();

    // En c++, il n'est pas n�cessaire d'initialiser une classe si la variable n'est pas un pointeur.
    // Cependant, il est tr�s courant que les instances de classe soient des pointeurs,
    // parce que cela permet de stocker toutes les donn�es de la classe tout au long du programme.
    // � ce moment-l�, la variable n�cessitera une initialisation, avec une syntaxe �quivalente au c#.

    MyClass* mcPointer = new MyClass();

    // Comme pour les array et vector, on peut les initialiser pendant ou apr�s la d�claration.

    MyClass* mcPointer2;
    mcPointer2 = new MyClass();

    // Il faut toujours supprimer un pointeur � la fin de son utilisation afin d'�viter une fuite de m�moire.

    delete mcPointer, mcPointer2;

    // Pour ne pas risquer de fuite de m�moire avec les pointeurs, il est possible d'utiliser un std::unique_ptr<[type]>.
    // Il faut alors initialiser ce pointeur avec std::make_unique<[type]>().

    std::unique_ptr<MyClass> uniquePointer = std::make_unique<MyClass>();
    uniquePointer->MyFunction();

    // Leur utilisation est un peu plus complexe donc on ne les utilisera pas forc�ment tout de suite.
    // https://learn.microsoft.com/fr-fr/cpp/cpp/how-to-create-and-use-unique-ptr-instances?view=msvc-170
    // De m�me, nous verrons l'initialisation d'une map plus tard.
}

void TutoratAdvanced::TestFunctionsHere()
{
    // Utiliser cette fonction pour tester les exercices.

    std::cout << FirstArray(3, 2, 3) << std::endl;

}



// ----- EXERCICES : ARRAY -----

// -- Cr�er une fonction qui prends trois int en param�tre et les ajoute � un array nouvellement cr��.
// Elle retourne ensuite le premier �l�ment du tableau.
// https://www.w3schools.com/cpp/cpp_arrays.asp

int TutoratAdvanced::FirstArray(int a, int b, int c)
{

    int simpleArray[3] = { a, b, c };

    return simpleArray[0];
}

// Pour la suite : utiliser l'array _numbersArray.

// -- Cr�er une fonction qui prends un array de int en param�tre et en retourne sa longueur (nombre d'�l�ments � l'int�rieur).



// -- Cr�er une fonction qui prends un array de int en param�tre et en retourne le dernier �l�ment.
// Indice : le dernier �l�ment se trouvera � l'index �quivalent � la taille de l'array - 1.

// ----- EXERCICES : VECTOR -----

// -- Cr�er une fonction qui prends trois int en param�tre et les ajoute � un vector nouvellement cr�� qu'elle retourne.
// https://hackingcpp.com/cpp/std/vector_intro.html

// Pour la suite : utiliser le vector _numbersVector.

// -- Cr�er une fonction qui prends un vector de int en param�tre, et en retourne la somme.

// -- Cr�er une fonction qui prends un vector de int en param�tre, y ajoute d'abord 10 puis en retourne la somme.

// -- Cr�er une fonction qui prends un vector de int en param�tre, multiplie chacun de ses nombres et en retourne la somme.

// -- Cr�er une fonction qui prends un vector de int et un int en param�tre, qui ajoute le int dans le vector puis qui retourne le vector.

// ----- EXERCICES : BOUCLES -----

// Pour la suite, quelques liens utiles :
// https://www.w3schools.com/cpp/cpp_for_loop.asp
// https://www.w3schools.com/cpp/cpp_while_loop.asp
// https://www.w3schools.com/cpp/cpp_do_while_loop.asp

// -- Cr�er une fonction qui prends un array de int en param�tre, puis affiche la valeur de tous ses �l�ments.

// -- Refaire la m�me fonction que pr�c�demment, mais cette fois-ci, deux conditions :
// - chaque �l�ment doit augmenter sa valeur de 1 puis �tre affich� dans la console.
// - si un �l�ment a une valeur de 4, sa valeur doit �tre augment�e mais il ne doit pas �tre affich�.
// Il faut utiliser la d�claration "continue" pour cette exercice.
// https://www.w3schools.com/cpp/cpp_break.asp

// -- Cr�er une fonction qui prends un array de int en param�tre et en retourne sa moyenne.

// -- Cr�er une fonction qui prends un array de int en param�tre et augmente la valeur de chacun de ses �l�ments par 2.

// -- Cr�er deux fonctions qui prennent un vector de int en param�tre, et qui s'arr�tent pour retourner le premier chiffre 4 qui existe.
// Sinon, elles retournent -1.
// La premi�re doit utiliser une boucle for, la seconde une boucle while.
// https://www.w3schools.com/cpp/cpp_break.asp

// -- Cr�er une fonction qui prends un vector de int en param�tre, qui va d'abord multiplier chacun de ses nombres par lui-m�me, puis qui va s'arr�ter
// pour retourner le premier chiffre 4 qui existe apr�s multiplication. Sinon, elle retourne -1.

// -- Cr�er une fonction qui prends deux int en param�tre : largeur et hauteur.
// Il faut ensuite dessiner une forme avec un nombre de * �quivalent � la hauteur et la largeur.
// Il faudra utiliser une boucle dans une boucle.
// Solution � regarder seulement en cas d'�chec :
// https://openclassrooms.com/fr/courses/1894236-apprenez-a-programmer-en-c/7533556-decoupez-votre-programme-en-fonctions#/id/r-7533680

// -- Cr�er une fonction qui prends un vector de int en param�tre et en retourne sa longueur (nombre d'�l�ments � l'int�rieur).

// -- Cr�er une fonction qui prends un vector de int en param�tre et retourne l'index du nombre 4 s'il existe. Sinon, elle retourne -1.

// ----- EXERCICES : SWITCH -----

// -- Cr�er une fonction qui prends un int en param�tre, et retourne un message personnalis� en fonction du int
// Il faut utiliser un switch pour �a. On veut retourner un message diff�rent si on obtient 1, 2 ou 3.
// Sinon, on veut retourner un message g�n�rique pour tous les autres chiffres.
// https://www.w3schools.com/cpp/cpp_switch.asp