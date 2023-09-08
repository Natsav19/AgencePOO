#include "Transport.h"
#include "Vaisseau.h"
Transport::Transport():Vaisseau(5,10,100,20,3,1200, "VaisseauT")
{
	type = "Transport";
};
Transport::~Transport(){}