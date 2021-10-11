#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstring>

//Sana: 10.10.2021;
// Satr(char toifasidagi) da berilgan sonlar yig'indisini aniqlash;

using namespace std;

int main() {

    char myChar[100];
    cout << " Satr kiriting => ";
    cin.getline(myChar, sizeof(myChar));
    int sumNum = 0;

    for (int i = 0; i < strlen(myChar); i++) {
        if (isdigit(myChar[i])) {
            char myPointerChar = myChar[i];
            char *myPointer = &myPointerChar;
            int myNum = atoi(myPointer);
            sumNum += myNum;
        }
    }
    cout << sumNum << endl;
}