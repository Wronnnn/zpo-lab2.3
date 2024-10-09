//
// Created by WronM on 09.10.2024.
//

#include "MeanBuffor.h"

MeanBuffor::MeanBuffor(int size1) : Bufor(size1) {

}

MeanBuffor::MeanBuffor() {

}

MeanBuffor::~MeanBuffor() {

}

double MeanBuffor::calculate() {
    double srednia = 0;
    for(int i=0;i<getIndex();i++){
        srednia += (int) getTab(i);
    }
    return srednia/getIndex();
}
