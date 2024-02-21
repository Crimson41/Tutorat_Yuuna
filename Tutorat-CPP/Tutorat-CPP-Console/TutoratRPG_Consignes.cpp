// ----- EXERCICES -----
// Nous allons créer un mini RPG textuel au tour par tour sur console.
// La game loop sera toute simple :
// 1 - On rencontre un ennemis à combattre
// 2 - On récupère un loot quand il est battu
// En cas de défaite, les personnages perdent leur inventaire et récupèrent leur stat par défaut.

// ----- SETTINGS -----
// Nous allons créer plusieurs classes d'enums dans le fichier "TutoratRPG_Settings.h"
// Il nous faudra des enum pour :
// - La difficulté
// - Les statistiques du personnage (HP, ATK, DEF, et toutes autres stats souhaitées)
// - Les classes disponibles

// ----- CHARACTERS -----
// Notre jeu contiendra trois personnages, directement présents dans notre équipe au lancement du jeu.
// Chaque personnage aura une classe différente, ce qui lui permettra d'utiliser des armes et compétences différentes.
// Tous les personnages hériteront de la classe "TutoratRPG_Character".
// Chaque personnage possèdera :
// - Des statistiques (il faudra utiliser une map avec un enum et des int)
// - Une stat principale
// - Un inventaire (instance de classe "TutoratRPG_Inventory")
// - Une arme équippée (instance de classe "TutoratRPG_Weapon")
// - Une liste de skill (vector contenant des instances de classe "TutoratRPG_Skill")
// - Une classe (grâce à laquelle nous pourrons relier les bonnes armes et les bons skills)
// Tous les attributs devront être initialisés dans le constructeur (parent et/ou enfant)
// Attention : toutes les instances de classe doivent être correctement créées pour persister au long du jeu

// Les personnages devront posséder les méthodes suivantes :
// - Une fonction qui retourne les dégâts infligés par le personnage (formule : stat principale + dégâts de l'arme)
// - Une fonction qui inflige des dégâts au personnage (formule : dégâts reçus - stat de défense)
// - Une fonction qui soigne le personnage
// - Une fonction qui vérifie si le personnage est vivant

// ----- ENEMIES -----
// Nous n'aurons qu'un seul type d'ennemis dans le jeu, et il possédera des stats en partie aléatoire.
// Pour plus de facilité, il héritera de la même classe que les personnages.
// L'objectif est d'initialiser les statistiques de l'ennemi au moment où il est créé, pour avoir
// des stats aléatoires à chaque ennemi créé. Il faut donc définir un min et un max pour générer les stats aléatoirement.
// Le min et le max seront adaptés en fonction de la difficulté du jeu (nous verrons ça plus tard).

// Sa stat principale sera équivalente à sa meilleure stat parmi les stats éligibles.
// Il n'aura pas d'arme. Il faut donc adapter la fonction des dégâts infligés spécialement pour les ennemis,
// ou faire en sorte que les dégâts de l'arme soit à 0 si le personnage n'en a pas.

// ----- WEAPONS -----
// Nous allons créer une classe par type d'arme existant. Chaque type d'arme possèdera :
// - Un nom
// - Un taux de dégâts
// - Un taux de dégâts minimum
// - Un taux de dégâts maximum
// - Une classe à laquelle elle est liée
// Lorsqu'une arme est créée, elle possédera un nom aléatoire parmi une liste de nom que l'on pourra créé
// dans la classe directement, ou dans les settings du jeu.
// Ensuite, son taux de dégâts sera équivalent à un chiffre aléatoire entre son minimum et son maximum.
// Nous voulons également avoir un second constructeur pour préciser nous-même le taux de dégâts.
// Tous les attributs devront être initialisés dans le constructeur.

// ----- SKILLS -----
// Nous allons créer 4 compétences par classe présente dans le jeu.
// L'effet des compétence est libre.
// Chaque compétence doit avoir :
// - Un nom
// - Un taux de dégâts minimum
// - Un taux de dégâts maximum

