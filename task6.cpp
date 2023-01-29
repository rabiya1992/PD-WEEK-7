#include <iostream>
using namespace std;

void calculation(int period, int day);

main()
{ 
    int period;
    int currentDay;
    cout << "Enter period: ";
    cin >> period;

    calculation(period, currentDay);


}

void calculation(int period, int currentDay)
{
    int treatedPatient = 0;
    int unTreatedPatient = 0;
    int doctors = 7;

    for(int day = 1; day <= period; day = day + 1)
    {
        cout << "Enter patient coming on treatment for the current day: ";
        cin >> currentDay;

        if(unTreatedPatient > treatedPatient && day % 3 == 0)
        {
            doctors = doctors + 1;
        }

        if(currentDay > doctors)
        {
            treatedPatient = treatedPatient + doctors;
            unTreatedPatient = (currentDay - doctors) + unTreatedPatient;
        }

        else
        {
            treatedPatient = treatedPatient + currentDay;
        }
    }

    cout << "Treated patients: " << treatedPatient << endl;
    cout << "Untreated patients: " << unTreatedPatient << endl;
}