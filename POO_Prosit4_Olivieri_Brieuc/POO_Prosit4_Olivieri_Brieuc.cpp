#include <iostream>
#include "REC.h"
#include "EM.h"
#include "Radio.h"

using namespace std;

typedef void (*pf)(void);
pf* index;

int main()
{
	int nombre;
	pf addOfFunc[3];

	Radio rad;

	addOfFunc[0] = &(rad.Nrj);
	addOfFunc[1] = &(rad.Sky);
	addOfFunc[2] = &(rad.FrTnter);

	cout << "Combien de radios voulez-vous vous abonner ?" << endl;
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
