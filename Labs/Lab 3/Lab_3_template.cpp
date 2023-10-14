/***
 * CSE 2010 Fall 2023
 * Lab #{3}
 * {isaac cruz} #{007964808}
 * {10/13/2023}
 *
 * {Students will create their own class object. They will 1) create their class interface within
a header file, 2) implement their member functions within a .cpp file, and 3) test their class
within a main file. They will learn about private variables and ways to manipulate them
using mutator functions and access them via accessor functions with respect to scope. Lastly,
students will learn to link their files together.}
 *
 * {Describe 1) what was most challenging and 2) how you solved/overcame the problem OR
 * the directions of how you PLAN to solve it}
 *
***/

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

/**
 * The structure of the files are as follows:
 * Lab_3_template.cpp -> calls the class and is considered the "main" program
 * Person.cpp -> implements and contains the functionalities of the class
 * Person.h -> contains the interface, declarations of the class, and  includes 
 * the private variables and member functions
 */






/**
 *  Following the examples below, create your own class objects that calls ALL
 *  the functions. 
 * 
 *  Initialize your objects of type Person.
 *  Use the mutator functions to modify the private variables of your Person.
 *  Display the variables associated with your Person using the accessor functions
 *  and cout or print.
 */

int main()
{
    Person bob = Person("Bob", 100, "retired", true);
    cout << bob.getName() << endl;
    Person unknown = Person(); //Person unknown; // 
    cout << unknown.getName() << endl;
}

