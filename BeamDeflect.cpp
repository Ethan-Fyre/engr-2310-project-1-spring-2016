/* BeamDeflect.cpp
 * Ethan Sayles
 * Feb 26, 2016
 * Purpose: Create a program that calculates the deflection of a beam under a range of loads starting
      at 0 and counting by 100 up to the User-Entered maximum load.
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    //Define Constants and Variables
    const double l = 90;          //Default Length of the Beam in Meters (m)
    const double E = 30000000;    //Default Modulus Of Elasticity in Newtons per Meters squared (N/m^2)
    const double I = 926;         // Default Moment of Inertia in Meters to the Fourth Power (m^4)
    const double step_size = 100; //Size of steps for the load (N)
    double max_load = 0;          //User-Entered value for the maximum load size (N)

    //Print a message explaining the purpose of the program
    cout << "Purpose: Calculate the deflection of a beam under a range of loads starting " <<
                    "at 0 and counting by 100 up to the User-Entered maximum load." << endl;

    //Prompt the user to enter the maximum load for which to calculate the deflection and store this value to max_load
    cout << "Please enter a maximum load to be placed on the beam: ";
    cin >> max_load;

    //Calculate the value of the deflection and print in a range from 0 up to max_load
    //counting by the step_size of 100
    cout << "  Load (N)        Deflection (m)" << endl;  //Start the Table
    for (double i = 0; i <= max_load; i += step_size) {
        double Deflection = ((i * pow(l,3)) / (3 * E * I)); // Calculate the Deflection of the beam
        cout << setw(10) << setprecision(4) <<  i << "        " << setw(14) << setprecision(4) << Deflection << endl;
    }
    return 0;
}