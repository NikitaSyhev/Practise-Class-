#pragma once
#include "ILibrary.h"
#include "Abonent.h"
#include "Book.h"
#include <map>
class Library : public ILibrary
{
public:
	Library(){
	
	}
	
	Library(std::map<int, Book> books, std::map<int, Abonent> abonents) : _books(books), _abonents(abonents), _idCounter (0) {}

	void addAbonent(Abonent& abonent, Book& book) override;
	void addBook(Book& book) override;
	void editBook(int key, Book& book) override;
	void deleteBook(int key) override;

	~Library() {}

private:
	std::map<int, Book> _books;
	std::map<int, Abonent> _abonents;
	std::vector<Book> listBooks;
	int _idCounter = 0;
};

