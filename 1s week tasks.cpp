
#include <iostream>
using namespace std;

//zad 1
int main()
{
#include <iostream>
	using namespace std;
	//zad 1
	int main()
	{
		cout << "Enter a date (day month year): ";

		int day, month, year;
		cin >> day >> month >> year;

		bool valid = true;

		if (month < 1 || month > 12 || day < 1)
			valid = false;
		else {
			bool leap = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);

			int daysInMonth;
			switch (month) {
			case 4:
			case 6:
			case 9:
			case 11: daysInMonth = 30; break;
			case 2: // daysInMonth = 28;
				// if (leap)
				//    daysInMonth = 29;
				daysInMonth = leap ? 29 : 28;
				break;
			default: daysInMonth = 31; break;
			}

			if (day > daysInMonth)
				valid = false;
		}

		cout << (valid ? "Valid date" : "Invalid date") << endl;


	}
#include <iostream>
	using namespace std;
	//zad 2
	int main()
	{

		int month;
		cout << "Enter a month form 1 to 12" << endl;
		cin >> month;


		switch (month)
		{
		case 1: cout << "January"; break;
		case 2: cout << "February"; break;
		case 3: cout << "March"; break;
		case 4:cout << "April"; break;
		case 5:cout << "May"; break;
		case 6: cout << "June"; break;
		case 7: cout << "July"; break;
		case 8: cout << "August"; break;
		case 9:cout << "September"; break;
		case 10:cout << "Octomber"; break;
		case 11:cout << "November"; break;
		case 12:cout << "December;break";

			break;
		}
		if (month = 1 && month <= 3) {
			cout << "it s winter" << endl;
		}
		else if (month = 4 && month <= 6)
		{
			cout << "it s spring " << endl;
		}
		else if (month = 7 && month <= 9) {
			cout << "it s summer" << endl;
		}
		else if (month = 10 && month <= 12) {
			cout << "it s auntumn" << endl;

		}
	}
#include <iostream>
	using namespace std;
	//zad 3
	int main()
	{
		int a, b, x;
		cin >> a >> b >> x;
		int sum = a * x + b;
		cout << sum << endl;
		if (a != 0 && b != 0 && x != 0)
		{
			cout << "u have current bumber of roots" << endl;
		}
		else if (
			a == 0 && b == 0 && x == 0
			) {
			cout << "u have inf amonut of roots" << endl;
		}
	}
#include <iostream>
	using namespace std;
	//zad 5
	int main()
	{
		int month, year, days;
		cout << "Enter a month form 1 to 12" << endl;
		cin >> month >> year >> days;


		switch (month)
		{

		case 2: int days = 28; break;

		case 4:int days = 30; break;

		case 6: int days = 30; break;


		case 9:int days = 30; break;

		case 11:int days = 30;

			break;
		default: days = 31;
		}

	}
	//zad6
	//zad 3
	int main()
	{
		unsigned int money, usbports, ram, ssd;
		cin >> money >> usbports >> ram >> ssd;
		bool Tishkoisbuyin = true;
		if (
			money < 1500 && money > 1000
			) {
			cout << "Toshko is  buyin" << endl;
		}
		if (usbports == 3)
		{
			cout << "Toshkoisbuyin" << endl;
		}
		else if (
			usbports <= 3
			)
		{
			cout << "toshkoisnotbuyin" << endl;
		}
	}

}





