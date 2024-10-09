//
// Created by WronM on 09.10.2024.
//

#ifndef LAB2_3_MAXBUFFOR_H
#define LAB2_3_MAXBUFFOR_H

#include "Bufor.h"

class MaxBuffor: public Bufor {
public:
    MaxBuffor(int size);
    MaxBuffor();
    ~MaxBuffor();
    virtual double calculate() override;
    virtual void add(int value);
};


#endif //LAB2_3_MAXBUFFOR_H
