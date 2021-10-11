# include <iostream>

using namespace std;
// str2 dan str1 ni izlaydi topsa str3 ga almashtiradi.


int main (){
    cout << "Enter a string:";
    string str1;cin >> str1;
    cout << "Enter another string:";
    string str2;cin >> str2;
    cout << "str3 = ";
    string str3;
    cin >> str3;
    string result;

    if(str2.length() > str1.length())
    {
        for (int i = 0; i < str2.length() - str1.length() + 1; ++i) {
            string myWord = str2.substr(i, str1.length());
            if(myWord == str1)
            {
                str2.erase(i, str1.length());
                str2.insert(i, str3);
            }
        }
        cout << str2;
    }
    else
    {
        cout << -1;
    }
}
