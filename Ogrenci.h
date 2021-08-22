//OGRENCI HEADER
#pragma once
class Ders;
#include "Ders.h"
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>
using namespace std;
class Ogrenci
{

public:
	int no;
	string ad;
	string soyad;
	vector<Ders> dersler;

	Ogrenci(int, string, string);
	void dersEkle(Ders);
	void print();
	void listele();
};

