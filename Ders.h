//DERS HEADER

#pragma once
class Ogrenci;
#include "Ogrenci.h"
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;

class Ders
{
public:
	int kod;
	string ad;
	int kredi;
	vector<Ogrenci> ogrenciler;

	Ders(int , string , int);
	void ogrenciEkle(Ogrenci);
	void print();
	void listele();


};

