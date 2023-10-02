/***
 * CSE 2010 Fall 2023
 * Lab #{2}
 * {Isaac cruz} {007964808}
 * {9/27/2023}
 * 
 * {apply function prototypes that return different data types and objects or those that are void. They will implement a
mix of pass by value and pass by reference calls}
 * 
 * {Describe 1) what was most challenging 
 * 
 * getting github to work seen i came along with some issues installing it and pathing it
 * trying to solve these 2 errors 
 * 2) how you solved/overcame the problem OR the directions of how you PLAN to solve it} * 
 * 
 * rewatch video and look for important steps that i may have miss out 
 * havernt been able to solve the errors 
***/

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief power(): calculates and returns the base to the power of exponent
 * 
 * @param base int: base number that is positive
 * @param exponent int: exponent that is positive that the base is raised to
 * @return int 
 */
// write power function here

int power(int base,int exponent){
    int power_output = 1;
    for(int i = 0; i < exponent; i++){
        power_output *= base;
    }
    return power_output;
}



/**
 * @brief floorDivision(): calculates and returns the dividend / divisor using for loops
 * 
 * @param dividend int: whole number to be dividend that is positive
 * @param divisor int: whole number that is positive to divide the dividend by 
 * @return int 
 */
// write floorDivision function here

int floorDivision(int dividend, int divisor ){
    int floor_div_output = 0; 
    while (dividend - divisor >= 0) {
        dividend -= divisor; // dividend = dividend - divisor;
        floor_div_output += 1;
    }
    return floor_div_output;
}


/**
 * @brief modDivision(): returns the remainder from dividend / divisor
 * 
 * @param dividend int: whole number to be dividend that is positive
 * @param divisor int: whole number that is positive to divide the dividend by 
 * @return int 
 */
// write modDivision function here


int modDivision(int dividend, int divisor){
    int mod_output = dividend;
    while (mod_output - divisor >= 0){
        mod_output -= divisor; // dividend = dividend - divisor;
    }
    return mod_output;
}



/**
 * @brief print(): prints out the statement "Output of {operation} between {x} 
 *        and {y} is {output}"
 * 
 * @param operation string: which should be any of the following: power, floorDivision, 
 *                  modDivision
 * @param x int: first variable that is positive
 * @param y int: second variable that is positive
 * @param output int: output from conducting the operaiton
 */
// write print function here

void print(string operation, int x, int y, int output){
    cout << "Output of " << operation << "between " << x << " and " << \
    y << " is : " << output << endl;

}



/**
 * @brief op(): returns the name of the operation based on the following cases:
 *              1 : power
 *              2 : floorDivision 
 *              3 : modDivision
 *              All other cases: invalid
 *              This function supplies the operation to print()
 * @param selection int: ranging from 1 to 3 that specifies the operation. All other cases results
 *              in "invalid"
 * @return string 
 */
// write op function here

string operation(int selection){
    if (selection == 1){
        return "power";
    } else if (selection == 2){ 
        return "floorDivision";
    } else if (selection == 3) {
        return "modDivision";
    } else {
        return "invalid";
    }
 }







int main()
{   
    // test input for power
    int x = 2;
    int y = 5;

    int base = x;
    int exponent = y;
    // power 
    int power_output = power(base, exponent);
    // print
string op = operation (1) ;
print( op , power_output , base , exponent ) ;

    // test input for floor and modulos
    x = 65;
    y = 11;
    
    // floor division
    int dividend = x;
    int divisor = y;
    int floor_div_output = floorDivision(dividend, divisor); 
    //print
op = operation (2) ;
print( op , floor_div_output , dividend , divisor ) ;
    // reset test input for modulos division
    // for Section 5.2 where pass by reference is use, do NOT reset 
    // divend and divisor to x and y in order to get the example 
    dividend = x;
    divisor = y;
    // modulos division
    int mod_output = modDivision( dividend, divisor);
    //print
op = operation (3) ;
print( op , mod_output , dividend , divisor ) ;
}