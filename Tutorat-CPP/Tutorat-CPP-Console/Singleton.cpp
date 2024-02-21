#include "Singleton.h"

// Ici, on doit initialiser notre pointeur comme �tant null.
Singleton* Singleton::_instance = nullptr;

// M�me si le constructeur n'est pas utilis�, il faut le d�clarer ici.
Singleton::Singleton() { }

Singleton* Singleton::Instance()
{
	if (_instance == nullptr) _instance = new Singleton();
	return _instance;
}

void Singleton::SingletonFunction() { };

// Il est d�sormais possible d'acc�der aux informations de notre singleton comme suit :
void SingletonExample()
{
	Singleton* mySingleton = Singleton::Instance();
	mySingleton->SingletonFunction();
}