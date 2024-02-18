// ----- EXERCICES -----
// Nous allons cr�er un mini RPG textuel au tour par tour sur console.

// ----- Settings : Enums -----
// Nous allons cr�er plusieurs enum class.

// Nous allons cr�er tous nos enums dans le fichier "TutoratRPG_Settings.h"
// Il nous faudra des enum pour :
// - La difficult�
// - Les statistiques du personnage (HP, ATK, DEF, et toutes autres stats souhait�es)
// - Les types de d�g�ts (magique ou physique)
// - Les types d'arme

// ----- Personnages -----
// Notre jeu contiendra trois personnages, directement pr�sents dans notre �quipe au lancement du jeu.
// Chaque personnage aura une classe et donc un gameplay diff�rent.
// Tous les personnages h�riteront de la classe "TutoratRPG_Character".
// Chaque personnage poss�dera :
// - Des statistiques (il faudra utiliser une map avec un enum et des int)
// - Un niveau
// - Une stat principale
// - Un inventaire (instance de classe "TutoratRPG_Inventory")
// - Une arme �quipp�e (instance de classe "TutoratRPG_Weapon")
// - Une liste de skill (vector contenant des instances de classe "TutoratRPG_Skill")
// Tous les attributs devront �tre initialis�s dans le constructeur (parent et/ou enfant)
// Attention : toutes les instances de classe doivent �tre correctement cr��es pour persister au long du jeu

// Ils devront poss�der les m�thodes suivantes :
// - Une fonction qui retourne les d�g�ts inflig�s (formule : stat principale + d�g�ts de l'arme)
// - Une fonction qui inflige des d�g�ts au personnage (formule : d�g�ts re�us - stat de d�fense)
// - Une fonction qui soigne le personnage
// - Une fonction qui v�rifie si le personnage est vivant

// ----- Settings : GameManager -----
// Dans "TutoratRPG_GameManager", il faudra stocker un array de personnage, initialis� avec un personnage de chaque.