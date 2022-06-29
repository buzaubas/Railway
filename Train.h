#pragma once
#include <vector>
#include <string>
#include <iostream>
class Train
{
private:
	size_t train_id;
	std::vector<std::string> stations;
	std::string time;
	std::string date;
	size_t cost;
public:
	Train();
	Train(size_t train_id, std::string stations, std::string time, std::string date, size_t cost);

	void set_train_id(size_t train_id);
	void add_station(std::string station);
	void set_time(std::string time);
	void set_date(std::string date);
	void set_cost(size_t cost);

	size_t get_train_id();
	std::string get_station(size_t num);
	std::string get_time();
	std::string get_date();
	size_t get_cost();

	bool if_station(std::string str);
	bool if_time(std::string str);
	bool if_date(std::string str);

	void check(std::string str);
};

