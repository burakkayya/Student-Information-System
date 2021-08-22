#include "Ogrenci.h"
#include "Ders.h"
#include "Kay�t.h"
#include <vector>
#include <list>
#include <iterator>
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;

void main() {

	Kay�t kay�t;
	Ders ders1(1, "math", 3);
	Ders ders2(2, "oop", 5);
	Ogrenci ogrenci1(1, "burak", "kaya");
	Ogrenci ogrenci2(2, "zeki", "kaya");
	Ogrenci ogrenci3(3, "gamze", "derman");
	kay�t.yeniDersKaydet(ders1);
	kay�t.yeniDersKaydet(ders2);
	kay�t.yeniOgrenciKaydet(ogrenci1);
	kay�t.yeniOgrenciKaydet(ogrenci2);
	kay�t.yeniOgrenciKaydet(ogrenci3);
	kay�t.ogrenciDerseKaydet(1, 1);
	kay�t.ogrenciDerseKaydet(2, 2);
	kay�t.ogrenciDerseKaydet(3, 2);

	cout << "OGRENCILER" << endl;
	cout << "---------------------" << endl;
	kay�t.ogrenciListele();
	cout << "---------------------" << endl;
	cout << "DERSLER" << endl;
	cout << "---------------------" << endl;
	kay�t.dersListele();
	cout << "---------------------" << endl;

	cout << "2. DERSIN KAYITLARI" << endl;
	kay�t.dersKayitlari(2);
	cout << "---------------------" << endl;

	cout << "1. OGRENCI KAYITLI DERSLER" << endl;
	kay�t.kayitliDersler(1);
	cout << "---------------------" << endl;


	system("PAUSE");
}