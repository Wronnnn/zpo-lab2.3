//
// Created by WronM on 09.10.2024.
//

#include "MaxBuffor.h"

MaxBuffor::MaxBuffor(int size) : Bufor(size) {

}

MaxBuffor::MaxBuffor() {

}

MaxBuffor::~MaxBuffor() {

}

double MaxBuffor::calculate() {
    if(getIndex() == 0){
        return 0;
    }
    int maks = getTab(0);
    for(int i=1;i<getIndex();i++){
        if(getTab(i) > maks){
            maks = getTab(i);
        }
    }
    return maks;
}

void MaxBuffor::add(int value) {
    if(getFirst() < getSize()){
        Bufor::add(value);
    }
}
