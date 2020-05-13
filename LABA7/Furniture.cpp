#include "Furniture.h"

�Furniture::�Furniture()
{
	Furniture_Name = "No name";
	width = 0;
	height = 0;
	dynMasuv = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		dynMasuv[i] = rand() % 10 + 1;
	}
}

�Furniture::�Furniture(string name, int w, int h)
{
	Furniture_Name = name;
	width = w;
	height = h;
	dynMasuv = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		dynMasuv[i] = rand() % 10 + 1;
	}
}

�Furniture::�Furniture(int w, int h)
{
	Furniture_Name = "No name";
	width = w;
	height = h;
	dynMasuv = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		dynMasuv[i] = rand() % 10 + 1;
	}
}

�Furniture::~�Furniture()
{
	delete[] dynMasuv;
}

double �Furniture::GetHeight()
{
	return height;
}

double �Furniture::GetWidth()
{
	return width;
}

void �Furniture::ShowInfo()
{
	cout << "\n---Info---\n" << "Name: " << Furniture_Name << "\nWidth: " << width << "\nHeight: " << height << "\nRandom: ";
	for (int i = 0; i < size; i++)
	{
		cout << dynMasuv[i] << " ";
	}
	cout << endl;
}

�Furniture& �Furniture::operator=(const �Furniture& obj)
{
	Furniture_Name = obj.Furniture_Name;
	width = obj.width;
	height = obj.height;
	for (int i = 0; i < size; i++)
	{
		dynMasuv[i] = obj.dynMasuv[i];
	}
	return *this;
}
