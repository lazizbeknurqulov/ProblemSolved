#include <iostream>

using namespace std;


//So'z kiritilgand katta harflarni sanash;
//Muallif: Nurqulov Lazizbek;
//Sana: 05.10.2021.


int countUpperLetters(const string& str)
{
    int counts = 0;
    for(int i : str)
    {
        if(i >= 'a' && i <= 'z')
        {
            counts++;
        }
    }

    return str.length() - counts;

}


int main()
{

    string str;
    cout << "Enter string: ";
    getline(cin, str);

    cout << countUpperLetters(str);
    return 0;
}