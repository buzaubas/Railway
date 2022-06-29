#pragma once
#include <vector>
#include "Train.h"
class Railway
{
private:
	std::vector<Train> trains;
public:
	Railway();
	Railway(Train obj);

	void add_train(Train obj);

	void find_train(std::string str);
};

