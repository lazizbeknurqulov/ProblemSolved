#include <iostream>

using namespace std;

//1
//23
//456
//78910

int main()
{
    cout << "n = ";
    int n; cin >> n;


    for(int i = 1; i <= n;i++)
    {
         if(i == 1||i == 3||i == 6)
         {
              cout << i;
              cout << endl;
         }
         else
         {
              cout << i;
         }
    }


    return 0;
}
