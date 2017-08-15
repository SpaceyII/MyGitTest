#include <iostream>
#include "FastSort.h"
#include "FastSort2.h"

#include <string>
#include <vector>
#include <list>
#include <deque>


using namespace std;
using namespace FS;
using namespace FS2;

#define ARR_SIZE 7

int main(int argc, char* argv[])
{
	//int arr[5] = { 3, 2, 9, 8, 6 };
	int arr[ARR_SIZE] = { 4, 2, 3, 6, 5, 9, 7};

	cout << "The array is: " << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << '\t';
	}
	cout << '\n' << endl;

	FastSort(arr, 0, sizeof(arr) / sizeof(int) - 1);
	//partition(arr, 0, 4);

	cout << "\nAfter FSA, the array is: " << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;

	cout << "_________________________________________________" << endl;
	
	int arr2[ARR_SIZE] = { 4, 2, 3, 6, 5, 9, 7 };
	int length = 0;
	FastSort2(arr2, 0, MAX_SIZE - 1);
	
	cout << endl;
	int p[MAX_SIZE] = {0};
	GetChildSet(p, arr2, MAX_SIZE, length);

	for (int i = 0; i < length; i++)
		cout << p[i] << endl;

	cout << "_________________________________________________" << endl;
	string str("473993A.101");
	if (std::string::npos != str.find("."))
	{
		str = str.substr(0, str.find("."));
	}
	string str2(str, 3);

	cout << "String is " << str << "String2 is " << str2 << endl;

	vector<int> ivec(10);
	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
	{
		cout << "The index of iterator is " << *iter << endl;
		*iter = static_cast<int>(iter - ivec.begin());
		cout << "The index of iterator is xx \t and the value of this node is " << *iter << endl;
	}

	vector<int>::iterator mid1 = ivec.begin() + ivec.size() / 2;
//	vector<int>::iterator mid2 = (ivec.begin() + ivec.end()) / 2; //error!!! Two pointers would cause failure.
	cout << "mid1 = " << *mid1 << endl;
        
	cout << "Below is another function. TBD~" << endl;
	return 0;
}
