//SYS LIB
#include <iostream>

//User defined LIB
#include "FastSort.h"

using namespace std;

namespace FS
{

#ifdef _DEBUG
	extern int nstep = 1;
	int arr_size = 7;
#endif

	//This is the function encapsulation of fast sorting algorithm(FSA)
/*	void swap(int &a, int &b)
	{
		int tmp = b;
		b = a;
		a = tmp;
	}
*/
	int partition(int arr[], int nLow, int nHigh)
	{
		int nTmp = arr[nHigh];     //The first one or the last one is OK 
		int i = nLow, j = nLow - 1;

		//int nTmp = arr[nLow];     //The first one version 
		//int i = nLow, j = nLow - 1;


		for (; i < nHigh; i++)
		{
			if (arr[i] >= nTmp)    //The swith of grading(<=) or degrading(>=)
			{
				j++;
				if (i != j)
				{
					swap(arr[i], arr[j]);
				}
			}
		}

		swap(arr[j + 1], arr[nHigh]);

		return j + 1;
	}

	void FastSort(int arr[], int nLow, int nHigh)
	{
#ifdef _DEBUG
		cout << "step:"<< nstep <<"  Call regression function: FastSort(arr, " << nLow << ", " << nHigh << ") " << '\n';
		for (int k = 0; k < arr_size; k++)//for (int k = 0; k < nHigh; k++)
		{
			cout << arr[k] << '\t';
		}
		cout << endl;
		nstep++;
#endif		

		if (nLow < nHigh)
		{
			int nIndex = partition(arr, nLow, nHigh);

			FastSort(arr, nLow, nIndex - 1);
			FastSort(arr, nIndex + 1, nHigh);
		}

		return;
	}

}