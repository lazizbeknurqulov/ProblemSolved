#include <iostream>

using namespace std;

//Sort array
int enterElements(int arr[], int n)
{
    for (int i = 0; i <= n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    return 0;
}

int outputElements(int arr[], int n)
{
    for (int i = 0; i <= n; ++i) {
        cout << arr[i] << "\t";
    }
    return 0;
}

int sortedArr(int arr[],int n, int temp)
{
    for (int i = 0; i <= n; ++i) {
        for (int j = i + 1; j <= n ; ++j) {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i <= n; ++i) {
        cout << arr[i] << "\t";
    }
    return 0;
}

int main() {

    int arr[100];
    int temp = 0;
    cout << "Number of elements in massive: ";
    int n;cin >> n;
    cout << enterElements(arr,n);

    cout << "Elements of massive: " << endl;

    cout << outputElements(arr, n);

    cout << endl;
    cout << "Sorted array:" << endl;

    cout << sortedArr(arr, n, temp);

    return 0;

}