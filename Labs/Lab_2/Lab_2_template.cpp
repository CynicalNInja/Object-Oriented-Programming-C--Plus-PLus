/***
 * CSE 2010 Fall 2023
 * Lab #{n}
 * {Student Name} {Coyote ID}
 * {Date}
 * 
 * {Description of lab AKA paraphrase "abstract" section from lab}
 * 
 * {Describe 1) what was most challenging and 2) how you solved/overcame the problem OR
 * the directions of how you PLAN to solve it}
 * 
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

/**
 * @brief floorDivision(): calculates and returns the dividend / divisor using for loops
 * 
 * @param dividend int: whole number to be dividend that is positive
 * @param divisor int: whole number that is positive to divide the dividend by 
 * @return int 
 */
// write floorDivision function here

/**
 * @brief modDivision(): returns the remainder from dividend / divisor
 * 
 * @param dividend int: whole number to be dividend that is positive
 * @param divisor int: whole number that is positive to divide the dividend by 
 * @return int 
 */
// write modDivision function here

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


int main()
{   
    // test input for power
    int x = 2;
    int y = 5;

    int base = x;
    int exponent = y;
    // power 
    int power_output = 1;
    for(int i = 0; i < exponent; i++){
        power_output *= base;
    }
    // print
    string operation = "power";
    cout << "Output of " << operation << " between " << base << " and " << \
    exponent <<  " is : " << power_output << endl;

    // test input for floor and modulos
    x = 65;
    y = 11;
    
    // floor division
    int dividend = x;
    int divisor = y;
    int floor_div_output = 0; 
    while (dividend - divisor >= 0) {
        dividend -= divisor; // dividend = dividend - divisor;
        floor_div_output += 1;
    }
    //print
    operation = "floorDivision";
    cout << "Output of " << operation << " between " << x << " and " << \
    y <<  " is : " << floor_div_output << endl;

    // reset test input for modulos division
    // for Section 5.2 where pass by reference is use, do NOT reset 
    // divend and divisor to x and y in order to get the example 
    dividend = x;
    divisor = y;
    // modulos division
    int mod_output = dividend;
    while (mod_output - divisor >= 0) {
        mod_output -= divisor; // dividend = dividend - divisor;
    }
    //print
    operation = "modDivision";
    cout << "Output of " << operation << " between " << x << " and " << \
    y <<  " is : " << mod_output << endl;
}