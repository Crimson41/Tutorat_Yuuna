#include "TutoratAdvanced.h"
#include "MyClass.h"

TutoratAdvanced::TutoratAdvanced()
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
    // Il s'agit d'une variable dont le type est le nom de notre classe.
    
    MyClass mc; // mc est une instance de la classe MyClass.

    // On appelle également cette variable "un objet".
    // Une classe définie les plans de l'objet, et la variable crée l'objet à partir de ce plan.

    mc.MyFunction();

    // En c++, il n'est pas nécessaire d'initialiser une classe si la variable n'est pas un pointeur.
    // Cependant, il est très courant que les instances de classe soient des pointeurs,
    // parce que cela permet de stocker toutes les données de la classe tout au long du programme.
    // À ce moment-là, la variable nécessitera une initialisation, avec une syntaxe équivalente au c#.

    MyClass* mcPointer = new MyClass();

    // Comme pour les array et vector, on peut les initialiser pendant ou après la déclaration.

    MyClass* mcPointer2;
    mcPointer2 = new MyClass();

    // Il faut toujours supprimer un pointeur à la fin de son utilisation afin d'éviter une fuite de mémoire.

    delete mcPointer, mcPointer2;

    // Pour ne pas risquer de fuite de mémoire avec les pointeurs, il est possible d'utiliser un std::unique_ptr<[type]>.
    // Il faut alors initialiser ce pointeur avec std::make_unique<[type]>().

    std::unique_ptr<MyClass> uniquePointer = std::make_unique<MyClass>();
    uniquePointer->MyFunction();

    // Leur utilisation est un peu plus complexe donc on ne les utilisera pas forcément tout de suite.
    // https://learn.microsoft.com/fr-fr/cpp/cpp/how-to-create-and-use-unique-ptr-instances?view=msvc-170
    // De même, nous verrons l'initialisation d'une map plus tard.
}

void TutoratAdvanced::TestFunctionsHere()
{
    // Utiliser cette fonction pour tester les exercices.

    std::cout << FirstArray(3, 2, 3) << std::endl;

}



// ----- EXERCICES : ARRAY -----

// -- Créer une fonction qui prends trois int en paramètre et les ajoute à un array nouvellement créé.
// Elle retourne ensuite le premier élément du tableau.
// https://www.w3schools.com/cpp/cpp_arrays.asp

int TutoratAdvanced::FirstArray(int a, int b, int c)
{

    int simpleArray[3] = { a, b, c };

    return simpleArray[0];
}

// Pour la suite : utiliser l'array _numbersArray.

// -- Créer une fonction qui prends un array de int en paramètre et en retourne sa longueur (nombre d'éléments à l'intérieur).



// -- Créer une fonction qui prends un array de int en paramètre et en retourne le dernier élément.
// Indice : le dernier élément se trouvera à l'index équivalent à la taille de l'array - 1.

// ----- EXERCICES : VECTOR -----

// -- Créer une fonction qui prends trois int en paramètre et les ajoute à un vector nouvellement créé qu'elle retourne.
// https://hackingcpp.com/cpp/std/vector_intro.html

// Pour la suite : utiliser le vector _numbersVector.

// -- Créer une fonction qui prends un vector de int en paramètre, et en retourne la somme.

// -- Créer une fonction qui prends un vector de int en paramètre, y ajoute d'abord 10 puis en retourne la somme.

// -- Créer une fonction qui prends un vector de int en paramètre, multiplie chacun de ses nombres et en retourne la somme.

// -- Créer une fonction qui prends un vector de int et un int en paramètre, qui ajoute le int dans le vector puis qui retourne le vector.

// ----- EXERCICES : BOUCLES -----

// Pour la suite, quelques liens utiles :
// https://www.w3schools.com/cpp/cpp_for_loop.asp
// https://www.w3schools.com/cpp/cpp_while_loop.asp
// https://www.w3schools.com/cpp/cpp_do_while_loop.asp

// -- Créer une fonction qui prends un array de int en paramètre, puis affiche la valeur de tous ses éléments.

// -- Refaire la même fonction que précédemment, mais cette fois-ci, deux conditions :
// - chaque élément doit augmenter sa valeur de 1 puis être affiché dans la console.
// - si un élément a une valeur de 4, sa valeur doit être augmentée mais il ne doit pas être affiché.
// Il faut utiliser la déclaration "continue" pour cette exercice.
// https://www.w3schools.com/cpp/cpp_break.asp

// -- Créer une fonction qui prends un array de int en paramètre et en retourne sa moyenne.

// -- Créer une fonction qui prends un array de int en paramètre et augmente la valeur de chacun de ses éléments par 2.

// -- Créer deux fonctions qui prennent un vector de int en paramètre, et qui s'arrêtent pour retourner le premier chiffre 4 qui existe.
// Sinon, elles retournent -1.
// La première doit utiliser une boucle for, la seconde une boucle while.
// https://www.w3schools.com/cpp/cpp_break.asp

// -- Créer une fonction qui prends un vector de int en paramètre, qui va d'abord multiplier chacun de ses nombres par lui-même, puis qui va s'arrêter
// pour retourner le premier chiffre 4 qui existe après multiplication. Sinon, elle retourne -1.

// -- Créer une fonction qui prends deux int en paramètre : largeur et hauteur.
// Il faut ensuite dessiner une forme avec un nombre de * équivalent à la hauteur et la largeur.
// Il faudra utiliser une boucle dans une boucle.
// Solution à regarder seulement en cas d'échec :
// https://openclassrooms.com/fr/courses/1894236-apprenez-a-programmer-en-c/7533556-decoupez-votre-programme-en-fonctions#/id/r-7533680

// -- Créer une fonction qui prends un vector de int en paramètre et en retourne sa longueur (nombre d'éléments à l'intérieur).

// -- Créer une fonction qui prends un vector de int en paramètre et retourne l'index du nombre 4 s'il existe. Sinon, elle retourne -1.

// ----- EXERCICES : SWITCH -----

// -- Créer une fonction qui prends un int en paramètre, et retourne un message personnalisé en fonction du int
// Il faut utiliser un switch pour ça. On veut retourner un message différent si on obtient 1, 2 ou 3.
// Sinon, on veut retourner un message générique pour tous les autres chiffres.
// https://www.w3schools.com/cpp/cpp_switch.asp