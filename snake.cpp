#include <iostream>
#include <windows.h>

short invent(short a) {                     //инвентирование
    return (a*-1+1);
}
short ifor(short a, short b) {              //или
    return invent(invent(a)*invent(b));    
}
short check_zero(short a) {                 //проверка на ноль
    short e1 = 0;
    short e2 = 0;
    e1 = (a*a+1)/1;
    e2 = 1/(a*a+1);
    return e1*e2;
}
short equals(short a, short b, short c) {            //проверка
    short e1 = 0;
    short e2 = 0;
    e1 = (a/(b * invent(check_zero(b))  +  1 * check_zero(b))) * invent(ifor(check_zero(a), check_zero(b))) + check_zero(b);
    e2 = (b/(a * invent(check_zero(a))  +  1 * check_zero(a))) * invent(ifor(check_zero(a), check_zero(b))) + check_zero(a);
    return e1*e2*invent(opposite(a, b));
}
int main() {
    std::cout << equals(1, 45646);
    std::cout << equals(0, 0);
    std::cout << equals(-1, 0);
    std::cout << equals(-1, -89);
    std::cout << equals(0, 1);
    std::cout << equals(-1 , -1);
    std::cout << equals(0, -1);
    std::cout << equals(98, -98);
    return 0;
}
