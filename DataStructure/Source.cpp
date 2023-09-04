
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    //  1-) Write the program code that joins the two sequenced sequences.
    int dizi_1[] = { 1, 3, 4, 5 };
    int dizi_2[] = { 2, 4, 6, 8 };
    int uzunluk_1 = sizeof(dizi_1) / sizeof(dizi_1[0]);
    int uzunluk_2 = sizeof(dizi_2) / sizeof(dizi_2[0]);
    int birlesim[(sizeof(dizi_1) / sizeof(dizi_1[0])) + (sizeof(dizi_2) / sizeof(dizi_2[0]))];

    for (int i = 0; i < uzunluk_1; i++) {
        birlesim[i] = dizi_1[i];
    }

    for (int i = 0; i < uzunluk_2; i++) {
        birlesim[uzunluk_1 + i] = dizi_2[i];
    }

    sort(birlesim, (birlesim + (uzunluk_1 + uzunluk_2)));

    cout << "Dizi_3: ";
    for (int i = 0; i < (uzunluk_1 + uzunluk_2); i++) {
        cout << birlesim[i] << " ";
    }

    cout << endl << endl;
    cout << "*****************";
    cout << endl << endl;
    /******************************************************************************************************/

    // 2-) Write program code that removes duplicate numbers from a sorted array.

    int arr1[] = { 0,0,1,1,1,2,2,3,3,4 };
    int boyut = sizeof(arr1) / sizeof(arr1[0]);
    int index = 0;

    for (int i = 0; i < boyut; i++) {
        if (arr1[index] != arr1[i]) {
            index++;
            arr1[index] = arr1[i];
        }
    }

    cout << "arr2: ";
    for (int i = 0; i <= index; i++) {
        cout << arr1[i] << " ";
    }


    cout << endl << endl;
    cout << "*****************";
    cout << endl << endl;
    /******************************************************************************************************/

    // 3-) Write the program that displays the averages of the entered numbers until -1 is entered on the keyboard.

    int sayi;
    cout << "Sayi Girin: " << endl;
    cin >> sayi;
    float toplam = 0;
    int sayiAdet = 0;
    while (true) {
        if (sayi != -1)
        {
            toplam += sayi;
            sayiAdet++;
            cin >> sayi;
        }
        else {
            cout << "Ortalama: ";
            cout << (toplam / sayiAdet);
            break;
        }
    }

    cout << endl << endl;
    cout << "*****************";
    cout << endl << endl;
    /******************************************************************************************************/

    // 4-) Calculate the average of the student whose Midterm and Final grades are entered using the function.

    float ortalama;
    int vize,final;
    
    cout << "Vize: ";
    cin >> vize;
    cout << "Final: ";
    cin >> final;

    ortalama = hesapla(vize, final);

    cout << "Ortalama: " << ortalama;

    return 0;

}  //For the program to run smoothly, the bottom 'calculate' function must be moved above the main function.
   //It is left here to indicate that it belongs to question 4.
float hesapla(int vize, int final) {

    float ortalama = ((vize * 0.4) + (final * 0.6));
    return ortalama;

}




    
