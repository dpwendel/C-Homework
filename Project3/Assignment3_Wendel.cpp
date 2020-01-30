/***************************************************************************
 * Name: Douglas Wendel
 * 
 * Completed October 3rd, 2019, 7:00 pm
 * 
 * Function: Program allows a user to insert numbers into an array and control what goes on within it. 
 * 
 * Input: general numerical input  
 * 
 * Output:whichever setting you wish to go throughout the code. wether it is find, clear, delete, insert, etc  
 * 
 * Additional Comments: 
 *                                
 *                                                   
 ***************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * Add your prototypes here:
 * */


/* 
 * DO NOT CHANGE THE MAIN!
 * You may comment portions out to test, but when you turn your 
 * code in it must have everything uncommented.
 * 
 * */
int main (int argc, char **argv)
{ 
	int size(0);
	cout << "Please enter the size of your array: ";
	cin >> size;
	
	double *arr;
	arr = new double[size];
	init(arr,size);
	cout << "The original array: ";
	print(arr,size);
	cout << "Size: " << size << endl;
	
	insert(10, 1, arr, size);
	insert(1, 9.3, arr, size);
	cout << "The new array: ";
	print(arr,size);
	cout << "Size: " << size << endl;
	
	remove(10, arr, size); 
	remove(5, arr, size);
	cout << "The new array: ";
	print(arr,size);
	cout << "Size: " << size << endl;
	
	cout << "The element at position 2 is: " << get(2,arr,size) << endl;
	cout << "The element at position 10 is: " << get(10,arr,size) << endl;
	int ans = find(9.3,arr,size); 
	
	if(ans != -1) cout << "9.3 was found at position: " << ans << endl;
	else cout << "9.3 was not found. " << endl;
	
	int ans2 = find(999,arr,size);
	if(ans2 != -1) cout << "999 was found at position: " << ans2 << endl;
	else cout << "999 was not found. " << endl;
	
	double *arr2 = new double[size];
	for(int i = 0; i < size; i++)
	{
		arr2[i] = 0;
	} 
	print(arr2,size);
	bool equal = equals(arr,size,arr2,size);
	
	if(equal) cout << "The arr and arr2 are equal." << endl;
	else cout << "The arr and arr2 are not equal." << endl;
	
	equal = equals(arr,size,arr,size);
	
	if(equal) cout << "The arr and arr are equal." << endl;
	else cout << "The arr and arr are not equal." << endl;
	
	delete [] arr2;
	delete [] arr;  
	
	return 0;
}

 /*
  * Description: what does this function do (or attempt to do)
  * 
  * Input:  int n    - size of the array
  * 	    int *arr - pointer array of size n
  * 	    int num  - integer that the function is searching for in arr
  * 
  * Output: int 	 - index of the array at which num is found. Returns
  * 				   (-1) if not found and gives user an error. 
  * 
  * Addtional notes:
  * 
  * */
  
  
void insert(int index, double num, double *&arr, int &size)
{
	
	if(num > index)
	{
		cout << "Error.";
	}
	else
	{

		double *tempArr = new double[size];
		for(int i = 0; i < size; i++)
		{
			tempArr[i] = arr[i];
			arr = tempArr;
	
			for(index == size; index > num; index--);
			{
				tempArr[i] = tempArr[i-1];
			}
			arr[i] = num;
			delete[] tempArr;
		}
		

		size++;

	}

	
}

void remove(int index, double *&arr, int &size)
{
	if(size > index)
	{
		cout << "Error.";
	}
	else
	{
		
		double *tempArr = new double[size];		
		for(int i = 0; i < size; i++)
		{
			*tempArr = arr[i];
			tempArr = arr;
			for(index == size; index > size; index++)
			{
				tempArr[i] = temparr[i+1];
			}
			
			
			delete[] tempArr; 
		
		}
		size--;

	}
	
}

double get(int index, double *arr, int size)
{
	//should check if index is out of bounds of the array	
	
	for(int i = 0; i < size; i++)
	{
		if(arr[index] != arr[i])
		{
			cout << "Error ";
			break;
		}
		else
		{
			return arr[index];
		}
	}
	
}


void clear(double *&arr, int &size)
{
	delete[] arr; //deletes the entire array
	arr = new double[0]; // recreates the array and sets the size to 0
	
}


int find(double num, double *arr, int size)
{
	int d;
	cout << "What number are you looking for";
	cin >> d;
	
	for(int i =0; i <size; i++)
	{
		if(d == arr[i])
			return i;
			
	}
	
	
}

bool equals(double *arr1, int size1, double *arr2, int size2)
{
	if (size1 != size2)
	{
		return false;
	}
	
	//this sorts the arrays
	
	for(int i = 0; i < size1; i++)
	{
		if(arr1[i] != arr2[i])
		{
			return false;
		}
	}
	return true; //only if all elements are the same
	//are these equaling size or elements in the array
	
		

}

void init(double *arr, int size)
{
	int a;
	cout << "How big is your array" << endl;
	cin >> a;
	
	for(int i = 0; i < a; i++)
	{
		//
	}
		
}



void print(double *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	
}



