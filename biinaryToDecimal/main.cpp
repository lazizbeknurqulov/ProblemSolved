#include <iostream>
#include <cmath>

using namespace std;

void binToDec(long long myNum)
{
    long long index = 0;
    long long decimal = 0;

    while(myNum > 0)
    {
        decimal += (myNum % 10) * pow(2, index++);
        myNum /= 10;
    }
    cout << decimal;
}

using namespace std;
int main() {

    cout << "Enter a binary number:";
    long long myNum; cin >> myNum;
    binToDec(myNum);

    return 0;
}
