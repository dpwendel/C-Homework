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
#include "Calculator.h"
using namespace std;

////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
//////////       Default Constructor      //////////////
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////

Calculator::Calculator() //default
{
    expression = "0.0\n";
    cleared = true;
    result = 0.0;
    //this is the default constructor
}

////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
//////////      Alternate Constructor     //////////////
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////

Calculator::Calculator(double num) //alternate
{
    expression = "\nnum";
    result = num;
    cleared = true;
 //this is the alternate constructor
}

////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
//////////              Methods           //////////////
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////

double Calculator::add(double num) 
{
/*This function adds numbers inputted through the main
  method and then returns the result and expression. numbers
  are inputted into this function.
*/

    cout << "\nExpression Evaluated: \n";
    expression = "(" + to_string(result) + expression + "+" + to_string(num) + " ) ";
    cleared = true;

    result += num;
    return result;
}

double Calculator::subtract(double num)
{
/* This function subtracts numbers through the main method and then
   returns the result and the expression. numbers are inputted
into this function from the main method
*/
    cout << "\nExpression Evaluated: \n";
    expression = "( " + to_string(result) + expression + " ) - " + to_string(num) + " ) = \n";
    cleared = true;

    result -= num;
    return result;

}

double Calculator::multiply(double num)//COMPLETE
{
/* this function multiplys numbers inputted in the main method, the number
that was just given as the result. it then prints the expression and the result
*/
    cout << "\nExpression Evaluated: \n";
    expression = "( " + to_string(result) + expression + " ) x " + to_string(num)+ " ) \n";
    cleared = true;

    result = result*num;
    return result;

}

double Calculator::divide(double num) //I THINK COMPLETE
{
/* this function divides numbers inputted that are put into the main method
it then prints the expression and the result.
*/
    cout << "\nExpression Evaluated: \n";
    expression = "( " +to_string(result) + expression + " ) / " + to_string(num) + ")\n";
    cleared = true;

    if(num == 0 || result == 0)
    {
        cout << "Invalid Divisor, ERROR!";
        expression = "Unidentified";
        result = 0;
    }       

    else    
    {
        result = result/num;
         return result;
    }
}


double Calculator::power(int exp) //multiplys a number to the power of a number (exponent)
{
/* this method multiplys a number to its exponent. ie. 4^2. this multiplys 4
two times. it then prints the expression and result.
*/
    if(exp == 0)
    {
     exp = 1.0;
    }
    
    for(int i=1; i < exp; i++)
    {
    result *= result;
    }
    
    cout << "\nExpression Evaluated: \n";
    expression = "( " + to_string(result) + expression + " ) , " + to_string(exp)+ " )\n";
    result = result;
    cleared = true;
}

double Calculator::power(double num, double exp)
{
/* this method is very aline to the previous method, it sets the num to the exponent power
and expresses and returns the results.
*/
 
    if(exp == 0){
            exp = 1.0;
        }
    if(cleared == true)
    {
        for(int i=0; i < exp; i++)
        {
             result *= result;
        }
    }
    else //if the cleared == false then it prints the error and sets the result to the previosu result
    {
         cout << "Error, cannot call power (double, int) when not in cleared state.";
         result = num;
    }
    cout << "\nExpression Evaluated: \n";
    expression = "( " + to_string(result) + expression + " ) , " + to_string(num)+ " )\n";
    result = num;
    cleared = true;
}











void Calculator::clear() //COMPLETE
{
// this clears the current expression and result

    expression = "0.0";
    result = 0.0;
    cleared = true;
}

void Calculator::print()
{
//this prints the current expression and result. 
    cout << expression;
    cout << "\nResult: " << result << " \n";
}



