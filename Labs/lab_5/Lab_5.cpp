/***
 * CSE 2010 Fall 2023
 * Lab #{5}
 * {isaac cruz} #{007964808}
 * {11/17/2023}
 *
 * {Students will learn how to iterate through arrays and/or vectors to search for elements.
They will monitor the computation time and graph their findings. Students will analyze the
Big-O time in order to benchmark their search algorithms}
 *
 * {bin run not being define so going to monday extra credbit lab to find how out to include it}
 *
***/

#include <iostream>
#include "SearchAnalysis.h"

using namespace std;

int main()
{  
    // Create arr of various n
    const int ITER_NUM_SIZES = 10;
    int arr_n[ITER_NUM_SIZES]=   {10, 100, 500, 1000, 5000, 10000, \
                                50000, 100000, 200000, 500000};


    for (int i = 0; i < ITER_NUM_SIZES; i++) {
        arr_n[i] *= 2;
    } 
    // use this to set the range of values to generate to be from 0 to 999 (1000-1)
    int exclusive_range = 1000; 
    // look for the number 25
    int elem = 25;

    // create vector of runs for iterative search
    vector<double>iter_run;
    SearchAnalysis sa = SearchAnalysis();

    //create a for loop to go through all the element sizes
    for(int i = 0; i < ITER_NUM_SIZES; i++) {
        // create sa with vectors of up to arr_n[i] elements
        SearchAnalysis sa = SearchAnalysis(arr_n[i], exclusive_range);

        // record how long iterativeSearch runs for and append the time to iter_run
        double elapsed_time = sa.runTime(true, elem);
        iter_run.push_back(elapsed_time);
    }
    
    // save the times under BigO_iterative.csv
    string filename = "BigO_iterative.csv";
    sa.writeToFile(filename, iter_run, arr_n);

    /* TO DO: Implement the above code but for binarySearch. This time run binarySearch
    along arr_n2 elements.
    
    Take both csv's for iterativeSearch and binarySearch and graph them. 
     
    Describe the relationship between execution time and the size of the elements for iterative search.
    Can you guess what is the time complexity for iterative search? Is it linear O(n), 
    polynomial O(n^m), log O(logn), etc?

    Describe the relationship between execution time and the size of the elements for binary search.
    Can you guess what is time complexity for binarySearch? Is it linear O(n), 
    polynomial O(n^m), log O(logn), etc?
    */

    const int BIN_NUM_SIZES = 16;
    int arr_n2[BIN_NUM_SIZES]=   {10, 100, 500, 1000, 5000, 10000, 50000, 100000, 200000, \
                            500000, 1000000, 2000000, 5000000, 10000000, 100000000, 500000000};


    for (int i = 0; i < BIN_NUM_SIZES; i++) {
        arr_n2[i] *= 2;
    } 
    // create vector of runs for binarySearch
    vector<double>bin_run;
    SearchAnalysis sa2 = SearchAnalysis();

    //create a for loop to go through all the element sizes
    for(int i = 0; i < BIN_NUM_SIZES; i++) {
        // create sa with vectors of up to arr_n[i] elements
        int n = arr_n2[i];
        SearchAnalysis sa2 = SearchAnalysis(n, exclusive_range);


        // record how long binarySearch runs for and append the time to your vector for binarySearch runs
        double elasped_bin_time = sa2.runTime(false, elem);
        bin_run.push_back(elasped_bin_time);
    }
    
    // save the times under BigO_binarySearch.csv
    string filename_bin = "BigO_binarySearch.csv";
    sa2.writeToFile(filename_bin, bin_run, arr_n2);
}

