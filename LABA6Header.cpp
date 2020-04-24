#include "LABA6Header.h"
Device::Device()
{
	srand(time(0));
	name = "Device";
	Discount = 10;
	Rozmir = 10;
	Device_Frequency = new int[Rozmir];
	for (int i = 0; i < Rozmir; i++)
	{
		Device_Frequency[i] = rand() % 100;
	}
}
Device::~Device()
{
	if (Device_Frequency != 0)
	{
		delete[]Device_Frequency;
	}
}
int Device::Ret__Frequnce(int i)
{
	return Device_Frequency[i];
}
void Device::Frequnce()
{
	for (int i = 0; i < Rozmir; i++)
	{
		cout << Device_Frequency[i] << " ";
	}
}
void Device::Info()
{
	cout << "Name: " << name << endl << "Discount: " << Discount << endl << "Frequence: ";
	Frequnce();
}
