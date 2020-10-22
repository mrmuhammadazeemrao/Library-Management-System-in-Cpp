
#pragma once
#include "Library.h"
class Subscribers: public Library
{
protected:
	int subCount=0;
public:
	void addSubscriber();
	void searchSubscriber();
};