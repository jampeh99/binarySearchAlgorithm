//A C++ program that uses the binary sort algorithm to sort numbers in an array

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int arraySize, numArray[arraySize], i, mid, first, last, num;
	bool flag = 0;
	cout << "Enter the array size: ";
	cin >> arraySize;
	
	//Entering the values in the array
	for(i=0; i<arraySize; i++)
	{
		cout << "numArray[" << i << "]: ";
		cin >> numArray[i];
	}
	
	cout << "Enter search number: ";
	cin >> num;
	first = 0;
	last = arraySize - 1;
	
	while(first<=last)
	{
		mid = (first + last) / 2;
		if (numArray[mid] == num) 
			flag = 1;
		else if (numArray[mid] > num)
			last = mid + 1;
		else
			first = mid -1;
		
		if (flag == 1)
			cout << num << " has been found...";
		else
		{
			cout << num << " was not found.";
		}
		getch();
	
	}
}
