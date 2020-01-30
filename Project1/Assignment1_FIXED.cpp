#include <cstdlib>
#include <iostream>
#include <string>

using namespace std; //defines keywords / houses all keywords
    int add(int num1, int num2);
	int subtract(int num1, int num2);
	int modulo(int num1, int num2); 
	int divide(int num1, int num2);
	int multiply(int num1, int num2); 
	
int main (int argc, char **argv)
{  
	int num1, num2; 
	string yorn = "y";
	char symbol;

	
	while(yorn == "y"){ //this while loop will allow the code to ask the user wether or not they want to ask another
					   //question and if they do then it will restart the switch and the question. 
	    
	cout << "\nEnter your problem: "; //general question
	cin >> num1 >> symbol >> num2; //this stores the user input	
	if(symbol == '+')
	{
	    add(num1,num2);
	}
	if(symbol == '-')
	{
		subtract(num1, num2);
	}
	if(symbol == '*')
	{
		multiply(num1, num2);
	}
	if(symbol == '/')
	{
		divide(num1, num2);
	}
	if(symbol == '%')
	{
	    modulo(num1, num2);
	}
	

	//cout << num1 << symbol << num2 << " = " << answer; //prints the answer
    cout << "\nAnother question? (y/n)";
	cin >> yorn; //yorn == yes or no
	
	if(yorn == "n")
	{
		cout << "Goodbye\n";
		exit(0);
	
	}


	}
}

	int add(int num1, int num2)
	{
		int answer = num1 + num2;
		cout << num1 << "+" << num2 << "="<< answer;
		return 0;
	}
	
	int subtract(int num1, int num2)
	{
		int answer = num1-num2;
		cout << num1 << "-" << num2 << "="<< answer;
        return 0;
	}
	
	int multiply(int num1, int num2)
	{
		int answer = num1*num2;
		cout << num1 << "*" << num2 << "="<< answer;
        return 0;
	}
	
	int divide(int num1, int num2)
	{
		int answer = num1/num2;
		cout << num1 << "/" << num2 << "="<< answer;
        return 0;
	}
	
	int modulo(int num1, int num2)
	{
		int answer = num1%num2;
		cout << num1 << "%" << num2 << "="<< answer;
		return 0;

	}
