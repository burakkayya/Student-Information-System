//KAYIT CPP
#include "Kayýt.h"
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

Kayýt::Kayýt(){}
Kayýt::~Kayýt(){}

void Kayýt::yeniOgrenciKaydet(Ogrenci _ogrenci){

	list<Ogrenci>::iterator it;
	int count = 0;
	for (it = ögrencii.begin(); it != ögrencii.end(); it++) {

		if (_ogrenci.no == (*it).no)
			count++;

	}
	if (count == 0)
		ögrencii.push_back(_ogrenci);

}

void Kayýt::yeniDersKaydet(Ders _ders){

	list<Ders>::iterator it;
	int count = 0;
	for (it = derss.begin(); it != derss.end(); it++) {

		if (_ders.kod == (*it).kod)
			count++;

	}
	if (count == 0)
		derss.push_back(_ders);

}
void Kayýt::ogrenciDerseKaydet(int _no, int _kod ){

	list<Ders>::iterator it;
	int count = 0;

	for (it = derss.begin(); it != derss.end(); it++) {

		if (_kod == (*it).kod) {
			count++;
			break;
		}
	}



		list<Ogrenci>::iterator iter;
	int count2 = 0;
	
	for (iter = ögrencii.begin(); iter != ögrencii.end(); iter++) {

		if (_no == (*iter).no) {
			count2++;
			break;
		}
		
	}
	
	if (count != 0 && count2 != 0) {
		(*it).ogrenciEkle((*iter));
		(*iter).dersEkle((*it));
	}
	


}
void Kayýt::ogrenciListele(){

	list<Ogrenci>::iterator iter;

	for (iter = ögrencii.begin(); iter != ögrencii.end(); iter++) {

		(*iter).print();

	}

}
void Kayýt::dersListele(){


	list<Ders>::iterator it;
	
	for (it = derss.begin(); it != derss.end(); it++) {
		(*it).print();
	}


}
void Kayýt::dersKayitlari(int _kod){

	list<Ders>::iterator it;

	for (it = derss.begin(); it != derss.end(); it++) {
		if ((*it).kod == _kod)
			break;
	}

	for (int i = 0; i < (*it).ogrenciler.size(); i++)
		(*it).ogrenciler[i].print();


}
void Kayýt::kayitliDersler(int _no){



	list<Ogrenci>::iterator it;

	for (it = ögrencii.begin(); it != ögrencii.end(); it++) {
		if ((*it).no == _no)
			break;
	}

	for (int i = 0; i < (*it).dersler.size(); i++)
		(*it).dersler[i].print();

}


