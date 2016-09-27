//SYS LIB
#include <iostream>

//User defined LIB
#include "FastSort2.h"

using namespace std;

namespace FS2
{
	void FastSort2(int arr[], int left, int right)
	{
#ifdef _DEBUG
		cout << "Call regression function: FastSort2(arr, " << left << ", " << right << ") " << '\n';
		for (int k = 0; k < MAX_SIZE; k++)//for (int k = 0; k < nHigh; k++)
		{
			cout << arr[k] << '\t';
		}
		cout << endl;
#endif	

		if (left < right)
		{
			int i = left, j = right;
			int temp = arr[left];

			while (i < j)
			{
				while (j > i && arr[j] < temp)
					j--;
				arr[i] = arr[j];
				while (j > i && arr[i] >= temp)
					i++;
				arr[j] = arr[i];
			}

			arr[i] = temp;
			FastSort2(arr, left, i - 1);
			FastSort2(arr, i + 1, right);
		}
	}

	void GetChildSet(int arr[], int p[], int n, int& length)
	{
		length = 0;
		int i, j, count = 0;
		int temp[MAX_SIZE] = { 0 };

		for (j = 0; j < n; j++)
		{
			if (arr[j] == arr[j + 1])
			{
				temp[j + 1] = 1;
				count++;
			}
		}

		for (i = 0, j = 0; i < n, j < n - count; i++)
		{
			if (0 == temp[i])
			{
				p[j] = arr[i];
				j++;
			}
		}

		length = n - count;
	}

}