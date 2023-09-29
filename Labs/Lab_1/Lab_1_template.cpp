/***
 * CSE 2010 Fall 2023
 * Lab #{1}
 * {isaac cruz} {0007964808}
 * {9/12/2023}
 * 
 * {Description of lab AKA paraphrase "abstract" section from lab}
 * 
 * {Describe 1) what was most challenging and 2) how you solved/overcame the problem OR
 * the directions of how you PLAN to solve it}
 * 
***/


#include <iostream>
#include <cmath> 

using namespace std;

// main() takes in no arguments and performs the arithmetic operations based on user selection
// returns 0 when the program terminates without errors. 
// otherwise it returns the number where an invalid selection was made
int main() {
    cout << "Select a number from 1-6.\n \
            1) sqrt(x)\n \
            2) pow(x,y)\n \
            3) ceil(x/y)\n \
            4) floor(x/y)\n \
            5) x/y\n \
            6) x%y\n";

    // instantiate your variables, x and y as int of value 0  
    // make modifications from int to doubles for section 5.2 here
    int x = 0;
    int y = 0;
    int user_selection = 0;

    cin >> user_selection;

    if (cin.fail()) {
        cerr << "Invalid\n";
        return -1;
    } else {
        cout << "You selected " << user_selection << endl;
        if (user_selection == 1){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 1;
            }
            cout << "sqrt(" << x << ") is " << sqrt(x) << endl;
        }
        /*****
         *  Provide your own code for when the user selects numbers 2 to 5. 
         *  You should NOT have to create your own functions. 
         *  As indicated in sqrt(x), you should call pow(x,y), ceil(x/y), floor(x/y). 
         * 
         *  Make sure to understand what each function does. 
         *  (Hint: ceil() will not behave as expected when x and y are ints. You 
         *  should see the distinction between ceil() and floor() 
         *  when doubles are involved.)
         * 
         * 
         * 
        *****/
        else if (user_selection == 6){
            cout << "Requesting x\n";
            // the reason we created distinct x and y variables (mod_x, mod_y) 
            // is because '%' only expects int and never doubles. 
            int mod_x = 0.0;
            int mod_y = 0;
            cin >> mod_x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 6;
            }
            cout << "Requesting y\n";
            cin >> mod_y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 6;
            }

            cout << mod_x << "/ " << mod_y  << " is " << mod_x%mod_y << endl;
        } else {
            printf("Invalid selection\n");
        }

    }
    
    return 0;
}
