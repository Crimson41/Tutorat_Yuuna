#pragma once

// Un singleton est une classe qui ne peut être instanciée que par elle-même.
// De ce fait, son constructeur est rendu privé.
// Elle possède un pointeur statique contenant une instance d'elle-même,
// qui est accessible grâce à une fonction elle aussi statique.
// Dans cette fonction, on vérifie que l'instance existe - sinon, on en crée une nouvelle.
// Enfin, on retourne l'instance du singleton.

class Singleton
{
private:
	// On rends le constructeur de la classe privé.
	Singleton();

	// Notre instance est un pointeur statique.
	static Singleton* _instance;

public:
	// Cette fonction vérifie si une instance existe, en crée une si besoin, puis la retourne.
	static Singleton* Instance();

	// Une fonction que l'on souhaite rendre accessible
	void SingletonFunction();
};