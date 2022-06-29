#include "Railway.h"

Railway::Railway()
{
}

Railway::Railway(Train obj)
{
	trains.push_back(obj);
}

void Railway::add_train(Train obj)
{
	trains.push_back(obj);
}

void Railway::find_train(std::string str)
{
	for (auto it = trains.begin(); it != trains.end(); it++)
	{
		(*it).check(str);
	}
}
