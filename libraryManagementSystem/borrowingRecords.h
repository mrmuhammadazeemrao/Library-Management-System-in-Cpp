#pragma once
#include "Subscribers.h"
#include "Contents.h"
class borrowingRecords: public Contents,public Subscribers
{
public:
	void borrowItem();
};