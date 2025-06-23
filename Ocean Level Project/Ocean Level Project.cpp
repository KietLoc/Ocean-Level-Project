#include <iostream>
using namespace std;

static double calcOceanLevel(double rate, int years) //Calculates ocean rise given rate (mm/year) and years.
{
    return rate * years;
}

int main() 
{
    double rate = 1.5; //Defined rate of 1.5.

    int time[] = { 5, 7, 10 }; //Defined number of years for testing.

    for (int years : time) //Set a fixed loop for all 3 time frames that needed to be predicted.
    {
        double rise = calcOceanLevel(rate, years); //Set rise as a double valueas a result of the calculation.
        cout << "With a rate of " << rate << " mm/year, in " << years << " years, ocean rises: " << rise << " mm" << endl;
    }

    return 0;
}
/* 
Here is a version with inputs instead of fixed amount of years.

double calcOceanLevel(double rate, int years) 
{
    return rate * years;
}

int main() 
{
    double rate;
    int years;
    cout << "Please enter the rate of ocean level rising in millimeters per year: ";
    cin >> rate;
    cout << "Please enter the number of years to predict ocean level: ";
    cin >> years;

    double rise = calcOceanLevel(rate, years);
    cout << "Ocean rise: " << rise << " mm" << endl;
    return 0;
}
*/