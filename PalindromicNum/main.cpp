#include <iostream>

using namespace std;

bool palindromNum(int num)
{
     int my_num = num;
     int rev_num = 0;

     while(num > 0)
     {
         rev_num = rev_num*10 + num % 10;
         num = num / 10;
     }

     if(my_num == rev_num)
     {
         return true;
     }
     else
     {
         return false;
     }
}

int main()
{
    cout << "n = ";
    int num;cin >> num;
    cout << palindromNum(num);

    return 0;
}