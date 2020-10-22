
#include <iostream>
using namespace std;
#include <fstream>
#include <string>
#include <string.h>
#include "Books.h"
Books::Books()
{
	name[50] = '\0';
	id[50] = '\0';
	author[50] = '\0';
	edition[50] = '\0';
	type[50] = '\0';
}
void Books::addBook(char a[50], char b[50], char c[50], char d[50])
{
	ofstream at;
	at.open("Content.txt", ios::app | ios::ate);
	strcpy_s(name, b);
	strcpy_s(id, a);
	strcpy_s(author, c);
	strcpy_s(edition, d);
	at <<id<<'_'<< "Book"<< '_' << name<<'_' << author << '_' << edition<<'\n';
	at.close();
}