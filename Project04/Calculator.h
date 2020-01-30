/********************************************************************************
 * Name: Douglas Wendel                                                         *
 * Email: dpwendel@email.sc.edu                                                 *
 * Function: Account object                                                     *
 * Completed: 16 October 2019 @ 11:10 AM                                        *
 * Description: Program calculates as if it were a calculator. Input            *
 * numbers to your liking. Your options: Addition, Subtraction, Multiplication, *
 * Division, and Calculating Numbers to a power                                 *
 ********************************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Calculator{
	public:
        
        Calculator(); //defeut constructor
        Calculator(double num); //alternate constructor

        //Functions

        double add(double num);
        double subtract(double num);
        double multiply(double num);
        double divide(double num);
        double power(int exp);
        double power(double num, double exp);
        void clear();
        void print();
        
        //Member Varaibles

        private:
            string expression;
            double result;
            bool cleared;

        //void setResult(double);
        //void setExpression(string);
        //void setCleared(boolean);
		
	
};


//string += to_string() - to do the expression in the calculator.cpp file
//to compile the entire thing in the folder is g++ *.cpp