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
}

// ----- UTILISER LA CONSOLE -----
void TutoratBasic::UseConsole()
{
    // -- Pour tester cette fonction, appelle-la dans TestFunctionsHere().

    // En c++, il existe deux moyens d'afficher des informations dans la console.
    // Le plus simple est d'utiliser std::cout.

    std::cout << "Hello World" << std::endl;

    // Le std::endl permet de retourner à la ligne.

    // Il est également possible d'utiliser printf. Ici, c'est le "\n" qui permet de retourner à la ligne.

    printf("Hello World\n");

    // La particularité du printf est qu'il peut afficher des variables où on le souhaite dans le string.
    // Par défaut, il doit forcément prendre un string en paramètre.

    printf("My int variable : %i\n", 10);
    printf("My first int variable : %i, and my second : %i\n", 10, 20);

    // https://cplusplus.com/reference/cstdio/printf/

    // Il est possible de prendre les inputs utilisateurs grâce à std::cin.
    // Le programme s'arrête tant que l'utilisateur n'a pas entré d'input.
    // On stocke l'input dans une variable créée précédemment.

    std::string input;
    std::cin >> input;
    std::cout << "You typed : " << input << std::endl;
}

// ----- EXERCICES : MATHS BASIQUES -----
// 
// -- Créer une fonction qui prends deux int en paramètres, les additionne et retourne le résultat.

// -- Créer une fonction qui prends deux int en paramètres, les multiplie et retourne le résultat.

// -- Créer une fonction qui prends un int en paramètre, y ajoute 10 et retourne le résultat.

// -- Créer une fonction qui prends deux int en paramètre, y ajoute 5 sur le premier et 6 sur le second et retourne le int le plus élevé.
// Il est possible de déclarer plusieurs variables du même type sur une seule ligne.
// https://www.w3schools.com/cpp/cpp_variables_multiple.asp

// -- Créer une fonction qui prends un int en paramètre, et retourne un bool si oui ou non ce int est strictement inférieur à 10.

// -- Créer une fonction qui prends un int en paramètre, et retourne un bool si oui ou non ce int est égal 10.

// -- Créer une fonction qui prends un int en paramètre. Si le int est égal à 2, on arrête tout et on retourne -1.
// Sinon, on lui ajoute 10 puis on le divise par 2 et on retourne le résultat.

// -- Reprenons la toute première fonction créée dans cette section pour créer une fonction surchargée qui va additionner
// deux float passés en paramètre. Ainsi, nous pourrons appeler la même fonction, que ce soit pour des int ou des float.
// https://www.w3schools.com/cpp/cpp_function_overloading.asp

// -- Créer une fonction qui prends un int en paramètre et l'incrémente de 1.
// Ensuite, tant que ce int n'est pas égal ou supérieur à 10, la fonction est relancée.
// C'est ce que l'on appelle une fonction récursive.
// https://www.programiz.com/cpp-programming/recursion

// ----- EXERCICES : STRINGS -----

// -- Créer une fonction qui prends un string en paramètre, et en retourne un string composé du paramètre précédé de "Hello ".

// -- Créer une fonction qui prends un string en paramètre, et en retourne sa longueur.
// https://www.w3schools.com/cpp/cpp_strings_length.asp

// -- Créer une fonction qui prends un string en paramètre, et retourne un bool si oui ou non sa longueur est supérieure à 8.

// -- Créer une fonction qui prends un string en paramètre, et en retourne sa première lettre.
// https://www.w3schools.com/cpp/cpp_strings_access.asp

// Note : un string est en réalité un array de char. Il est donc possible de manipuler un string
// en se déplaçant d'index en index.
void StringArray()
{
    std::string hello = "Hello";
    char c = hello[3];
    hello[0] = 'A';
}

// -- Créer une fonction qui prends un string en paramètre, échange sa première et dernière lettre puis retourne le résultat.
// Pour obtenir la dernière lettre d'un string, le plus simple est d'utiliser sa longueur.
// La dernière lettre d'un string est équivalent à sa longueur - 1.