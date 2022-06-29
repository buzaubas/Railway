#include <iostream>
#include <string>
#include "Railway.h"
#include "Train.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	std::string station;
	std::string time;
	std::string date;
	size_t choosen_id;

	std::cout << ":::::APPLICATION:::::" << std::endl;
	std::cout << "Your station: ";
	getline(std::cin, station);
	std::cout << "Your time: ";
	getline(std::cin, time);
	std::cout << "Your date: ";
	getline(std::cin, date);

	Railway Almaty;
	Almaty.add_train(Train(104, "Bukhar-Zhyrau", "12:50", "14.04", 50000));

	std::string application = station + "\t" + time + "\t" + date;

	std::cout << ":::::AVAILABLE:::::" << std::endl;
	Almaty.find_train(application);

	std:cout << "Enter ID: ";
	std::cin >> choosen_id;
}
