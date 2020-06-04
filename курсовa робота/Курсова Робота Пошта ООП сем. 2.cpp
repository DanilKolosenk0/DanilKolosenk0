// Курсова Робота Пошта ООП сем. 2

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ofstream MyFile;

class Estore
{
public:
	Estore(double Size1, int Workers1)
	{
		double Size;
		Size = Size1;
		int Workers;
		Workers = Workers1;
	}
	void Cleaning(double Size)
	{
		cout << "============================================================" << endl;
		cout << "Each month you have to pay this sum for maintance of your office (in grn):" << endl;
		double Val;
		Val = Size * 50;
		cout << Val << endl;

	}
	void Resources( double Size, int Workers)
	{
		cout << "============================================================" << endl;
		int res;
		cout << "Each month you have to pay this sum for using Electricity, Water and Gas (in grn):" << endl;
		res = (Size / 3)*Workers * 5;
		cout << res << endl;
	}
	void Calculate()
	{
		string HomeCity;
		string CheckPoint;
		int Length;
		int Decision1, Decision2;
		
		cout << "============================================================" << endl;
		cout << "Choose the city, where you want to deliever from (below you will see the list of cities, where we can deliever your package)" << endl;
		cout << "1) Lviv" << endl;
		cout << "2) Kyiv" << endl;
		cout << "3) Kharkiv" << endl;
		cout << "4) Kherson" << endl;
		cout << "5) Lutsk" << endl;
		cout << "6) Dnipro" << endl;
		cin >> Decision1;
		cout << "Choose the city, where your delieverance should go" << endl;
		cout << "1) Lviv" << endl;
		cout << "2) Kyiv" << endl;
		cout << "3) Kharkiv" << endl;
		cout << "4) Kherson" << endl;
		cout << "5) Lutsk" << endl;
		cout << "6) Dnipro" << endl;
		cin >> Decision2;
		if (Decision1 == 1 && Decision2 == 1)
		{
			Length = 0;
		}
		if (Decision1 == 1 && Decision2 == 2)
		{
			Length = 540;
		}
		if (Decision1 == 1 && Decision2 == 3)
		{
			Length = 1016;
		}
		if (Decision1 == 1 && Decision2 == 4)
		{
			Length = 888;
		}
		if (Decision1 == 1 && Decision2 == 5)
		{
			Length = 151;
		}
		if (Decision1 == 1 && Decision2 == 6)
		{
			Length = 1011;
		}
		if (Decision1 == 2 && Decision2 == 1)
		{
			Length = 0;
		}
		if (Decision1 == 2 && Decision2 == 2)
		{
			Length = 0;
		}
		if (Decision1 == 2 && Decision2 == 3)
		{
			Length = 480;
		}
		if (Decision1 == 2 && Decision2 == 4)
		{
			Length = 546;
		}
		if (Decision1 == 2 && Decision2 == 5)
		{
			Length = 400;
		}
		if (Decision1 == 2 && Decision2 == 6)
		{
			Length = 476;
		}
		if (Decision1 == 3 && Decision2 == 1)
		{
			Length = 1016;
		}
		if (Decision1 == 3 && Decision2 == 2)
		{
			Length = 480;
		}
		if (Decision1 == 3 && Decision2 == 3)
		{
			Length = 0;
		}
		if (Decision1 == 3 && Decision2 == 4)
		{
			Length = 515;
		}
		if (Decision1 == 3 && Decision2 == 5)
		{
			Length = 875;
		}
		if (Decision1 == 3 && Decision2 == 6)
		{
			Length = 217;
		}
		if (Decision1 == 4 && Decision2 == 1)
		{
			Length = 888;
		}
		if (Decision1 == 4 && Decision2 == 2)
		{
			Length = 546;
		}
		if (Decision1 == 4 && Decision2 == 3)
		{
			Length = 515;
		}
		if (Decision1 == 4 && Decision2 == 4)
		{
			Length = 0;
		}
		if (Decision1 == 4 && Decision2 == 5)
		{
			Length = 845;
		}
		if (Decision1 == 4 && Decision2 == 6)
		{
			Length = 329;
		}
		if (Decision1 == 5 && Decision2 == 1)
		{
			Length = 151;
		}
		if (Decision1 == 5 && Decision2 == 2)
		{
			Length = 400;
		}
		if (Decision1 == 5 && Decision2 == 3)
		{
			Length = 875;
		}
		if (Decision1 == 5 && Decision2 == 4)
		{
			Length = 845;
		}
		if (Decision1 == 5 && Decision2 == 5)
		{
			Length = 0;
		}
		if (Decision1 == 5 && Decision2 == 6)
		{
			Length = 871;
		}
		if (Decision1 == 6 && Decision2 == 1)
		{
			Length = 151;
		}
		if (Decision1 == 6 && Decision2 == 2)
		{
			Length = 400;
		}
		if (Decision1 == 6 && Decision2 == 3)
		{
			Length = 875;
		}
		if (Decision1 == 6 && Decision2 == 4)
		{
			Length = 845;
		}
		if (Decision1 == 6 && Decision2 == 5)
		{
			Length = 0;
		}
		if (Decision1 == 6 && Decision2 == 6)
		{
			Length = 871;
		}
		
		
		cout << "Length is (in km):" << endl << Length << endl;
	}
	void Profit(int Workers, double Size)
	{
		cout << "============================================================" << endl;
		int  n, i;
		double Profit, Value, Pay;
		cout << "How many sells you make per month?" << endl;
		cin >>  n;
		cout << "What is the average cost of a buy?" << endl;
		int res;
		int Val;
		Val = Size * 50;
		cin >> Value;
		res = (Size / 3)*Workers * 5;
		Pay = Workers * 2500.50;
		Profit = (Value*n) - Pay - res - Val;
		if (Profit > 0)
		{
			cout << "Your Estore is succesfull, and the profit is:" << endl << Profit << endl;
		}
		if (Profit < 0)
		{
		
			cout << "Your Estore is unsuccesfull, the profit is below zero:" << endl << Profit << endl;
			cout << "You have to delete some workers to have a positive profit" << endl;
			for ( i =0; Profit < 0; i++)
			{
				Profit = Profit + 2500.50;
				
			}
			cout << "You have to delete this amount of Workers or make more delieveris" << endl << i << endl;
		
		}
	}
	void RegularVisitors()
	{
		string Name, Surname;
		int ProcentDisount;
		int Dec;
		
	S:
		cout << "============================================================" << endl;
		cout << "Do you want to add a regular customer? (1 is 'yes', 2 is 'no')" << endl;
		cin >> Dec;
		if (Dec == 1)
		{
			int n;
			cout << "How many reg visitors do you want to add?" << endl;
			cin >> n;
			for (int i = 0; i < n; i++)
			{
				    
				
				cout << "Enter the Name of your regular customer" << endl;
				cin >> Name;
				cout << "Enter the Surname of your regular customer" << endl;
				cin >> Surname;
				cout << "What is his Discount (in %)?" << endl;
				cin >> ProcentDisount;
				std::ofstream vmdelet_out;
				vmdelet_out.open("result.txt", std::ios::app);
				vmdelet_out << "Name:" << Name << endl << "Surname:" << Surname << endl << "Discount:" << ProcentDisount << endl;
				vmdelet_out.close();
				
				cout << "Enlisting ended" << endl;
				MyFile.close();
			}
		}
		if (Dec == 2)
		{
			cout << "Enlisting ended" << endl;

		}
		if (Dec > 2)
		{
			cout << "Error" << endl;
			goto S;

		}
		
	}
	void ReWriteRegV()
	{
		
	H:
		int Decis;
		cout << "Are you sure ypu wnat to rewrite the list (1 is 'yes', 2 is 'no')?" << endl;
		cin >> Decis;
		if (Decis == 1)
		{
			ofstream ofs;
			ofs.open("result.txt", std::ofstream::out | std::ofstream::trunc);
			ofs.close();
			cout << "How many reg visitors do you want to add?" << endl;
			int n;
			string Name, Surname, ProcentDiscount;
			cin >> n;
			for (int i = 0; i < n; i++)
			{


				cout << "Enter the Name of your regular customer" << endl;
				cin >> Name;
				cout << "Enter the Surname of your regular customer" << endl;
				cin >> Surname;
				cout << "What is his Discount (in %)?" << endl;
				cin >> ProcentDiscount;
				std::ofstream vmdelet_out;
				vmdelet_out.open("result.txt", std::ios::app);
				vmdelet_out << "Name:" << Name << endl << "Surname:" << Surname << endl << "Discount:" << ProcentDiscount << endl;
				vmdelet_out.close();

				cout << "Enlisting ended" << endl;
				MyFile.close();
			}
		}
		if (Decis == 2)
		{
			cout << "List haven`t changed" << endl;
		}
		if (Decis > 2)
		{
			cout << "Error" << endl;
			goto H;
		}
			
	}
	void PrintRegV()
	{
		cout << "============================================================" << endl;
		
		ifstream file("result.txt");
		cout << file.rdbuf() << endl;
		cout << endl;
		
			
	}
	void AmountOfWorkersAdd(int Workers)
	{
		int WorkAdd;
		double Money;
		int Decision;
		cout << "============================================================" << endl;
		cout << "How many workers do you want to add?" << endl;
		cin >> WorkAdd;
		Workers = Workers + WorkAdd;
		Money = Workers * 2500.50;
		cout << "You will have to pay this payment:" << endl << Money << endl;
		cout << "Are you sure? (1 is Yes, 2 is No)" << endl;
		cin >> Decision;
		if (Decision == 2)
		{
			cout << "The amount of workers  haven`t changed" << endl;
			Workers = Workers - WorkAdd;
		}
		if (Decision == 1)
		{
			cout << "Now, the amount of workers is:" << endl << Workers << endl;
			cout << "Now you have to pay this sum each month (in grn):" << endl << Money << endl;
		}
	}
	void AmountOfWorkersDelete(int Workers)
	{
		cout << "============================================================" << endl;
		int WorkDel;
		double Money;
		int Decision;
		cout << "How many workers do you want to delete?" << endl;
		cin >> WorkDel;
		Workers = Workers - WorkDel;
		Money = Workers * 2500.50;
		cout << "You will have to pay this payment:" << endl << Money << endl;
		cout << "Are you sure? (1 is Yes, 2 is No)" << endl;
		cin >> Decision;
		if (Decision == 2)
		{
			cout << "The amount of workers  haven`t changed" << endl;
			Workers = Workers + WorkDel;
		}
		if (Decision == 1)
		{
			cout << "Now, the amount of workers is:" << endl << Workers << endl;
			cout << "Now you have to pay this sum each month (in grn):" << endl << Money << endl;
		}
	}
	int TimeOfDelievering(double DelWeig, double Size, double Length)
	{
		cout << "============================================================" << endl;
		int Time;
		Time = (Length + DelWeig + Size) / 5;
		if (Time < 24)

		{
			Time = 24;
		}
		cout << "The probable time of delievering is (in hours):" << endl << Time << endl;
		
		return Time;
		
	}
	void AmountOfPaymentForWorkers(int Workers)
	{
		cout << "============================================================" << endl;
        double Money;
		Money = Workers * 2500.50;
		cout << "Each month you have to pay this sum (in grn):" << endl << Money << endl;
		
		
	}
	void AmountOfPaymentForDelieveries(double DelWeig, double Size, double Length, double PayOLength, double PayOWeig, double PayOSize)
	{
		cout << "============================================================" << endl;
		double Payment;
		Payment = (PayOLength*Length + PayOSize*Size + PayOWeig*DelWeig);
		
		cout << "You have to pay this to deliever your package:" << endl << Payment << endl;
	}
	friend void Rating(double Size, double Workers, double Pay1, double Pay2, double Pay3);
};
class Human
{
public:
	string Name;
	string Surname;
	int Age;
	
};
class Worker : public Human
{
public:
	int Experience;
	string Position;
	void RegWorker()
	{
		cout << "============================================================" << endl;
		cout << "Enter the charachteristics of a new worker" << endl;
		cout << "Name?" << endl;
		cin >> Name;
		cout << "Surname" << endl;
		cin >> Surname;
		cout << "Age?" << endl;
		cin >> Age;
		cout << "Experience (in years)?" << endl;
		cin >> Experience;
		cout << "Position?" << endl;
		cin >> Position;
		std::ofstream vmdelet_out;
		vmdelet_out.open("Workers.txt", std::ios::app);
		vmdelet_out << "Name:" << Name << endl << "Surname:" << Surname << endl << "Age:" << Age << endl << "Experience:" << Experience << endl << "Position:" << Position << endl;
		vmdelet_out.close();
	}
	void PrintWorkers()
	{
		cout << "============================================================" << endl;

		ifstream file("Workers.txt");
		cout << file.rdbuf() << endl;
		cout << endl;
	}
	void DelInf()
	{
		int Dec;
	G:
		cout << "============================================================" << endl;
		cout << "Are you sure you want to delete a list (1 is'yes', 2 is 'no')?" << endl;
		cin >> Dec;
		if (Dec == 1)
		{


			ofstream ofs;
			ofs.open("Workers.txt", std::ofstream::out | std::ofstream::trunc);
			ofs.close();
		}
		if (Dec == 2)
		{
			cout << "List haven`t changed" << endl;
		}
		if (Dec > 2)
		{
			cout << "Error" <<  endl;
			goto G;
		}

	}
};



