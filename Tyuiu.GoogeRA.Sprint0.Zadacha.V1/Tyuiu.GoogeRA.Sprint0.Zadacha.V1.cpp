// Tyuiu.GoogeRA.Sprint0.Zadacha.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.GoogeRA.Sprint0.Zadacha.V1.Lib/Tyuiu.GoogeRA.Sprint0.Zadacha.V1.Lib.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout <<"Googe\a\t" "Robert\t" <<"Aleksandrovich";
    cout << endl;
    ISprint0Task8V2* diva = new Service();
    cout << "Zadacha";
    cout << endl;
    int a, b, c;
    cout << "¬ведите число x";
    cin >> a;
    cout << endl;
    cout << "¬ведите число y";
    cin >> b;
    cout << endl;
    cout << "¬ведите число z";
    cin >> c;
    cout << endl;
    cout << "rezult =" << diva->Rezultat(a,b,c);


}
