#include <iostream>

using namespace std;


// BinarySearch
//"arr" nomli massivdan "num" nomli sonni indeksini chiqaruvchi dastur.
//Muallif: Nurqulov Lazizbek.
//Sana: 04.10.2020.


int binarySearch(const int arr[], int num, int size)
{
    int low = 0;
    int hight = size - 1;
    int mid;

    while(low <= hight)
    {
        mid = (low + hight)/2;

        if(num == arr[mid])
        {
            return mid;
        }
        else if (num > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            hight = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 12, 23, 34, 45, 56, 78};
    int size = sizeof(arr)/sizeof(arr[0]);


    int num;
    cout << "Indeksi topilishi kerak bo'lgan sonni kiriting" << endl;
    cout << "num = ";cin >> num;

    cout << num << " sonini indeksi ";
    cout << binarySearch(arr, num, size);
    return 0;
}