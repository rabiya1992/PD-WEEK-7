#include <iostream>
using namespace std;

void nestedForExample(int rows);

main()
{
   int rows;
   cout << "Enter desired number of rows: ";
   cin >> rows;

   nestedForExample(rows);
}

void nestedForExample(int rows)
{
    for(int i = rows; i >= 1; i = i - 1)
   {
       for(int z = rows; z > i; z = z - 1)
       {
           cout << "*";
       }

       for(int j = 1; j <= i; j = j + 1)
       {
           cout << " ";
       }
       
       
       for(int j = 1; j <= i; j = j + 1)
       {
           cout << " ";
       }
       
       
       for(int j = rows; j > i; j = j - 1)
       {
           cout << "*";
       }
       cout << endl;
   }

}