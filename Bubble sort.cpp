#include <iostream>
using namespace std;
void srt();
int main()
{
    srt();
	srt();
	srt();
	return 0;

}
void srt()
{const int m = 10;
	int j, s, i;
	int arr[m];
	std::cout << "Before:\n";
	for (i = 0; i < m; i++)
	{
		arr[i] = rand() % 20;
		std::cout << arr[i] << " ";
	}

	for (j = 1; j <= (m - 1); j++)
	{
		for (i = 0; i < m - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				s = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = s;
			}
		}
	}
	std::cout << "\nThe smallest number:\n";
	//for (i = 0; i < m; i++)
	//{
		std::cout << arr[0] << " \n";
	//}
}



