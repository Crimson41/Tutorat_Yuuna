// ----- EXERCICES -----
// Nous allons cr�er un mini RPG textuel au tour par tour sur console.
// La game loop sera toute simple :
// 1 - On rencontre un ennemis � combattre
// 2 - On r�cup�re un loot quand il est battu
// En cas de d�faite, les personnages perdent leur inventaire et r�cup�rent leur stat par d�faut.

// ----- Settings : Enums -----
// Nous allons cr�er plusieurs classes d'enums dans le fichier "TutoratRPG_Settings.h"
// Il nous faudra des enum pour :
// - La difficult�
// - Les statistiques du personnage (HP, ATK, DEF, et toutes autres stats souhait�es)
// - Les classes disponibles

// ----- Personnages -----
// Notre jeu contiendra trois personnages, directement pr�sents dans notre �quipe au lancement du jeu.
// Chaque personnage aura une classe diff�rente, ce qui lui permettra d'utiliser des armes et comp�tences diff�rentes.
// Tous les personnages h�riteront de la classe "TutoratRPG_Character".
// Chaque personnage poss�dera :
// - Des statistiques (il faudra utiliser une map avec un enum et des int)
// - Une stat principale
// - Un inventaire (instance de classe "TutoratRPG_Inventory")
// - Une arme �quipp�e (instance de classe "TutoratRPG_Weapon")
// - Une liste de skill (vector contenant des instances de classe "TutoratRPG_Skill")
// - Une classe (gr�ce � laquelle nous pourrons relier les bonnes armes et les bons skills)
// Tous les attributs devront �tre initialis�s dans le constructeur (parent et/ou enfant)
// Attention : toutes les instances de classe doivent �tre correctement cr��es pour persister au long du jeu

// Les personnages devront poss�der les m�thodes suivantes :
// - Une fonction qui retourne les d�g�ts inflig�s par le personnage (formule : stat principale + d�g�ts de l'arme)
// - Une fonction qui inflige des d�g�ts au personnage (formule : d�g�ts re�us - stat de d�fense)
// - Une fonction qui soigne le personnage
// - Une fonction qui v�rifie si le personnage est vivant

// ----- Ennemis -----
// Nous n'aurons qu'un seul type d'ennemis dans le jeu, et il poss�dera des stats en partie al�atoire.
// Pour plus de facilit�, il h�ritera de la m�me classe que les personnages.
// L'objectif est d'initialiser les statistiques de l'ennemi au moment o� il est cr��, pour avoir
// des stats al�atoires � chaque ennemi cr��.
// Sa stat principale sera �quivalente � sa meilleure stat parmi les stats �ligibles.
// Il n'aura pas d'arme. Il faut donc adapter la fonction des d�g�ts inflig�s sp�cialement pour les ennemis,
// ou faire en sorte que les d�g�ts de l'arme soit � 0 si le personnage n'en a pas.

// ----- Armes -----
// Nous allons cr�er une classe par type d'arme existant. Chaque type d'arme poss�dera :
// - Un nom
// - Un taux de d�g�ts
// - Un taux de d�g�ts minimum
// - Un taux de d�g�ts maximum
// - Une classe � laquelle elle est li�e
// Lorsqu'une arme est cr��e, elle poss�dera un nom al�atoire parmi une liste de nom que l'on pourra cr��
// dans la classe directement, ou dans les settings du jeu.
// Ensuite, son taux de d�g�ts sera �quivalent � un chiffre al�atoire entre son minimum et son maximum.
// Nous voulons �galement avoir un second constructeur pour pr�ciser nous-m�me le taux de d�g�ts.
// Tous les attributs devront �tre initialis�s dans le constructeur.

// ----- Comp�tences -----
// Nous allons cr�er une classe par comp�tence pr�sente dans le jeu.
// L'effet des comp�tence est libre.
// Chaque comp�tence doit avoir :
// - Un nom
// - Un taux de d�g�ts minimum
// - Un taux de d�g�ts maximum
// - Une classe � laquelle elle est li�e

// Afin d'impl�menter l'effet d'une comp�tence, il faudra cr�er une fonction virtuelle "Use".
// Cette fonction prendra en param�tre une cible et retournera des d�g�ts.
// Quelques id�es de comp�tences :
// - Inflige des d�g�ts �quivalent � 30% de la vie de la cible
// - Inflige des d�g�ts fixes + un compl�ment de d�g�ts al�atoire
// - Inflige cinq fois un montant de d�g�ts al�atoire
// - Inflige des d�g�ts fixes + l'�quivalent de 30% de la stat principale du lanceur

// ----- Potions -----
// Nos potions pourront augmenter des statistiques ou soigner.
// Elles comporteront :
// - Un nom
// - Une statistique qu'elles vont influencer
// Pas besoin de cr�er de nouvelles classes.
// Nous allons faire en sorte que lors de la cr�ation d'une potion, son effet soit al�atoire.
// Il faudra donc d�finir la statistique de fa�on al�atoire.
// Il nous faudra ensuite une fonction qui ajoute un montant fixe � la stat choisie.
// Si la statistique HP est choisie, il s'agira donc d'une potion de soin.
// Le nom sera �galement d�fini gr�ce � la statistique.

// ----- Inventaire -----
// Notre inventaire devra stocker :
// - La liste des armes
// - La liste des potions

// ----- GameManager -----
// Dans "TutoratRPG_GameManager", il faudra stocker un array de personnage, initialis� avec un personnage de chaque classe.
// Il faut ensuite une fonction qui v�rifie si tous les personnages sont morts => game over.

// C'est dans notre GameManager que nous allons cr�er notre boucle de jeu, le plus simple �tant
// de lancer une boucle qui persiste tant que tous les personnages ne sont pas morts.
// � l'int�rieur, il faudra d'abord lancer un combat, qui ne s'arr�tera que quand l'ennemi
// est vaincu ou que les personnages sont morts.
// Une fois le combat termin�, on gagne un loot al�atoire (une arme ou une potion).
// Si c'est une arme, elle sera automatiquement �quip�e si elle est meilleure que l'arme du personnage �ligible.
// Puis la boucle recommence. Elle sera appel�e dans la fonction main() de Main.cpp

// -- Comment g�rer le combat ?
// Nous utiliserons les inputs (cin). Ce sera toujours le tour du personnage actif, puis celui de l'ennemi.
// Le joueur pourra choisir parmi les options suivantes pendant son tour :
// 1 - Attaquer : le joueur pourra choisir parmi une liste de ses comp�tences.
// 2 - Utiliser une potion : le joueur pourra choisir parmi sa liste de potions.
// 3 - Changer de personnage : le joueur pourra choisir parmi ses personnages encore vivants.
// Si l'input est incorrect, le joueur doit de nouveau en entrer un.