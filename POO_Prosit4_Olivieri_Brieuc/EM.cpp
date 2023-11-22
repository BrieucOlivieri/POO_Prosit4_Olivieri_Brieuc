#include "EM.h"
#include "REC.h"

typedef void (*evt)(const char*);
evt e;

void EM::signal(const char* message)
{
	e = &REC::ecoute;
	e(message);
};