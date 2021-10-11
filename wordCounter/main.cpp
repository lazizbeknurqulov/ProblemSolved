#include <iostream>
using namespace std;

// Kiritilgan matndan ma'lum bir so'zni sanash;
int counterWord(const string& str1, const string& str2,int counter)
{
    if(str2.length() > str1.length())
    {
        for (int i = 0; i < str2.length() - str1.length() + 1; ++i) {
            string result = str2.substr(i, str1.length()) ;

            cout << " ";
            if(result == str1)
            {
                counter++;
            }
        }
        return counter;
    }
    else
    {
        return -1;
    }
}

int main() {

    cout << "Sanalishi kerak bo'lgan so'zni kiriting: ";
    string str1;
    getline(cin, str1);
    cout << "Satr kiriting: ";
    string str2;
    getline(cin, str2);
    int counter = 0;

    cout << counterWord(str1, str2, counter);

    return 0;
}