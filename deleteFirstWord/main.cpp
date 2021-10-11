#include <iostream>

using namespace std;
// str2 satrda uchragan str1 birinchi satrni o'chiradi, agar bo'lmasa str2 ni qaytaradi.

string deleteFirstWord(const string& str1, string str2)
{
    if(str2.length() > str1.length())
    {
        for (int i = 0; i < str2.length() - str1.length() + 1; ++i) {
            string result = str2.substr(i, str1.length()) ;

            if(result == str1)
            {
                str2.erase(i,str1.length());
                break;
            }
        }
        return str2;

    }
    else
    {
        return "str2.length() < str1.length()";
    }

}
int main() {

    cout << "O'chirilishi kerak bo'lgan so'zni kiriting:";
    string str1;
    getline(cin, str1);
    cout << "Satr kiriting: ";
    string str2;
    getline(cin, str2);

    cout << deleteFirstWord(str1, str2);

    return 0;
}