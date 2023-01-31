#include "Abonent.h"
#include <string>


const std::string& Abonent::getName()
{
    return _name;
}

void Abonent::setName(std::string& name)
{
    _name = name;
}

const std::string& Abonent::getBook()
{
    return _bookWanted;
}

void Abonent::setBook(std::string& book)
{
    _bookWanted = book;
}
