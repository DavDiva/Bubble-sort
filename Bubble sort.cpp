#include <iostream>
using namespace std;

int main()
{
	const int m = 10;
	int arr[m] = { 5, 19,27,3,8,1, 4, 1, 4, 11 };
	cout << "Before:\n" << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << arr[5] << " " << arr[6] << " " << arr[7] << " " << arr[8] << " " << arr[9]  << endl;
	int j, s, i;
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
	cout <<  arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << " " << arr[5] << " " << arr[6] << " " << arr[7] << " " << arr[8] << " " << arr[9] << endl;
	return 0;
   
}


