#include "Train.h"

Train::Train()
{
}

Train::Train(size_t train_id, std::string station, std::string time, std::string date, size_t cost)
{
	this->train_id = train_id;
	stations.push_back(station);
	this->time = time;
	this->date = date;
	this->cost = cost;
}

void Train::set_train_id(size_t train_id)
{
	this->train_id = train_id;
}

void Train::add_station(std::string station)
{
	stations.push_back(station);
}

void Train::set_time(std::string time)
{
	this->time = time;
}

void Train::set_date(std::string date)
{
	this->date = date;
}

void Train::set_cost(size_t cost)
{
	this->cost = cost;
}

size_t Train::get_train_id()
{
	return this->train_id;
}

std::string Train::get_station(size_t num)
{
	return stations[num];
}

std::string Train::get_time()
{
	return this->time;
}

std::string Train::get_date()
{
	return this->date;
}

size_t Train::get_cost()
{
	return this->cost;
}

bool Train::if_station(std::string str)
{
	for (auto it = stations.begin(); it != stations.end(); it++)
	{
		if ((*it) == str)
			return true;
	}
	return false;
}

bool Train::if_time(std::string str)
{
	if (this->time == str)
		return true;
	else
		return false;
}

bool Train::if_date(std::string str)
{
	if (this->date == str)
		return true;
	else
		return false;
}

void Train::check(std::string str)
{
	auto len = str.find_first_of('\t');
	std::string find_station = str.substr(0, len);
	std::string find_time = str.substr(len + 1);
	len = find_time.find_first_of('\t');
	std::string find_date = find_time.substr(len + 1);
	find_time = find_time.substr(0, len);

	bool check_station = if_station(find_station);
	bool check_time = if_time(find_time);
	bool check_date = if_date(find_date);

	if (check_station == true && check_time == true && check_date == true)
	{
		std::cout << "\n" << "ID: " << this->train_id << "\n" << "Station: " << find_station << "\n" << "Time: " << this->time << "\n" << "Date: " << this->date << "\n" << "Cost: " << this->cost << "\n";
	}
}
