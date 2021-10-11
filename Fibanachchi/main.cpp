#include <iostream>

using namespace std;

//Fibanachchi sonini aniqlovchi dastur;
//Muallif: Lazizbek Nurqulov
//Sana:05.10.2021

int fibanachchiNum(int n)
{
    int FN;
    int F1 = 1;
    int F2 = 1;
    for(int i = 2; i < n;i++)
    {
        FN = F1 + F2;
        F1 = F2;
        F2 = FN;
    }
    return FN;
}

int main()
{

    cout << "n = ";
    int n;cin >> n;
    cout << fibanachchiNum(n);

    return 0;
}