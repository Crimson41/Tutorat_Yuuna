#include "TutoratBasic.h"
#include "MyClass.h"

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
    // Lorsqu'une classe possède un vector, un array ou une map
    // en tant que champs, il faut l'initialiser avant de l'utiliser.

    // ----- Initilisation d'un array -----
    // En c++, un array doit toujours avoir une taille statique.
    // Il faut donc déclarer un tableau ainsi :
    
    int array[3];

    // Mais cela ne suffit pas à l'initialiser.
    // Il y a deux manières de procéder. La plus simple est de directement
    // initialiser le tableau en même temps que sa déclaration.
    
    int simpleArray[3] = { 1, 2, 3 };

    // La seconde méthode est d'attribuer les valeurs du tableau après sa déclaration.
    // Mais cela nécessite d'entrer chaque valeur une par une (ou via une boucle si possible).

    _numbersArray[0] = 1;
    _numbersArray[1] = 2;
    _numbersArray[2] = 3;

    // ----- Initialisation d'un vector -----
    // Un vector n'a pas de taille statique, il est donc modulable à volonté.
    // En général, on préférera toujours utiliser un vector, mais cela nécessite plus de mémoire.
    // Tout comme l'array, il est possible d'initialiser un vector en même temps que sa déclaration.

    std::vector<int> vector = { 1, 2, 3 };

    // Mais il est également possible de les initialiser en une seule ligne après leur déclaration.
    _numbersVector = { 1, 2, 3, 4, 5 };

    // ----- Cas particuliers : les instances de classe -----
    // Qu'est-ce qu'une instance de classe ?
    // Il s'agit d'une variable qui possède le type d'une classe. On appelle également cette variable "un objet".
    // Une classe définie les plans de l'objet, et la variable crée l'objet à partir de ce plan.
    
    MyClass mc;

    // mc est une instance de la classe MyClass.
    // On peut donc utiliser ses fonctions.

    mc.MyFunction();

    // En c++, il n'est pas nécessaire d'initialiser une classe si la variable n'est pas un pointeur.
    // Cependant, il est très courant que les instances de classe soient des pointeurs,
    // parce que cela permet de stocker toutes les données de la classe tout au long du programme.
    // À ce moment-là, la variable nécessitera une initialisation, avec une syntaxe équivalente au c#.
    
    MyClass* mcPointer = new MyClass();

    // Comme pour les array et vector, on peut les initialiser pendant ou après la déclaration.

    MyClass* mcPointer2;
    mcPointer2 = new MyClass();
}

// ----- EXERCICES : MATHS BASIQUES -----
// Créer les fonctions suivantes :

// -- Une fonction qui prends deux int en paramètres, les additionne et retourne le résultat

// -- Une fonction qui prends deux int en paramètres, les multiplie et retourne le résultat

// -- Une fonction qui prends un int en paramètre, y ajoute 10 et retourne le résultat

// -- Une fonction qui prends un int en paramètre, et retourne si oui ou non ce int est strictement inférieur à 10

// -- Une fonction qui prends un int en paramètre, et retourne si oui ou non ce int est égal 10

// -- Une fonction qui prends un int en paramètre. Si le int est égal à 2, on arrête tout et on retourne -1.
// Sinon, on lui ajoute 10 puis on le divise par 2 et on retourne le résultat.

// ----- EXERCICES : ARRAY -----

// -- Une fonction qui prends trois int en paramètre et les ajoute à un array nouvellement créé.
// Elle retourne ensuite le premier élément du tableau.
// https://www.w3schools.com/cpp/cpp_arrays.asp

// Pour la suite : utiliser l'array _numbersArray.

// -- Une fonction qui prends un array de int en paramètre et en retourne sa longueur (nombre d'éléments à l'intérieur).

// -- Une fonction qui prends un array de int en paramètre et en retourne le dernier élément.
// Indice : le dernier élément se trouvera à l'index équivalent à la taille de l'array - 1.

// ----- EXERCICES : VECTOR -----

// -- Une fonction qui prends trois int en paramètre et les ajoute à un vector nouvellement créé qu'elle retourne
// https://hackingcpp.com/cpp/std/vector_intro.html

// Pour la suite : utiliser le vector _numbersVector.

// -- Une fonction qui prends un vector de int en paramètre, et en retourne la somme

// -- Une fonction qui prends un vector de int en paramètre, y ajoute d'abord 10 puis en retourne la somme.

// -- Une fonction qui prends un vector de int en paramètre, multiplie chacun de ses nombres et en retourne la somme.

// -- Une fonction qui prends un vector de int et un int en paramètre, qui ajoute le int dans le vector puis qui retourne le vector.

// ----- EXERCICES : BOUCLES -----

// Pour la suite, quelques liens utiles :
// https://www.w3schools.com/cpp/cpp_for_loop.asp
// https://www.w3schools.com/cpp/cpp_while_loop.asp
// https://www.w3schools.com/cpp/cpp_do_while_loop.asp

// -- Une fonction qui affiche la valeur de tous les éléments d'un array passé en paramètre.

// -- Une fonction qui prends un array de int en paramètre et en retourne sa moyenne.

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

// ----- EXERCICES : SWITCH -----

// -- Une fonction qui prends un int en paramètre, et retourne un message personnalisé en fonction du int
// Il faut utiliser un switch pour ça. On veut retourner un message différent si on obtient 1, 2 ou 3.
// Sinon, on veut retourner un message générique pour tous les autres chiffres.
// https://www.w3schools.com/cpp/cpp_switch.asp