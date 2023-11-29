
#include <iostream>
using namespace std;
//zad
int main()
{


	int temp_number;
	int size_of_sequence;
	cin >> size_of_sequence;
	for (int i = 0; i < size_of_sequence; i++)
	{
		cin >> temp_number;
		if (temp_number == 7)
		{
			cout << "You're lucky! " << endl;
			break;
		}
	}
#include <iostream>
	using namespace std;

	int main()
	{

		int temp_number;
		int counter = 0;

		for (int i = 0; i < 10; i++)
		{
			cin >> temp_number;
			if (temp_number % 2 == 0)
				continue;
			counter++;
		}

		cout << "Odd numbers are: " << counter << endl;

		return 0;
	}
	//zad 3
	{
		int n;
		cin >> n;
		for (size_t i = 0; i < n; i)
		{
			cout << n-- << endl;
		}

	}
	// zad 4
	{
		int i = 0;
		int n;
		cin >> n;

		for (i = 0; i < n; i++)
		{
			cout << i * 2 + i * 3 << endl;

		}
		return 0;
	}
	// zad5 
	int main()
	{
		int a, b;
		cin >> a >> b;
		for (
			a < 0; a < b; a--
			) {
			cout << "a is greater " << endl;
		}
		for (b < 0; b < a; b--)
		{
			cout << "b is greaer " << endl;
		}
		// zad6
		int main()
		{
			int a, b;
			cin >> a >> b;

			for (a < 0, a < b; a++;) {
				cout << max(a, b) << endl;
			}

			for (b < 0; b < a; b++)
			{
				cout << min(a, b) << endl;
			}


		}


}