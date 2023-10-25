#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	int u = 0;
	int tabAA[10];
	int* tabBB = new int[u];
	int j = 0;  
	cout << "podaj 10 liczb" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		tabAA[i] = x;
	}

	for (int i = 0; i < 10; i++)
	{		
		if (tabAA[i] < 0)
		{			
			tabBB[j] = tabAA[i];
			j++;
			u++;
		}
	}
	cout << "Ilosc liczb ujemncyh: " << u << endl;
	cout << "Ilosc liczb pominietych:" << 10 - u << endl;
	cout << "Liczby ujemne: " << endl;

	for (int i = 0; i < u; i++)
	{
		cout << tabBB[i] << " ";
	}

	return 0;
}

