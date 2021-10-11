#include <iostream>

//Juft satr kiritilsa o'rtadagi 2 ta so'zni toq satr kiritilsa o'rtadagi bitta harfni chiqaruvchi dastur;
// Sana: 10.10.2021.
//Muallif: Nurqulov Lazizbek;

using namespace std;

int main()
{
    cout << "Enter a string:";
    string str; cin >> str;

    if(str.length() % 2 == 0)
    {
        string twoLetter = str.substr(str.length()/2 - 1, 2);
        cout << twoLetter;
    }
    if(str.length() % 2 == 1)
    {
        string twoLetter = str.substr(str.length()/2 - 1, 2);
        cout << str.substr(str.length()/2, 1);
    }
     return 0;
}
