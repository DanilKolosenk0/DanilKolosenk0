#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
class CGasStation
{
private:
	struct TypeGas
	{
		string Gas__Name;
		int Amount, MaxAmount;
	};
	int MaxLitres, Amout__Litres;
	double Capacity;
	string GasNames[4] = { "Diesel","Gasoline","Methanol","Propane" };
	TypeGas Dgases[4];
	void Initialize()
	{
		for (int i = 0; i < 4; i++)
		{
			Dgases[i].Gas__Name = GasNames[i];
			Dgases[i].Amount = Amout__Litres;
			Dgases[i].MaxAmount = MaxLitres;
		}
	}
public:
	friend ostream& operator<< (ostream& out, const CGasStation& gass);
	friend bool operator==(const CGasStation& gass1, const CGasStation& gass2);
	CGasStation()
	{
		MaxLitres = 1500;
		Amout__Litres = 750;
		Capacity = 0.5;
		Initialize();
	}
	CGasStation(int MaxLitres, int Amout__Litres, double Capacity)
	{
		this->MaxLitres = MaxLitres;
		this->Amout__Litres = Amout__Litres;
		this->Capacity = Capacity;
		Initialize();
	}
	void Information()
	{
		cout << setw(15) << "Gas name" << setw(15) << "Now litres" << setw(15) << "Max Litres" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << setw(15) << Dgases[i].Gas__Name << setw(15) << Dgases[i].Amount << setw(15) << Dgases[i].MaxAmount << endl;
		}
	}
	void AddAmount(int ZAmount, int Where)
	{
		if (ZAmount + Dgases[Where].Amount < Dgases[Where].MaxAmount)
		{
			Dgases[Where].Amount += ZAmount;
		}
		else
		{
			cout << "Maximum";
			Dgases[Where].Amount = Dgases[Where].MaxAmount;
		}
	}
	void Refuil(int Litres, int Where)
	{
		double time;
		if (Dgases[Where].Amount - Litres > 0)
		{
			time = Litres / Capacity;
			Dgases[Where].Amount -= Litres;
			cout << "It will took: " << time << " secunds" << endl;
		}
		else
		{
			cout << "Not enough gas" << endl;
		}
	}
	CGasStation operator+(CGasStation gass1)
	{
		gass1.Amout__Litres += Amout__Litres;
		gass1.Capacity += Capacity;
		gass1.MaxLitres += MaxLitres;
		for (int i = 0; i < 4; i++)
		{
			gass1.Dgases[i].Amount += Dgases[i].Amount;
			gass1.Dgases[i].MaxAmount += Dgases[i].MaxAmount;
		}
		return gass1;
	}
	TypeGas& operator[](int index)
	{
		if (index >= 4 && index < 0)
		{
			cout << "Array index out of bound, exiting";
			exit(0);
		}
		return Dgases[index];
	}
	CGasStation& operator--(int)
	{
		MaxLitres--;
		Amout__Litres--;
		Capacity--;
		for (int i = 0; i < 4; i++)
		{
			Dgases[i].Amount--;
			Dgases[i].MaxAmount--;
		}
		return *this;
	}
};
ostream& operator<< (ostream& out, const CGasStation& gass)
{
	out << setw(15) << "Gas name" << setw(15) << "Now litres" << setw(15) << "Max Litres" << endl;
	for (int i = 0; i < 4; i++)
	{
		out << setw(15) << gass.Dgases[i].Gas__Name << setw(15) << gass.Dgases[i].Amount << setw(15) << gass.Dgases[i].MaxAmount << endl;
	}
	return out;
}
bool operator==(const CGasStation& gass1, const CGasStation& gass2)
{
	bool check = true;
	if (gass1.MaxLitres == gass2.MaxLitres && gass1.Capacity == gass2.Capacity && gass1.Amout__Litres == gass2.Amout__Litres) check = true;
	else
	{
		return false;
	}
	for (int i = 0; i < 4; i++)
	{
		if (gass1.Dgases[i].Amount == gass2.Dgases[i].Amount && gass1.Dgases[i].Gas__Name == gass2.Dgases[i].Gas__Name && gass1.Dgases[i].MaxAmount == gass2.Dgases[i].MaxAmount)check = true;
		else
		{
			return false;
		}

	}
	return true;
}
bool operator!=(const CGasStation& gass1, const CGasStation& gass2)
{
	return !(gass1 == gass2);
}
