#include <iostream>
using namespace std;
//zad1

#include <iostream>
using namespace std;


double fahrenheitToCelsius(double degrees)
{
	double celsius = (degrees - 32) * 5 / 9;
	return celsius;
}
int main ()
 {
	double fahrenheitDegrees;
	cin >> fahrenheitDegrees;
	double celsiusDegrees =
		fahrenheitToCelsius(fahrenheitDegrees);
	if (celsiusDegrees >= 37) cout << "You're ill";
}



