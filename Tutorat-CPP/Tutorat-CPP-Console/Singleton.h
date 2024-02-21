#pragma once

// Un singleton est une classe qui ne peut �tre instanci�e que par elle-m�me.
// De ce fait, son constructeur est rendu priv�.
// Elle poss�de un pointeur statique contenant une instance d'elle-m�me,
// qui est accessible gr�ce � une fonction elle aussi statique.
// Dans cette fonction, on v�rifie que l'instance existe - sinon, on en cr�e une nouvelle.
// Enfin, on retourne l'instance du singleton.

class Singleton
{
private:
	// On rends le constructeur de la classe priv�.
	Singleton();

	// Notre instance est un pointeur statique.
	static Singleton* _instance;

public:
	// Cette fonction v�rifie si une instance existe, en cr�e une si besoin, puis la retourne.
	static Singleton* Instance();

	// Une fonction que l'on souhaite rendre accessible
	void SingletonFunction();
};