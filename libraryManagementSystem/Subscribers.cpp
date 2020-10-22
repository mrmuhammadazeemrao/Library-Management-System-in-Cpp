
#include <iostream>
using namespace std;
#include <string>
#include <string.h>
#include <fstream>
#include "Subscribers.h"
	void Subscribers::addSubscriber()
	{
		cout << "\nEnter Id of Suscriber: ";
		cin.getline(id, 50);
		cout << "\nEnter type of subscriber(silver,golden): ";
		cin.getline(type, 50);
		cout << "\nEnter Subscriber name: ";
		cin.getline(name, 50);
		fstream obj;
		obj.open("Subscribers.txt", ios::app | ios::ate);
		obj << id << '_' << name << '_' << type << '\n';
		obj.close();
	}
	void Subscribers::searchSubscriber()
{
		char i[50],  a[50],  b[50],  c[50];
		//cin.ignore();
		cout << "\nEnter subscriber id: ";
		cin.getline(i, 50);
		fstream myFile("Subscribers.txt", ios::_Nocreate);
	while(!myFile.eof())
		{
		myFile.getline(a, 50, '_');
		myFile.getline(b, 50, '_');
		myFile.getline(c, 50, '\n');

	    if (strcmp(i, a) == 0)
		{
			subCount = 1;
			cout << "\nId is: " << a << "\nName is: " << b << "\nType is: " << c;
			if (c[0] == 's')
			{
				cout << "\nThis person can borrow for three week";
			}
			else if (c[0] == 'g')
			{
				cout << "\nThis person can borrow for three months";
			}
			break;
		}


		}
	
	}