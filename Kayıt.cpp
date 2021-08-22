//KAYIT CPP
#include "Kay�t.h"
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

Kay�t::Kay�t(){}
Kay�t::~Kay�t(){}

void Kay�t::yeniOgrenciKaydet(Ogrenci _ogrenci){

	list<Ogrenci>::iterator it;
	int count = 0;
	for (it = �grencii.begin(); it != �grencii.end(); it++) {

		if (_ogrenci.no == (*it).no)
			count++;

	}
	if (count == 0)
		�grencii.push_back(_ogrenci);

}

void Kay�t::yeniDersKaydet(Ders _ders){

	list<Ders>::iterator it;
	int count = 0;
	for (it = derss.begin(); it != derss.end(); it++) {

		if (_ders.kod == (*it).kod)
			count++;

	}
	if (count == 0)
		derss.push_back(_ders);

}
void Kay�t::ogrenciDerseKaydet(int _no, int _kod ){

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
	
	for (iter = �grencii.begin(); iter != �grencii.end(); iter++) {

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
void Kay�t::ogrenciListele(){

	list<Ogrenci>::iterator iter;

	for (iter = �grencii.begin(); iter != �grencii.end(); iter++) {

		(*iter).print();

	}

}
void Kay�t::dersListele(){


	list<Ders>::iterator it;
	
	for (it = derss.begin(); it != derss.end(); it++) {
		(*it).print();
	}


}
void Kay�t::dersKayitlari(int _kod){

	list<Ders>::iterator it;

	for (it = derss.begin(); it != derss.end(); it++) {
		if ((*it).kod == _kod)
			break;
	}

	for (int i = 0; i < (*it).ogrenciler.size(); i++)
		(*it).ogrenciler[i].print();


}
void Kay�t::kayitliDersler(int _no){



	list<Ogrenci>::iterator it;

	for (it = �grencii.begin(); it != �grencii.end(); it++) {
		if ((*it).no == _no)
			break;
	}

	for (int i = 0; i < (*it).dersler.size(); i++)
		(*it).dersler[i].print();

}


