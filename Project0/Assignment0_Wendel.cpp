/***************************************************************************
 * Name: Douglas Wendel													   *
 * Email: dpwendel@email.sc.edu											   *
 * Program Completion: Aug 28,2019 @ 9:15 PM							   *
 * Function: Console asks for the first name, last name, and command.      *
 *  based on what the user inputs as a command there are two separate      *
 *  print sentences.													   *
 * Input: First Name, Last name, A or B (capital letters)				   *
 * Output: First Name Last Name, 10 9 8 7 6 5 4 3 2 1	                   *
 *                                                                         *
 ***************************************************************************/
 
#include <cstdlib>
#include <iostream>
#include <string>

 using namespace std; //defines keywords / houses all keywords
 
 int main (int argc, char **argv)
{   	
	//holds the user inputs
	//a = first name, b = last name, answer = command command was changed to answer
	string a, b, answer;
	
	//stores the first name the user inputs
	cout << "What is your first name?" << endl;
	cin >> a;
	
	//stores the last name the user inputs
	cout << "What is your last name?" << endl;
	cin >> b;
	
	//stores the command the user inputs
	cout << " What is your command (A or B) " << endl;
	cin >> answer;
	
	

	
	if(answer == "A")
	{
	cout << " Hello, " << a << " " << b << endl;
	}
	if(answer == "B")
	{
	for(int i=10; i>0; i--)
	{
	cout << i << endl;
	}
	cout << "Goodbye!" << endl;
	}


}




