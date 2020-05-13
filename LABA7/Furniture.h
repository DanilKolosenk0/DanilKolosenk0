#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class �Furniture
{
protected:
	string Furniture_Name;
	double width, height;
	const int size = 10;
	int* dynMasuv;
public:
	�Furniture();
	�Furniture(int w, int h);
	�Furniture(string name, int w, int h);
	virtual ~�Furniture();
	double GetWidth();
	double GetHeight();
	virtual void ShowInfo();
	�Furniture& operator=(const �Furniture&);
};

