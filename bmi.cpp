#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double height, weight, bmi;

    cout << "Type in your height: ";
    cin >> height;

    cout << "Type in your weight: ";
    cin >> weight;

    //convert to inches
    height = height * 12;

    bmi = (703 * weight) / (pow(height, 2));

    cout << "Your bmi is: " << bmi << "\n";
}