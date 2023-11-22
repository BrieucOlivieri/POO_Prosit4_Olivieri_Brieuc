#include "Radio.h"
#include "EM.h"

void Radio::Nrj(void)
{
	EM NRJ;
	NRJ.signal("Vous ecoutez NRJ !");
}

void Radio::Sky(void)
{
	EM Skyrock;
	Skyrock.signal("Vous ecoutez SKYROCK !");
}

void Radio::FrTnter(void)
{
	EM FranceInter;
	FranceInter.signal("Vous ecoutez FranceInter !");
}
