#include "TutoratBasic.h"

// Un fichier .cpp contient "les définitions" des méthodes d'une classe.
// On utilise la signature d'une fonction en précisant le nom de ses paramètres et son corps.
// Attention, en cpp, il faut préciser le nom de la classe devant le nom de la fonction.
// Exemple : void MyClass::MyFunction(int myParam) { [corps de la fonction] }

void TutoratBasic::HelloWorld()
{
    std::cout << "Hello World!\n";
}

TutoratBasic::TutoratBasic() // La définition du constructeur de la classe.
{
    // Lorsqu'une classe possède une instance de classe, un vector, un array ou une map
    // en tant que champs, il faut l'initialiser dans le constructeur (de préférence) ou ailleurs.
    // Ici, on initialise notre vector _numbers.
    _numbers = { 1, 2, 3, 4, 5 };

    // Qu'est-ce qu'une instance de classe ?
    // Il s'agit d'une variable qui possède le type d'une classe et peut donc utiliser ses méthodes.
    // Exemple : TutoratBasic tb;
    // tb est une instance de la classe TutoratBasic.
    // On peut donc utiliser ses fonctions : tb.HelloWorld();
}

// ----- EXERCICES -----
// Créer les fonctions suivantes :

// -- Une fonction qui prends deux int en paramètres, les additionne et retourne le résultat

// -- Une fonction qui prends deux int en paramètres, les multiplie et retourne le résultat

// -- Une fonction qui prends un int en paramètre, y ajoute 10 et retourne le résultat

// -- Une fonction qui prends un int en paramètre, et retourne si oui ou non ce int est strictement inférieur à 10

// -- Une fonction qui prends un int en paramètre, et retourne si oui ou non ce int est égal 10

// -- Une fonction qui prends un int en paramètre. Si le int est égal à 2, on arrête tout et on retourne -1.
// Sinon, on lui ajoute 10 puis on le divise par 2 et on retourne le résultat.

// -- Une fonction qui prends trois int en paramètre et les ajoute à un vector nouvellement créé qu'elle retourne
// https://hackingcpp.com/cpp/std/vector_intro.html

// Pour la suite : utiliser le vector _numbers pour les tests.

// -- Une fonction qui prends un vector de int en paramètre, et en retourne la somme

// -- Une fonction qui prends un vector de int en paramètre, y ajoute d'abord 10 puis en retourne la somme.

// -- Une fonction qui prends un vector de int en paramètre, multiplie chacun de ses nombres et en retourne la somme.

// Pour la suite, quelques liens utiles :
// https://www.w3schools.com/cpp/cpp_for_loop.asp
// https://www.w3schools.com/cpp/cpp_while_loop.asp
// https://www.w3schools.com/cpp/cpp_do_while_loop.asp

// -- Deux fonctions qui prennent un vector de int en paramètre, et qui s'arrêtent pour retourner le chiffre 4 s'il existe.
// Sinon, elles retournent -1.
// La première doit utiliser une boucle for, la seconde une boucle while.

// -- Une fonction qui prends un vector de int en paramètre, qui va d'abord multiplier chacun de ses nombres par lui-même, puis qui va s'arrêter
// pour retourner le chiffre 4 s'il existe après multiplication. Sinon, elle retourne -1.

// -- Une fonction qui prends deux int en paramètre : largeur et hauteur. Il faut ensuite dessiner une forme avec un nombre de * équivalent à la hauteur
// et la largeur.
// Il faudra utiliser une boucle dans une boucle.
// Solution à regarder seulement en cas d'échec :
// https://openclassrooms.com/fr/courses/1894236-apprenez-a-programmer-en-c/7533556-decoupez-votre-programme-en-fonctions#/id/r-7533680

// -- Une fonction qui prends un vector de int en paramètre et en retourne sa longueur (nombre d'éléments à l'intérieur).

// -- Une fonction qui prends un vector de int en paramètre et retourne l'index du nombre 4 s'il existe. Sinon, elle retourne -1.

// -- Une fonction qui prends un int en paramètre, et retourne un message personnalisé en fonction du int
// Il faut utiliser un switch pour ça. On veut retourner un message différent si on obtient 1, 2 ou 3.
// Sinon, on veut retourner un message générique pour tous les autres chiffres.
// https://www.w3schools.com/cpp/cpp_switch.asp