/***************************************************************************
 * Name: Douglas Wendel												   *
 * Email: dpwendel@email.sc.edu										   *
 * Program Completion:below 							                    *
 * Function: To calculate the numbers a user enters, multiply division     *
 *     		addition and subtraction									   *
 * Completed: 10:50 AM Sept 10, 2019  									   *
 * Input: Input a mathmatical problem you want solved.  				   *
 * Output: The program will print the initial problem and solution         *
 *                                                                         *
 ***************************************************************************/
 
 /* Create a program that can act as if it is a calculator. It must be able to divide
 	add, subtract, and multiply. The console asks you what you want to calculate and if 
 	there is a / = divide, x = multiply, + = add, and - means subtraction. Then it must 
 	detect what you want to do and give out the correct answer.
 */
 
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std; //defines keywords / houses all keywords
 
 
 
 int main (int argc, char **argv)
{   	
	int num1, num2; 
	string yorn = "y";
	char symbol;

	
	while(yorn == "y"){ //this while loop will allow the code to ask the user wether or not they want to ask another
					   //question and if they do then it will restart the switch and the question. 
	    
	cout << "Enter your problem: "; //general question
	cin >> num1 >> symbol >> num2; //this stores the user input
	cout << num1 << symbol << num2 << " = "; //prints the answer
		
	switch(symbol) 
	{
		//this is the general mathmatical side of the program, based on the symbol the user puts in, 
		//it will figure out where it belongs and run its info
		case '+':
			cout << num1+num2;
			//this function adds the number 1 to the number 2
			break;
		case '-':
			cout << num1-num2;
			//this function subtracts the first number from the second number
			break;
		case '/':
			cout << num1/num2;
			//this function divides both numbers with eachother
			break;
		case '*':
			cout << num1*num2;
			//this function multiplys the two numbers
			break;
		case '%':
			cout << num1 % num2;
			//this function divides the two numbers and prints out the remainder
			break;
		default:
			cout << "invalid operator";
			break;
	}
	
	cout << "\nAnother question? (y/n)";
	cin >> yorn; //yorn == yes or no
	
	if(yorn == "n")
	{
		cout << "Goodbye\n";
		exit(0);
	
	}
	}
	
	
	return 0;
	
}
