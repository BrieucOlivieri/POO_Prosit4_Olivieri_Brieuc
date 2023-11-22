#include <iostream>
#include "REC.h"
#include "EM.h"

using namespace std;

void Nrj(void);
void Sky(void);
void FrTnter(void);

typedef void (*pf)(void);
pf* index;

void Nrj(void)
{
	EM NRJ;
	NRJ.signal("Vous ecoutez NRJ !");
}
void Sky(void)
{
	EM Skyrock;
	Skyrock.signal("Vous ecoutez SKYROCK !");
}
void FrTnter(void)
{
	EM FranceInter;
	FranceInter.signal("Vous ecoutez FranceInter !");
}

int main()
{
	int nombre;
	pf addOfFunc[3];

	addOfFunc[0] = &Nrj; addOfFunc[1] = &Sky; addOfFunc[2] = &FrTnter;

	cout << "Combien de radios voulez-vous ?" << endl;
	cin >> nombre;

	index = new pf[nombre];

	for (int i = 0; i < nombre; i++)
	{
		int ii;

		cout << "Quelle radios souhaitez-vous a l'indice " << i << " de votre index de radios ?" << endl << "NRJ = 0; Skyrock = 1; FranceTnter = 2" << endl;
		cin >> ii;

		index[i] = addOfFunc[ii];
	}

	for (int i = 0; i < nombre; i++)
	{
		index[i]();
	}
}
