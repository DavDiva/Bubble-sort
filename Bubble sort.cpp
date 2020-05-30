#include <iostream>
using namespace std;

int main()
{
	const int m = 10;
	int j, s, i;
	int arr[m] = { 5, 19,27,3,8,1, 4, 1, 4, 11 };
	cout << "Before:\n";
	for (i = 0; i < m; i++)
	{
		cout << arr[i] << " ";
	}

	for (j = 1; j <= (m - 1); j++)
	{
		for (i=0; i < m-j; i++)
		{if (arr[i]>arr[i+1])
		{
			s = arr[i + 1];
			arr[i + 1] = arr[i];
			arr[i] = s;
		}
		}
	}
	cout << "\nAfter:\n";
	for (i = 0; i < m; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
   
}


