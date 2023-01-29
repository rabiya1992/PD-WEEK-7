#include <iostream>
using namespace std;

void triangle(int number);

main()
{
    int number;

    cout << "Enter the number: ";
    cin >> number;

    triangle(number);

}

void triangle(int number)
{
    int sum = 0;

    for(int counter = 1; counter <= number; counter = counter + 1)
    {
        sum = sum + counter;
    }

    cout << sum << endl;
}