#include "Library.h"
#include <iostream>
#include <queue>
#include <vector>

void Library::addBook(Book& book)
{
	
	_books.insert({ _idCounter, book });
	_idCounter++;
	std::cout << "We added book  " << book.getName() << std::endl;
	listBooks.push_back(book);
}

void Library::addAbonent(Abonent& abonent, Book& book)
{
	
	_abonents.insert({ _idCounter , abonent });


	std::cout << "We added abonent  " << abonent.getName() << std::endl;
	std::queue<Abonent> abonents;
	abonents.push(abonent);
	for (size_t i = 0; i < listBooks.size(); i++) {
		if (abonent.getBook() == book.getName()) {
			std::cout << "We founded book Wanted" << std::endl;
			;
		}
	}
}



void Library::editBook(int key, Book & book)
{
	
	auto it = _books.find(key); // todo
	std::cout << "We deleted book number " << key << std::endl;
	_books.erase(key);
	if (!(it == _books.end())) {
		it->second.setName // todo
	}
	else {
		// todo 
	}
	std::cout << "We changed this book to " << book.getName() << std::endl;
	
	
}

void Library::pop() {
	while (abontents.begin() != abonents.end()) {
		auto it = abonents.begin()
		it->second.getWantedBook()
		for book in books  // допилить эту функцию, так как стандартно если мы делаем erase мапы, происходит инварлидаци€ итераторов ( нужно делать через цикл for и выходить из цикла, когда происходит erase () ( ставить  
			if wantedBook == book.name()

	}
}

void Library::deleteBook(int key)
{
	_books.erase(key);
	std::cout << "ћы удалили книгу с номером " << key << std::endl;

}


