#include <iostream>
using namespace std;

void cargo(float countCargo, float tonnage);

main()
{
    float countCargo;
    float tonnage;

    cout << "Enter count of cargo for transportation: ";
    cin >> countCargo;
    
    cargo(countCargo, tonnage);

}

void cargo(float countCargo, float tonnage)
{
    float miniBus = 0;
    float truck = 0;
    float train = 0;

    float price1 = 0;
    float price2 = 0;
    float price3 = 0;
    
    float sum = 0;
    
    float avgPer;
    float percentage1;
    float percentage2;
    float percentage3;

    for(float count = 0; count < countCargo; count = count + 1)
    {
        cout <<  "Tonnage of current cargo: ";
        cin >> tonnage;

        sum = sum + tonnage;

        if(tonnage <= 3)
        {
            miniBus = miniBus + tonnage;
            price1 = price1 + (tonnage * 200);
        }

        else if(tonnage > 3 && tonnage <= 11)
        {
            truck = truck + tonnage;
            price2 = price2 + (tonnage * 175);
        }

        else
        {
            train = train + tonnage;
            price3 = price3 + (tonnage * 120);
        }
    }
   
   avgPer = ((price1 + price2 + price3) / sum);
   cout << avgPer << endl;

   percentage1 = ((miniBus * 100.00) / sum);
   cout << percentage1 << "%" << endl;

   percentage2 = ((truck * 100.00) / sum);
   cout << percentage2 << "%" << endl;

   percentage3 = ((train * 100.00) / sum);
   cout << percentage3 << "%" << endl;
}