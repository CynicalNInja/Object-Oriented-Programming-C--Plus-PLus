//Lab_7.cpp
/***
* CSE 2010 Fall 2023
* Lab #{7}
* {isaac cruz} #{007964808}
* {12/7/2023}
*
* {Students will learn how to use generic programming via templates. They will expand
previous classes to have members that can hold and process through various data types. They
will learn the difference between implicit and explicit instantiations}
*
* {had a issue with getarray and another parft not being defined because i forget to replace int with t}
*
***/
#include <iostream>
#include "ArrayVec.h"
#include "DisplayArr.h"
using namespace std;
int main()
{
    // initialize arr
    const int CAPACITY = 10;
    double test_arr[CAPACITY];

    string data_type = "float";
    //initialize ArrayVec and DisplayArr
    DisplayArr<double> disp = DisplayArr<double>(data_type);
    ArrayVec<double> av = ArrayVec<double>();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenArr(test_arr, num_elem, range);

    // display contents
    int test_arr_size = av.getSize(test_arr, CAPACITY);
    cout << "Array Elements\n";
    disp.printArray(test_arr, test_arr_size);
    cout << "Array Memsize\n";
    disp.printMetaArray(test_arr, test_arr_size);
}
