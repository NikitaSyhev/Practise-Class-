#pragma once
#include <string>
#include <vector>
class Abonent
{
public:
	Abonent (std::string name, std::string bookWanted) : _name(name), _bookWanted(bookWanted) {}
	const std::string& getName();
	void setName(std::string& name);

	const std::string& getBook();
	void setBook(std::string& book);

private:
	std::string _name;
	std::string _bookWanted;
};

