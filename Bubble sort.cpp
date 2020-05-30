#include <iostream>
using namespace std;

int main()
{
	const int m = 10;
	int j, s, i;
	int arr[m];
	cout << "Before:\n";
	for (i=0; i<m; i++)
	{
		arr[i] = rand() % 20;
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
	cout << "\nThe biggest number:\n";
	//for (i = 0; i < m; i++)
	//{
		cout << arr[9] << " ";
	//}
	cout << "\n";
	return 0;
   
}


