#include <iostream>
#include <stdlib.h>// random sayıları üreten kütüphanemiz
#include <time.h>// sistem ayn sayıyı iki kere üretmesin diye kullanıcağım kütüphane

using namespace std;

int main() {

	int s1, s2;

	srand(time(NULL));//burada sistemin aynı sayıyı 2 kere üretmesini engelledik.
	s1 = rand() % 10+1;

	cout << "-----------------------------------------------Tuttur Kazan Oyunu-------------------------------------------------------" << endl;

	cout << "Hadi 1-10 arasi bir sayi tut:";
	cin >> s2;

	if (s2 == s1) {

		cout << "Basardin! sistemin tuttugu sayi ile aynı sayiyi tuttun!" << endl;


	}
	else
		cout << "Basaramadin abi sistemin tuttugu sayi:" << s1 << endl;
	
	return main();
}