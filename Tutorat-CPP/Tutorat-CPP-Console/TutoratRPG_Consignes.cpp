// ----- EXERCICES -----
// Nous allons créer un mini RPG textuel au tour par tour sur console.

// ----- Settings : Enums -----
// Nous allons créer plusieurs enum class.

// Nous allons créer tous nos enums dans le fichier "TutoratRPG_Settings.h"
// Il nous faudra des enum pour :
// - La difficulté
// - Les statistiques du personnage (HP, ATK, DEF, et toutes autres stats souhaitées)
// - Les types de dégâts (magique ou physique)
// - Les types d'arme

// ----- Personnages -----
// Notre jeu contiendra trois personnages, directement présents dans notre équipe au lancement du jeu.
// Chaque personnage aura une classe et donc un gameplay différent.
// Tous les personnages hériteront de la classe "TutoratRPG_Character".
// Chaque personnage possèdera :
// - Des statistiques (il faudra utiliser une map avec un enum et des int)
// - Un niveau
// - Une stat principale
// - Un inventaire (instance de classe "TutoratRPG_Inventory")
// - Une arme équippée (instance de classe "TutoratRPG_Weapon")
// - Une liste de skill (vector contenant des instances de classe "TutoratRPG_Skill")
// Tous les attributs devront être initialisés dans le constructeur (parent et/ou enfant)
// Attention : toutes les instances de classe doivent être correctement créées pour persister au long du jeu

// Ils devront posséder les méthodes suivantes :
// - Une fonction qui retourne les dégâts infligés (formule : stat principale + dégâts de l'arme)
// - Une fonction qui inflige des dégâts au personnage (formule : dégâts reçus - stat de défense)
// - Une fonction qui soigne le personnage
// - Une fonction qui vérifie si le personnage est vivant

// ----- Settings : GameManager -----
// Dans "TutoratRPG_GameManager", il faudra stocker un array de personnage, initialisé avec un personnage de chaque.