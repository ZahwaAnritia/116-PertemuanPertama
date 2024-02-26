
#include <iostream>
using namespace std;


int main()
{
    //begin
        // numeric nJejari, nLuas
        // display 'Masukkan jejari= '
        // accept nJejari
        // compute nLuas = 3.14 * r * r
        //display 'Luasnya ' + Luas
    //end

    double nJejari, nLuas;
    cout << "Masukkan Jejari = ";
    cin >> nJejari;
    nLuas = 3.14 * nJejari * nJejari;
    cout << " Luasnya = " << nLuas<< endl;


    system("pause");
}

