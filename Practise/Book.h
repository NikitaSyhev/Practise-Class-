#pragma once
#include <string>

class Book
{
public:
	Book(std::string author, int year, std::string title, int id, std::string descripton) : _author(author), _year(year), _title(title), _id(id), _description(descripton){};
	const std::string& getName();

private:
	std::string _author;
	int _year;
	std::string _title;
	int _id;
	std::string _description;
};

