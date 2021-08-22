//OGRENCI CPP
#include "Ogrenci.h"
#include "Ders.h"
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;

Ogrenci::Ogrenci(int _no, string _ad, string _soyad) :no(_no), ad(_ad), soyad(_soyad){}
void Ogrenci::dersEkle(Ders _ders) {

	dersler.push_back(_ders);

}
void Ogrenci::print() {

	cout << "Numara: " << no << endl;
	cout << "Ad: " << ad << endl;
	cout << "Soyad: " << soyad << endl;

}
void Ogrenci::listele(){

	for (int i = 0; i < dersler.size(); i++) {
		cout << "Kod: " << dersler[i].kod << endl;
		cout << "Ad: " << dersler[i].ad << endl;
		cout << "Kredi: " << dersler[i].kredi << endl;
	}


}