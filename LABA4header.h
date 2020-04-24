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
	CGasStation()
	{
		MaxLitres = 1500;
		Amout__Litres = 750;
		Capacity = 0.5;
		Initialize();
	}
	~CGasStation()
	{
		
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
		if (ZAmount+Dgases[Where].Amount< Dgases[Where].MaxAmount)
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
		if (Dgases[Where].Amount- Litres >0)
		{
			time = Litres / Capacity;
			Dgases[Where].Amount -= Litres;
			cout << "It will took: " << time << " secunds"<<endl;
		}
		else
		{
			cout << "Not enough gas" << endl;
		}
	}
};

