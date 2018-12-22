/*
Anna Kovneva
Lab05
February 8, 2016
*/


#include <iostream>
#include<iomanip>
#include<math.h>
#include<fstream>

using namespace std;

int main()
{
    int principle;
    double intrate;
    int times;
    int years;
    int compint;

    cout << "Hello! \nWe will begin calculating your compound interest." << endl;
    cout << "Remember to only input numbers into your statements. \n(no commas or spaces)" << endl;
    cout << "Please type in your... \nPrinciple Investment: ";
    cin >> principle;
    cout << "Annual Interst Rate: ";
    cin >> intrate;
    cout << "Times interest is compounded per year: ";
    cin >> times;
    cout << "Years to be invested: ";
    cin >> years;

    intrate = intrate / 100;
    //cout<<"interest "<< intrate;

    compint = principle*pow((1 + intrate / times), (times*years));

    cout << "Your compound interest is " << compint << "." << endl;

    fstream fs;
    fs.open("akovneva_log.txt", fstream::in | fstream::out | fstream::app);
    fs << "Principle Invest: " << principle << "\n";
    fs << "Interest Rate: " << intrate << "\n";
    fs << "Times compounded: " << times << "\n";
    fs << "Years: " << years << "\n";
    fs << "Your compound interest is " << compint << "." << endl;
    fs.close();

    return 0;
}
