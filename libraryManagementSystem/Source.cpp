#include <iostream>
using namespace std;
#include <conio.h>
#include <string>
#include <string.h>
#include <fstream>
#include "Contents.h"
#include "borrowingRecords.h"
int main()
{
	borrowingRecords obj;
	obj.searchSubscriber();
	cout << endl;
	_getch();
	return 0;
}