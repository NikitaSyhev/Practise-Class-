#include "Abonent.h"
#include "Book.h"
#include "ILibrary.h"
#include "Library.h"
#include <iostream>


int main() {

	Library L;
	Book B1("Sasha Pushkin", 2000, "The best", 123, "Nothing");
	Book B2("Dorian", 2000, "Grey", 123, "Tothing to say");
	Book B3("Sasha", 2000, "Papa", 123, "Nothing");
	L.addBook(B1);
	L.editBook(1, B2);
	L.addBook(B3);

	Abonent A("Nikita", "Grey");
	L.addAbonent(A, B1);
	









}