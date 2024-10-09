//
// Created by WronM on 09.10.2024.
//

#ifndef LAB2_3_BUFOR_H
#define LAB2_3_BUFOR_H


class Bufor {
private:
    int *tab;
    int tabRozm;
    int wolnyIndeks;
public:
    Bufor(int tabRozm1);
    Bufor();
    virtual ~Bufor();
    virtual void add(int value);
    virtual double calculate() =0;
    int getIndex();
    int getSize();
    int getTab(int i);
    int getFirst();
    void setFirst(int value);
    void setTab(int pos, int value);
    void wypisz();
};


#endif //LAB2_3_BUFOR_H
