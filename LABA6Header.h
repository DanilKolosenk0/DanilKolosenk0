#pragma once
#include <iostream>
#include <time.h>
using namespace std;
class Device
{
private:
	string name;
	int Discount, Rozmir;
	int* Device_Frequency;

public:
	Device();
	~Device();
	virtual void Set(int disk) = 0;
	virtual int Get() = 0;
	virtual bool Chek__Frequnce() = 0;
	virtual int Ret__Frequnce(int i);
	virtual void Frequnce();
	virtual void Info();
};
