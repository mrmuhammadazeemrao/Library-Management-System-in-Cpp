#include <iostream>
using namespace std;
#include <string>
#include <string.h>
#include <fstream>
#include "borrowingRecords.h"
void borrowingRecords::borrowItem()
{
	findContent();
	if (count==1)
	{
		cout << "\n***Item Record Found***\n";
		searchSubscriber();
		if (subCount = 1)
		{
			cout << "Finished";
		}
	}
	else  cout << "***Record did not Found***";
}