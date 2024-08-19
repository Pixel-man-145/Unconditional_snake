#include <iostream>
#include <windows.h>

short invent(short a) {                     //инвентирование
    return (a*-1+1);
}
short myor(short a, short b) {              //или
    return invent(invent(a)*invent(b));    
}
short check_zero(short a) {                 //проверка на ноль
    unsigned int e1 = 0;
    unsigned int e2 = 0;
    e1 = (a*a+1)/1;
    e2 = 1/(a*a+1);
    return e1*e2;
}
short equals(short a, short b) {            //проверка на равенство
    unsigned int e1 = 0;
    unsigned int e2 = 0;
    e1 = (a+(a*a+b*b+1))/(b+(a*a+b*b+1));
    e2 = (b+(a*a+b*b+1))/(a+(a*a+b*b+1));
    return e1*e2;
}
short more(short a, short b) {              //проверка на больше
    unsigned int e1 = 0;
    e1 = (b+(a*a+b*b+1))/(a+(a*a+b*b+1));
    return check_zero(e1);
}
short less(short a, short b) {              //проверка на меньше
    unsigned int e1 = 0;
    e1 = (a+(a*a+b*b+1))/(b+(a*a+b*b+1));
    return check_zero(e1);
}
int main() {
    return 0;
}
