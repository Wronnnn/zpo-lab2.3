//
// Created by WronM on 09.10.2024.
//

#include "Bufor.h"
#include <iostream>

using namespace std;

Bufor::Bufor(int tabRozm1) {
    tab = new int[tabRozm1];
    tabRozm = tabRozm1;
}

Bufor::Bufor() {
    tab = new int[10];
    tabRozm = 10;
}

Bufor::~Bufor() {
    delete tab;
}

void Bufor::add(int value) {
    *(tab+wolnyIndeks) = value;
    wolnyIndeks++;
}

int Bufor::getIndex() {
    return wolnyIndeks;
}

int Bufor::getSize() {
    return tabRozm;
}

int Bufor::getTab(int i) {
    return *(tab+i);
}

int Bufor::getFirst() {
    return wolnyIndeks + 1;
}

void Bufor::setFirst(int value) {
    *(tab+wolnyIndeks) = value;
    wolnyIndeks++;
}

void Bufor::setTab(int pos, int value) {
    *(tab+pos) = value;
    if(wolnyIndeks<pos){
        wolnyIndeks=pos+1;
    }
}

void Bufor::wypisz() {
    for(int i=0;i<tabRozm;i++){
        cout<<*(tab+i)<<' ';
    }
    cout<<endl;
}
