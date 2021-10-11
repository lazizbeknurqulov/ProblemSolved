#include <iostream>

using namespace std;

//Kiritilgan stringni reverse qiluvchi dastur;

string reversString(string str)
{
    string result;
    for (int i = str.length(); i >= 0 ; i--) {
        result += str[i];
    }
    return result;
}


int main() {

    cout << "Enter a string:";
    string  str;
    getline(cin, str);
    cout << "Reversed string:";
    cout << reversString(str);

    return 0;

}



