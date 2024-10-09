//
// Created by WronM on 09.10.2024.
//

#ifndef LAB2_3_MEANBUFFOR_H
#define LAB2_3_MEANBUFFOR_H

#include "Bufor.h"

class MeanBuffor: public Bufor {
public:
    MeanBuffor(int size1);
    MeanBuffor();
    ~MeanBuffor();
    virtual double calculate() override;
};


#endif //LAB2_3_MEANBUFFOR_H
