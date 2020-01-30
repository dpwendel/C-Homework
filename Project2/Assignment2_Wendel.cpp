/***************************************************************************
 * Name: Douglas Wendel												   *
 * Email: dpwendel@email.sc.edu										   *
 * Program Completion:	 							                    *
 * Function: To calculate the numbers a user enters, multiply division     *
 *     		addition and subtraction									   *
 * Completed: 					  									   *
 * Input: Input numbers to be sorted in an array.  				       *
 * Output:Your array before sorting and your array after sorting	       *
 *                                                                         *
 ***************************************************************************/
 
 
 /* I waited until the last minute and ended up getting insanely aggrovated at this program
    i apologize. I was able to get the program to compile but for some reason every time i 
    tried inserting something into the array it wouldnt run and i tried multiple different
    things. I'll be sure to do this ahead of time and ask you questions next time i need help.
    */
 
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std; //defines keywords / houses all keywords
 
 
void bubbleSort(int arr[], int size);
void insertionSort(int arr[], int size);
int search(int arr[], int size, int element);
void readData(int arr[], int size);
void printData(int arr[], int size);


int main(int argc, char **argv)
{	
	cout << "Testing insertion sort: " << endl;
	int arr[10];
	readData(arr, 10);
	cout << "Array before sorting: " << endl; 
	printData(arr,10);
	
	bubbleSort(arr,10);
	//insertionSort(arr,10);
	
	cout << "Array after sorting: " << endl; 
	printData(arr,10);
	
}

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

void bubbleSort(int arr[], int size)
{
	 for(int i = 0; i < size-2; i++)
	 {
       for(int j=0; j < size-2; j++)
       {
         if(arr[j] > arr[(j+1)])
           swap(arr[j], arr[j+1]);
       }
     }
}

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

/*void insertionSort(int arr[], int size)
{
    for(int i = 1; i <size;i++)
    {
    		int j = size;
    		
    		while(size >= 0 && arr[j] > size)
    		{
    			arr[j+1] = arr[j];
    			j = j-1;
    		}
    }
}
*/
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

int search(int arr[],int size, int element)
{
	for(int i = 0; i<size-1; i++)
	{
		if(arr[i] == element)
		{
			return i;
		}
	}
	return -1; 
}
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

void readData(int arr[], int size)
{	
	for(int i = 0; i < 10; i++)
	{
		//cout << "Enter element "<< arr[i] << endl;
		//cin << arr[];
	}
	
	
	for(int i = 0; i>size-1; i++)
	{
		arr[i] = i;
	}

}

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

void printData(int arr[], int size)
{
	for(int i = 0; i<0; i++)
	{
		cout << arr[i];	
	}	
}
