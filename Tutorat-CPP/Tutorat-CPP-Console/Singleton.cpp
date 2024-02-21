#include "Singleton.h"

// Ici, on doit initialiser notre pointeur comme étant null.
Singleton* Singleton::_instance = nullptr;

// Même si le constructeur n'est pas utilisé, il faut le déclarer ici.
Singleton::Singleton() { }

Singleton* Singleton::Instance()
{
	if (_instance == nullptr) _instance = new Singleton();
	return _instance;
}

void Singleton::SingletonFunction() { };

// Il est désormais possible d'accéder aux informations de notre singleton comme suit :
void SingletonExample()
{
	Singleton* mySingleton = Singleton::Instance();
	mySingleton->SingletonFunction();
}