// Afin d'implémenter l'effet d'une compétence, il faudra créer une fonction virtuelle "Use".
// Cette fonction prendra en paramètre une cible et retournera des dégâts.
// Quelques idées de compétences :
// - Inflige des dégâts équivalent à 30% de la vie de la cible
// - Inflige des dégâts fixes + un complément de dégâts aléatoire
// - Inflige cinq fois un montant de dégâts aléatoire
// - Inflige des dégâts fixes + l'équivalent de 30% de la stat principale du lanceur

// Nous n'aurons pas de système de level dans le jeu : un personnage aura accès aux 4 compétences de sa classe.
// Nous attribuerons les skills au personnage lors de leur création un peu plus tard.

// ----- POTIONS -----
// Nos potions pourront augmenter des statistiques ou soigner.
// Elles comporteront :
// - Un nom
// - Une statistique qu'elles vont influencer
// Pas besoin de créer de nouvelles classes.
// Nous allons faire en sorte que lors de la création d'une potion, son effet soit aléatoire.
// Il faudra donc définir la statistique de façon aléatoire.
// Il nous faudra ensuite une fonction qui ajoute un montant fixe à la stat choisie.
// Si la statistique HP est choisie, il s'agira donc d'une potion de soin.
// Le nom sera également défini grâce à la statistique.

// ----- GAME MANAGER -----
// Le GameManager doit être un singleton, afin d'être unique, de conserver les données tout au long du programme,
// et de rendre les données qui nous intéressent accessibles à n'importe qui. Par exemple, pour récupérer la difficulté
// du jeu et définir les stats des ennemis.

// -- Création d'un singleton
// Voir fichiers Singleton.h et Singleton.cpp

// -- Initialisation de la partie
// Dans "TutoratRPG_GameManager", il faudra stocker un array de personnage, initialisé avec un personnage de chaque classe.
// Lors de la création d'un personnage, il faudra envoyer en paramètre une liste de skills contenant
// les skills que le personnage doit posséder.

// Il faut ensuite une fonction qui vérifie si tous les personnages sont morts => game over.
// Nous aurons également besoin d'une fonction qui va définir la difficuté du jeu en fonction de l'input utilisateur.

// C'est dans notre GameManager que nous allons créer notre boucle de jeu, le plus simple étant
// de lancer une boucle qui persiste tant que tous les personnages ne sont pas morts.
// À l'intérieur, il faudra d'abord lancer un combat, qui ne s'arrêtera que quand l'ennemi
// est vaincu ou que les personnages sont morts.
// Une fois le combat terminé, on gagne un loot aléatoire (une arme ou une potion).
// Si c'est une arme, elle sera automatiquement équipée si elle est meilleure que l'arme du personnage éligible.
// Puis la boucle recommence. Elle sera appelée dans la fonction main() de Main.cpp

// -- Comment gérer le combat ?
// Nous utiliserons les inputs (cin). Ce sera toujours le tour du personnage actif, puis celui de l'ennemi.
// Le joueur pourra choisir parmi les options suivantes pendant son tour :
// 1 - Attaquer : le joueur pourra choisir parmi une liste de ses compétences.
// 2 - Utiliser une potion : le joueur pourra choisir parmi sa liste de potions.
// 3 - Changer de personnage : le joueur pourra choisir parmi ses personnages encore vivants.
// Si l'input est incorrect, le joueur doit de nouveau en entrer un.

// -- Gestion de l'inventaire
// Notre inventaire sera commun à tous nos personnages,
// donc nous allons stocker ça directement dans le GameManager.
// Pas besoin de stocker la liste d'arme, étant donné qu'on équipe automatiquement la meilleure après chaque combat.
// Il faudra donc uniquement stocker les potions.
// Nous pourrions gérer ça avec une simple liste, mais le plus simple serait de créer une map.
// En effet, si une potion n'existe pas dans notre map, elle sera ajoutée et sa valeur sera de 1.
// Lorsqu'une potion est utilisée, sa valeur diminuera de 1.