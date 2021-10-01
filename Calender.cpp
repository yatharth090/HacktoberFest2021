#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	int year, start_day, type, n_days, month(1);
	cout << "Enter the year you want the program to display. ";
	cin >> year;
	if ((year%400==0) || ((year%100==0) ^ (year%4==0)))
	{
		type = 1;
		cout << "\nThe year is leap year.";
	}
	else
	{
		type = 0;
		cout << "\nThe year is odd year.";
	}
	cout << "\nEnter the first day of January: 1 for Sunday, 2 for Monday, etc. ";
	cin >> start_day;
	while (start_day < 0 || start_day > 12)
	{
		cout << "\nThe number entered is invalid.\nPlease enter a number between 1 and 7. ";
		cin >> start_day;
	}
	
	while (month <= 12)
	{
	switch (month)
	{
		case 1:
			cout << "\n\nJanuary\n" << endl;
			n_days = 31;
			break;
		case 2:
			cout << "\n\nFebruary\n" << endl;
			if (type = 1)
			{
				n_days = 29;
			}
			else
			{
				n_days = 28;
			}
			break;
		case 3:
			cout << "\n\nMarch\n" << endl;
			n_days = 31;
			break;
		case 4:
			cout << "\n\nApril\n" << endl;
			n_days = 30;
			break;
		case 5:
			cout << "\n\nMay\n" << endl;
			n_days = 31;
			break;
		case 6:
			cout << "\n\nJune\n" << endl;
			n_days = 30;
			break;
		case 7:
			cout << "\n\nJuly\n" << endl;
			n_days = 31;
			break;
		case 8:
			cout << "\n\nAugust\n" << endl;
			n_days = 31;
			break;
		case 9:
			cout << "\n\nSeptember\n" << endl;
			n_days = 30;
			break;
		case 10:
			cout << "\n\nOctober" << endl;
			n_days = 31;
			break;
		case 11:
			cout << "\n\nNovember" << endl;
			n_days = 30;
			break;
		case 12:
			cout << "\n\nDecember\n" << endl;
			n_days = 31;
			break;
		default:
			;
	}
	
	cout << endl << "Sun\tMon\tTue\tWed\tThr\tFri\tSat\n"; 
	for (int i = 1; i < start_day; i++) 
	{ 
		cout << " \t"; 
	} 
	for (int j = 1; j <= n_days; j++) 
	{ 
	if (((j + start_day - 2) % 7 == 0) && (j != 1)) 
		cout << endl; 
		cout << j  << "\t"; 
	} 
	cout << endl << endl; 

	month ++;

	}


	return 0;
}
