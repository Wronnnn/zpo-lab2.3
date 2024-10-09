#include <iostream>
#include "Bufor.h"
#include "MeanBuffor.h"
#include "MaxBuffor.h"

using namespace std;

int main() {
    MeanBuffor a = MeanBuffor(4);
//    a.setFirst(1);
//    a.setFirst(2);
//    a.setFirst(3);
    a.setTab(0, 1);
    a.setTab(1, 2);
    a.setTab(2, 3);
    a.setTab(3, 4);
    a.wypisz();
    cout<<a.getIndex()<<endl;
    cout<<a.calculate()<<endl;
    MaxBuffor b = MaxBuffor(4);
    b.setTab(0, 1);
    b.setTab(1, 2);
    b.setTab(2, 3);
    b.setTab(3, 4);
    cout<<b.calculate();
    return 0;
}
