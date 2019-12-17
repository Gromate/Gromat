#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int a, b;



int sumowanieDzielnikow(int k)
{
    int sumaDzielnikow = 0;

    for (int i=1; i<k; i++)
    {
        if(k%i==0)
        {
         sumaDzielnikow += i;
        }
    }
    return sumaDzielnikow;
}

int main()
{
    cout << "Podaj liczbe do skojarzenia" << endl;
    cin >> a;

    system("cls");
    b = sumowanieDzielnikow(a) - 1;

    if ((sumowanieDzielnikow(a) - 1 == b)&&(sumowanieDzielnikow(b) - 1 == a))
        {
            cout << b << endl;
        }

    else
        {
            cout << "NIE" << endl;
        }

    return 0;
}
