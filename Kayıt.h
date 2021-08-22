//KAYIT HEADER
#pragma once
#include "Ogrenci.h"
#include "Ders.h"
#include <vector>
#include <list>
#include <iterator>
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;

class Kayýt
{

public:
	list<Ders> derss;
	list<Ogrenci> ögrencii;
	Kayýt();
	~Kayýt();
	void yeniOgrenciKaydet(Ogrenci);
	void yeniDersKaydet(Ders);
	void ogrenciDerseKaydet(int, int);
	void ogrenciListele();
	void dersListele();
	void dersKayitlari(int);
	void kayitliDersler(int);


};