void Rating (double Size, double Workers, double Pay1, double Pay2, double Pay3)
{
	
	int Time;
	int Ethalon = 1000;
	Time = (50 + 1000 + 5) / 5;
	cout << "============================================================" << endl;	
	cout << "You have the reputation, which depends on ypor prices, amount of people and time of delieverence (200 is Max)" << endl;
	int Score;
	cout << "Ethalon has this parametres:" << endl << "Weight is 50 kg" << endl << "Size is 5 square metres" << endl << "Length is 1000 km" << endl;
	double Payment;
	Payment = (Pay1*1000 + Pay3 * 5 + Pay2 * 50);
	Score =(Ethalon + Size + Workers - (Payment + Time))/2;
	if (Score > 200)
	{
		Score = 200;
	}
	if (Score < 0)
	{
		Score = 0;
	}

	cout << "Your score is:" << endl;
	cout << Score << endl;
	if (Score == 0)
	{
		cout << "Your Estore has a low rating, change your politics, employ workers or extend the size" << endl;
	}
	if (Score < 100)
	{
		cout << "Your Estore has lower than average rating, try to improve it by changing your politics, emploing workers or extending the size" << endl;

	}
	if (Score < 200 && Score >= 100)
	{
		cout << "Your Estore has a good rating, good work" << endl;
	}
	if (Score == 200)
	{
		cout << "Your Estore is one of the best, good work" << endl;
	}

	
  
}
int main()
{
	system("color 70");
	
	int Decision;

	cout << "Hello, this  programm is made for a work of an electronics store" << endl;
	cout << "============================================================" << endl;
	Start:
	cout << "First, you have to enter the charachteristics of yout store" << endl;
	Worker Wrkr;
	int Workers;
	double Size;

	cout << "How many workers are working at your store?" << endl;
	cin >> Workers;
	cout << "What is the size of your store" << endl;
	cin >> Size;
	cout << "Now, enter your delievery politic" << endl;
	double Pay1, Pay2, Pay3;
	cout << "What is the cost of 1 km of delieverence (in grn)?" << endl;
	cin >> Pay1;
	cout << "What is the cost of 1 kg of delieverence (in grn)?" << endl;
	cin >> Pay2;
	cout << "What is the cost of 1 sq metre of delieverence (in grn)?" << endl;
	cin >> Pay3;
	Estore PF1(Size, Workers);
	if (Size < Workers*2)
	{
		cout << "You can`t hold so many workers, the size of your store is too small" << endl;
		goto Start;
	}
	else
	{
		cout << "This is a main menu:" << endl;
	Menu:
		cout << "============================================================" << endl;
		cout << "what do you want to do with your electronics store?" << endl;
		cout << "1) Make a Delivery" << endl;
		cout << "2) Calculate the payment you have to pay each month (in grn)" << endl;
		cout << "3) Add Workers" << endl;
		cout << "4) Delete Workers" << endl;
		cout << "5) See the profit" << endl;
		cout << "6) Calculate the length between cities" << endl;
		cout << "7) See the value of maintance" << endl;
		cout << "8) See the value of resourses" << endl;
		cout << "9) See the Rating" << endl;
		cout << "10) Add regular customer" << endl;
		cout << "11) Rewrite list of the regular customers" << endl;
		cout << "12) See the list of regular customers" << endl;
		cout << "13) Add the information about a worker" << endl;
		cout << "14) See the list with the information about the workers" << endl;
		cout << "15) Delete data about the workers" << endl;
		cout << "16) Exit" << endl;
		cin >> Decision;
		if (Decision == 1)
		{
			double Weight, Size, Length;
			cout << "Enter the charachteristics of your package" << endl;
			cout << "Weight?" << endl;
			cin >> Weight;
			cout << "Size?" << endl;
			cin >> Size;
			cout << "How far are you from the deliever point?" << endl;
			cin >> Length;
			cout << "Your delievery is taken" << endl;
			PF1.AmountOfPaymentForDelieveries(Weight, Size, Length, Pay1, Pay2, Pay3);
			PF1.TimeOfDelievering(Weight, Size, Length);
			goto Menu;

		}
		if (Decision == 2)
		{

			PF1.AmountOfPaymentForWorkers(Workers);
			goto Menu;
		}
		if (Decision == 3)
		{
			PF1.AmountOfWorkersAdd(Workers);
			goto Menu;
		}
		if (Decision == 4)
		{
			PF1.AmountOfWorkersDelete(Workers);
			goto Menu;
		}
		if (Decision == 5)
		{
			PF1.Profit(Workers, Size);
			goto Menu;
		}
		if (Decision == 6)
		{
			PF1.Calculate();
			goto Menu;
		}
		if (Decision == 7)
		{
			PF1.Cleaning(Size);
			goto Menu;
		}
		if (Decision == 8)
		{
			PF1.Resources(Size, Workers);
			goto Menu;
		}
		if (Decision == 9)
		{
			Rating(Size, Workers, Pay1, Pay2, Pay3);
			goto Menu;
		}
		if (Decision == 10)
		{
			PF1.RegularVisitors();
			goto Menu;
		}
		if (Decision == 11)
		{
			PF1.ReWriteRegV();
			goto Menu;
		}
		if (Decision == 12)
		{
			PF1.PrintRegV();
			goto Menu;
		}
		if (Decision == 13)
		{
			Wrkr.RegWorker();
			goto Menu;
		}
		if (Decision == 14)
		{
			Wrkr.PrintWorkers();
			goto Menu;
		}
		if (Decision == 15)
		{
			Wrkr.DelInf();
			goto Menu;
		}
		if (Decision == 16)
		{
			cout << "Thanks for using, goodbye" << endl;
		}
		if (Decision > 16)
		{
			cout << "Error" << endl;
			goto Menu;
		}
	}
}