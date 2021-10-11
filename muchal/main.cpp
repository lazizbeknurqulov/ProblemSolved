//Nurqulov Lazizbek.
//Sana: 10.10.2021;
//Maqsad:
//Yilningiz raqamiga qarab uning muchalini aniqlovchi dastur;
//1984 - yil Yashil sichqon yili!;

# include <iostream>

using namespace std;

int main (){

    cout << "Yil kiriting: ";
    int year;cin >> year;

    int resultNum = ((year - 1983))% 12;
    int period1 = (year - 1983) % 60;
    int period = period1 / 12;

    switch (period) {
        case 0:
            cout << "Yashil ";break;
        case 1:
            cout << "Qizil ";break;
        case 2:
            cout << "Sariq ";break;
        case 3:
            cout << "Oq ";break;
        case 4:
            cout << "Qora ";break;
        default:
            cout << "Somthing wrong";
    }
    switch (resultNum) {
        case 1:
            cout << "Sichqon yili ";break;
        case 2:
            cout << "Sigir yili ";break;
        case 3:
            cout << "Yo'lbars yili ";break;
        case 4:
            cout << "Quyon yili ";break;
        case 5:
            cout << "Ajdar yili ";break;
        case 6:
            cout << "Ilon yili ";break;
        case 7:
            cout << "Ot yili ";break;
        case 8:
            cout << "Qo'y yili ";break;
        case 9:
            cout << "Maymun yili ";break;
        case 10:
            cout << "Tovuq yili ";break;
        case 11:
            cout << "It yili ";break;
        case 0:
            cout << "To'ng'iz ";break;
        default:
            cout << "Somthing wrong ";
    }

}
