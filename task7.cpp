#include <iostream>
using namespace std;

void percent(int numbers, int integerNumbers);

main()
{
    int numbers;
    int integerNumbers;

    cout << "Enter integers: ";
    cin >> numbers;

    percent(numbers, integerNumbers);

}

void percent(int numbers, int integerNumbers)
{
    float counter1 = 0;
    float counter2 = 0;
    float counter3 = 0;

    float percentage1 = 0;
    float percentage2 = 0;
    float percentage3 = 0;

    for(int counter = 0; counter < numbers; counter = counter + 1)
    {
        cout << "Enter Interger: ";
        cin >> integerNumbers;

        if(integerNumbers % 2 == 0)
        {
            counter1 = counter1 + 1; 
        }

        if(integerNumbers % 3 == 0)
        {
            counter2 = counter2 + 1;
        }

        if(integerNumbers % 4 == 0)
        {
            counter3 = counter3 + 1;
        }
    }
   
    percentage1 = ((counter1 / numbers) * 100);
    cout << percentage1 << "%" << endl;

    percentage2 = ((counter2 / numbers) * 100);
    cout << percentage2 << "%" << endl;

    percentage3 = ((counter3 / numbers) * 100);
    cout << percentage3 << "%" << endl;

}
