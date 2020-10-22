#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include <string.h>
#include "Contents.h"
void Contents::addContent()
{
	
	
		cout << "\nEnter item Id: ";
		cin.getline(aa, 50);
		cout << "\nEnter Name: ";
		cin.getline(bb,50);
		cout << "\nEnter Author: ";
		cin.getline (cc,50);
		cout << "\nEnter Edition: ";
		cin.getline(dd,50);		
		
		cout << "\nSelect which type you want to add:-";
		cout << "\n1: For book\t2: for Article\t3: for Digital Media\n";
		int c;
		cin >> c;
	if (c == 1)
	{
		b.addBook(aa, bb, cc, dd);
	}
}
void Contents::findContent()
{

	char i[50],b[50],c[50],d[50],e[50], a[50];
	cout << "\nEnter id: ";
	cin.getline(i, 50);
	ifstream obj;
	obj.open("content.txt", ios::_Nocreate);
	while (!obj.eof())
	{
		obj.getline(a,50,'_');
		obj.getline(b,50,'_');
		obj.getline(c, 50, '_');
		obj.getline(d, 50, '_');
		obj.getline(e, 50, '\n');
		if (strcmp(i, a) == 0)
		{
			cout << "\nId is: " << a << "\nType is: " << b << "\nBooks name is: " << c << "\nAuthor is: " << d << "\nEdition is: " << e << endl;
			count++;
			break;
		}
		
		
	}
}