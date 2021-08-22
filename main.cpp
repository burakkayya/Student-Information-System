#include "Ogrenci.h"
#include "Ders.h"
#include "Kayýt.h"
#include <vector>
#include <list>
#include <iterator>
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;

void main() {

	Kayýt kayýt;
	Ders ders1(1, "math", 3);
	Ders ders2(2, "oop", 5);
	Ogrenci ogrenci1(1, "burak", "kaya");
	Ogrenci ogrenci2(2, "zeki", "kaya");
	Ogrenci ogrenci3(3, "gamze", "derman");
	kayýt.yeniDersKaydet(ders1);
	kayýt.yeniDersKaydet(ders2);
	kayýt.yeniOgrenciKaydet(ogrenci1);
	kayýt.yeniOgrenciKaydet(ogrenci2);
	kayýt.yeniOgrenciKaydet(ogrenci3);
	kayýt.ogrenciDerseKaydet(1, 1);
	kayýt.ogrenciDerseKaydet(2, 2);
	kayýt.ogrenciDerseKaydet(3, 2);

	cout << "OGRENCILER" << endl;
	cout << "---------------------" << endl;
	kayýt.ogrenciListele();
	cout << "---------------------" << endl;
	cout << "DERSLER" << endl;
	cout << "---------------------" << endl;
	kayýt.dersListele();
	cout << "---------------------" << endl;

	cout << "2. DERSIN KAYITLARI" << endl;
	kayýt.dersKayitlari(2);
	cout << "---------------------" << endl;

	cout << "1. OGRENCI KAYITLI DERSLER" << endl;
	kayýt.kayitliDersler(1);
	cout << "---------------------" << endl;


	system("PAUSE");
}