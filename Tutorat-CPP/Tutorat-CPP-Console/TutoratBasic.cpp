#include "TutoratBasic.h"

// Un fichier .cpp contient "les définitions" des méthodes d'une classe.
// On utilise la signature d'une fonction en précisant le nom de ses paramètres et son corps.
// Attention, en cpp, il faut préciser le nom de la classe devant le nom de la fonction.
// Exemple : void MyClass::MyFunction(int myParam) { [corps de la fonction] }

void TutoratBasic::MyFunction(int myParam) { /* Corps de la fonction */ }

// Ici, myParam est appelé un paramètre de la fonction MyFunction.
// En revanche, lorsqu'on appelle la fonction, les variables ajoutées entre parenthèse
// sont nommées des "arguments". On dit qu'un argument est passé en paramètre d'une fonction.
// https://developer.mozilla.org/fr/docs/Glossary/Parameter

TutoratBasic::TutoratBasic()
{
    // La définition du constructeur de la classe.
}

void TutoratBasic::TestFunctionsHere()
{
    // Utiliser cette fonction pour tester les exercices.

    //std::cout << Addition(1, 2) << std::endl;

    std::cout << Hello("gougou") << std::endl;
    std::cout << Length("pipou") << std::endl;
    std::cout << MoreOrLess8("lkshflcnjgjelclwns") << std::endl;
    std::cout << FirstLetter("lkshflcnjgjelclwns") << std::endl;
    std::cout << Swap("ABC") << std::endl;


}

// ----- EXERCICES : MATHS BASIQUES -----
// 
// -- Créer une fonction qui prends deux int en paramètres, les additionne et retourne le résultat.
int TutoratBasic::Addition(int a, int b)
{
    return a + b;
}

// -- Créer une fonction qui prends deux int en paramètres, les multiplie et retourne le résultat.
int TutoratBasic::Multiply(int a, int b)
{
    return (a * b);
}

// -- Créer une fonction qui prends un int en paramètre, y ajoute 10 et retourne le résultat.
int TutoratBasic::Add10(int a)
{
    return a += 10;
}

// -- Créer une fonction qui prends deux int en paramètre, y ajoute 5 sur le premier et 6 sur le second et retourne le int le plus élevé.
// Il est possible de déclarer plusieurs variables du même type sur une seule ligne.
// https://www.w3schools.com/cpp/cpp_variables_multiple.asp
int TutoratBasic::Add5and6(int a, int b)
{
    a += 5;
    b = b + 6;

    if (a > b)
    {
        return (a);
    }

    else if (a < b)
    {
        return (b);
    }
}

// -- Créer une fonction qui prends un int en paramètre, et retourne si oui ou non ce int est strictement inférieur à 10.
bool TutoratBasic::MoreOrLess10(int a)
{
    return a > 10;
    if (a > 10)
    {
        return false;
    }

    else if (a < 10)
    {
        return true;
    }
}

// -- Créer une fonction qui prends un int en paramètre, et retourne si oui ou non ce int est égal 10.
bool TutoratBasic::EqualOrNot10(int a)
{
    return a == 10;
    if (a == 10)
    {
        return true;
    }

    else
    {
        return false;
    }
}

// -- Créer une fonction qui prends un int en paramètre. Si le int est égal à 2, on arrête tout et on retourne -1.
// Sinon, on lui ajoute 10 puis on le divise par 2 et on retourne le résultat.

int TutoratBasic::Equal2(int a)
{
    if (a == 2)
    {
        return -1;
    }

    a += 10;
    a /= 2;
    return a;
}


// -- Reprenons la toute première fonction créée dans cette section pour créer une fonction surchargée qui va additionner
// deux float passés en paramètre. Ainsi, nous pourrons appeler la même fonction, que ce soit pour des int ou des float.
// https://www.w3schools.com/cpp/cpp_function_overloading.asp

float TutoratBasic::Addition(float a, float b)
{
    return (a + b);
}

// -- Créer une fonction qui prends un int en paramètre et l'incrémente de 1. Tant que ce int n'est pas égal ou supérieur à 10, la fonction est relancée.
// C'est ce que l'on appelle une fonction récursive.

void TutoratBasic::Incremente(int a)
{
    std::cout << "Debut : " << a << std::endl;

    a += 1;

    if (a < 10)
    {
        Incremente(a);
        return;
    }

    std::cout << "Fin" << a << std::endl;
}


// ----- EXERCICES : STRINGS -----

// -- Créer une fonction qui prends un string en paramètre, et en retourne un string composé du paramètre précédé de "Hello ".
std::string TutoratBasic::Hello(std::string world) 
{
    world += "Hello ";

    return world;
}

// -- Créer une fonction qui prends un string en paramètre, et en retourne sa longueur.
// https://www.w3schools.com/cpp/cpp_strings_length.asp
int TutoratBasic::Length(std::string phrase)
{
    return phrase.size();
}

// -- Créer une fonction qui prends un string en paramètre, et retourne si oui ou non sa longuer est supérieure à 8.
bool TutoratBasic::MoreOrLess8(std::string phrase)
{
    return phrase.size() > 8;
}

// -- Créer une fonction qui prends un string en paramètre, et en retourne sa première lettre.
// https://www.w3schools.com/cpp/cpp_strings_access.asp
char TutoratBasic::FirstLetter(std::string phrase)
{
    return phrase[0];
}

// -- Créer une fonction qui prends un string en paramètre, échange sa première et dernière lettre puis retourne le résultat.
// Pour obtenir la dernière lettre d'un string, le plus simple est d'utiliser sa longueur.
std::string TutoratBasic::Swap(std::string phrase)
{
    char first = phrase[0];

    char last = phrase[phrase.size() - 1];

    phrase[0] = last;
    phrase[phrase.size() - 1] = first;

    return phrase;
}