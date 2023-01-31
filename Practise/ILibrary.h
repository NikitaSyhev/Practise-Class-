#pragma once
#include "Abonent.h"
#include "Book.h"
#include <map>


class ILibrary
{
public:
	virtual void addAbonent(Abonent& abonent, Book& book) = 0;
	virtual void addBook(Book & book) = 0;
	virtual void editBook(int key, Book& book) = 0;
	virtual void deleteBook(int key) = 0;
	virtual ~ILibrary() {}

};

