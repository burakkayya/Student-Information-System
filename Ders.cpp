//DERS CPP
#include "Ders.h"
#include "Ogrenci.h"
#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>

Ders::Ders(int _kod, string _ad, int _kredi) :kod(_kod), ad(_ad), kredi(_kredi) {}

void Ders::ogrenciEkle(Ogrenci _ogrenci) {

	ogrenciler.push_back(_ogrenci);

}
void Ders::print() {

	cout << "Kod: " << kod<<endl;
	cout << "Ad: " << ad << endl;
	cout << "Kredi: " << kredi << endl;
}
void Ders::listele(){


	for (int i = 0; i < ogrenciler.size(); i++) {
		cout << "Numara: " << ogrenciler[i].no << endl;
		cout << "Ad: " << ogrenciler[i].ad << endl;
		cout << "Soyad: " << ogrenciler[i].soyad << endl;
	}


}