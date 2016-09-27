#ifndef _FASTSORT_H_
#define _FASTSORT_H_

namespace FS
{
//#ifdef __cplusplus    //__cplusplus是双下划线
//	extern "C" 
//	{
		//This is the function encapsulation of fast sorting algorithm(FSA)
		//Data swap function
	inline void swap(int &a, int &b)
	{
		int tmp = b;
		b = a;
		a = tmp;
	}
	//Data partition function
	int partition(int arr[], int nLow, int nHigh);
	//Fast sort
	void FastSort(int arr[], int nLow, int nHigh);
//	}
}



#endif