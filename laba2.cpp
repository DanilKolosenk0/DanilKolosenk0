#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	char drivesname;
	int drivessize = 0;
	float drivesused = 0;
	int drivesusedbite = 0;
	cout << "Enter the name of drive" << endl;
	cin >> drivesname;
	cout << "Enter the size of drive in bytes" << endl;
	cin >> drivessize;
	
	do{
		cout << "Enter the used memory of drive in range from 0 to 100" << endl;
		cin >> drivesused;
	} while (drivesused < 0 || drivesused > 100);

	drivesusedbite = (drivessize * drivesused) / 100;
	string path = "myFile.txt";
	ofstream fout;

	fout.open(path);
	if (!fout.is_open())
	{
		cout << "Error! File is not found!" << endl;
	}
	else
	{
		fout << "Name of drive:";
		fout << drivesname << endl;
		fout << "Size of drive:";
		fout << drivessize << endl;
		fout << "Used memory of drive:";
		fout << drivesusedbite << endl;
	}
	fout.close();

	return 0;
} 