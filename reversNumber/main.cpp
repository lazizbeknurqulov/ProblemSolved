#include <iostream>
#include <math.h>

//Kiritgan raqamimizni teskarisini chiqaruvchi dastur.
//Muallif: Nurqulov Lazizbek.
//Sana: 05.10.2020.

using namespace std;

int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num*10 + num%10;
        num = num/10;
    }
    return rev_num;
}
int main()
{
    int num;
    cout << "num = ";
    cin >> num;
    cout << reversDigits(num);

    return 0;
}
