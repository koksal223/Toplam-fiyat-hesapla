#include <iostream>
using namespace std;
class mal {
	string isim;
	float fiyat;
	int adet;
public:
	static float tutar;
	mal(){}
	mal(string i, float f, int a):isim(i),fiyat(f),adet(a)  {
	tutar += (adet * fiyat);
	}
	

};
float mal::tutar = 0;
int main()
{
	int adet;
	float f;
	string ad;
	int sayi;
	cout << "kac urun girilecegini giriniz : ";
	cin >> sayi;
	mal *a=new mal[sayi];
	for (int i = 0; i < sayi; i++)
	{

		cout << "ismini girin ";
		cin >> ad;
		cout << "fiyati gir : ";
		cin >> f;
		cout << "adeti girin ";
		cin >> adet;
		a[i] = { ad, f, adet };
		}
	cout << "toplam tutar : "<<a[1].tutar;


}



