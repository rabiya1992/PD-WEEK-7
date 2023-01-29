#include <iostream>
using namespace std;

void nested1(int rows);
void nested2(int rows);

main()
{
   int rows;
   cout << "Enter desired number of rows: ";
   cin >> rows;

   nested2(rows);
   nested1(rows);
}


void nested1(int rows)
{ 
    for(int i = rows; i >= 1; i = i - 1)
    {
        for(int z = rows; z > i; z = z - 1)
        {
            cout << " ";
        }

        for(int j = 1; j <= i; j = j + 1)
       {
        cout << "*";
       }

       cout << endl;
    }

}


void nested2(int rows)
{
    for(int i = 1; i <= rows; i = i + 1)
    {
        for(int z = rows; z > i; z = z - 1)
        {
            cout << " ";
        }

        for(int j = 1; j <= i; j = j + 1)
        {
            cout << "*";
        }

        cout << endl;
    }
}