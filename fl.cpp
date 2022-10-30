#include "class.hpp"
int main()
{
	if (autotest() == 0)
	{
		int* ch1;
		int* ch2;
		size_t n1, n2;
		cout << "Enter size 0f 1 number:";
		cin >> n1;
		if (n1 <= 0)
		{
			cout << "Wrong size" << endl;
			return 1;
		}
		ch1 = new int[n1];
		for (size_t i = 0; i < n1; i++)
		{
			cout << "Enter " << i + 1 << " element of number:";
			cin >> ch1[i];
			if (ch1[i] >= 10)
			{
				cout << "worng number" << endl;
				return 1;
			}
			else
			{
				if (i != 0)
				{
					if (ch1[i] < 0)
					{
						cout << "worng number" << endl;
						return 1;
					}
				}
			}
		}
		cout << "Enter size of 2 number:";
		cin >> n2;
		if (n2 <= 0)
		{
			cout << "Wrong size" << endl;
			return 1;
		}
		ch2 = new int[n2];
		for (size_t i = 0; i < n2; i++)
		{
			cout << "Enter " << i + 1 << " element of number:";
			cin >> ch2[i];
			if (ch2[i] >= 10)
			{
				cout << "worng number" << endl;
				return 1;
			}
			else
			{
				if (i != 0)
				{
					if (ch2[i] < 0)
					{
						cout << "wrong number" << endl;
						return 1;
					}
				}
			}
		}
		CHislo a(ch1, n1), b(ch2, n2);
		CHislo sum;
		sum = a + b;
		CHislo razn;
		razn = a - b;
		cout << "a+b = " << sum << endl;
		cout << "a - b = " << razn << endl;
		return 0;
	}
	else
	{
		return 1;
	}
}