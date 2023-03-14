#include <iostream>

using namespace std;

struct Ogrenci {
	string ad;
	int id;
	float Not;
};

int main() {
	int secim;
	int ogrenci_sayisi;
	cout << "Ogrenci sayisini girin: ";
	cin >> ogrenci_sayisi;

	Ogrenci* ogrenciler = new Ogrenci[ogrenci_sayisi];

	for (int i = 0; i < ogrenci_sayisi; i++)
	{
		cout << "Ogrenci Bilgilerini Girin " << i + 1 << ": " << endl;
		cout << "Ad: ";
		cin >> ogrenciler[i].ad;
		cout << "Ogrenci Numarasi: ";
		cin >> ogrenciler[i].id;
		cout << "Not: ";
		cin >> ogrenciler[i].Not;
	}

	cout << "Ogrenci numarasina gore ogrenci aramak icin 1 girin: " << endl;
	cout << "Ogrencileri notlarina gore aramak icin 2 girin: " << endl;
	cout << "Tum ogrencilerin ortalama notunu hesaplamak icin 3 girin: " << endl;
	cin >> secim;

	float toplamNot = 0;
	float ortalama;
	if (secim == 1)
	{
		for (int i = 0; i < ogrenci_sayisi; i++)
		{
			cout << ogrenciler[i].ad << "  " << i + 1 << "  " << ogrenciler[i].id << endl;
		}

	}
	else if (secim == 2) {
		for (int i = 0; i < ogrenci_sayisi; i++)
		{
			cout << ogrenciler[i].ad << "  " << i + 1 << "  " << ogrenciler[i].Not << endl;
		}

	}
	else if (secim == 3) {
		for (int i = 0; i < ogrenci_sayisi; i++)
		{
			toplamNot += ogrenciler[i].Not;
			ortalama = toplamNot / ogrenci_sayisi;
		}
		cout << "Tum Ogrencilerin Ortalamasi: ";
		cout << ortalama;
	}

	delete[] ogrenciler;
	cout << endl;
	return 0;
}