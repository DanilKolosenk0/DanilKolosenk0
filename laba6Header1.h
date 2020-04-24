#pragma once
#include <iostream>
#include <time.h>
#include <iomanip>
#include "LABA6Header.h"
using namespace std;
class Tv : public Device
{
private:
	string Model;
	int Discount, Rozmir;
	int* TV_Frequencys;
	friend Tv operator+(const Tv& tv, const Tv& tv2);
public:
	Tv(string st, int st1)
	{
		Model = st;
		Discount = st1;
		Rozmir = 10;
		TV_Frequencys = new int[Rozmir];
		for (int i = 0; i < Rozmir; i++)
		{
			TV_Frequencys[i] = rand() % 100;
		}
	}
	~Tv()
	{
		if (TV_Frequencys != 0)
		{
			delete[]TV_Frequencys;
		}
	}
	void Set(int disk) override
	{
		Discount = disk;
	}
	int Get() override
	{
		return Discount;
	}
	bool Chek__Frequnce() override
	{
		bool chek;
		for (int i = 0; i < Rozmir; i++)
		{
			if (TV_Frequencys[i] != Ret__Frequnce(i))chek = true;
			else
			{
				chek = false;
				goto Eror;
			}
		}
		cout << "Frequences OK" << endl;
		return false;
		return true;
	Eror:
		cout << "Frequences have a problem" << endl;
		return false;
	}
	void Tv_Info()
	{
		cout << "Model: " << Model << endl << "Discount: " << Discount << endl << "Tv Frequence: ";
		for (int i = 0; i < Rozmir; i++)
		{
			cout << TV_Frequencys[i] << " ";
		}
	}
	Tv operator+(Tv tv)
	{
		tv.Discount += Discount;
		tv.Model += Model;
		for (int i = 0; i < tv.Rozmir; i++)
		{
			tv.TV_Frequencys[i] += TV_Frequencys[i];
		}
		return tv;
	}
	void operator=(const Tv& tv1)
	{
		Discount = tv1.Discount;
		Model = tv1.Model;
		for (int i = 0; i < Rozmir; i++)
		{
			TV_Frequencys[i] = tv1.TV_Frequencys[i];
		}
	}
};
