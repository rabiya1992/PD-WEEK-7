#include <iostream>
using namespace std;

void amplify(int number);

main()
{

    int number;
    cout << "Enter the number: ";
    cin >> number;

    amplify(number);

}


void amplify(int number)
{
    
    for(int count = 1; count <= number; count = count + 1)
    {
        if(count % 4 == 0)
        {
            cout << count * 10;
            cout << " ";
            continue;
        }
        cout << count << " ";
    }
}
