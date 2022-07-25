#include <iostream>

using namespace std;






int main()
{

    int liczbaocen;



    float wsdcp = 4.75;

    float suma = 0;

    float srednia;


    cout << "z ilu ocen chcesz poliszyć średnią?: " << endl;

    cin >> liczbaocen;

    float oceny [liczbaocen];

    for(int i=0; i < liczbaocen; i++)
    {



        cout << "podaj " << i+1 << " ocene: " ;

        cin >> oceny[i];









    }

for(int f=0; f < liczbaocen ;f++ )
{

suma = suma + oceny[f];








}

srednia = suma / liczbaocen ;

cout << srednia ;













}
