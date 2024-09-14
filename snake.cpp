#include <iostream>
#include <windows.h>

bool invent(bool a) {                       //инвентирование
	return (a * -1 + 1);
}
bool myor(bool a, bool b) {                 //или
	return invent(invent(a) * invent(b));
}
bool check_zero(short a) {                  //проверка на ноль
	unsigned int e1 = 0;
	unsigned int e2 = 0;
	e1 = (a * a + 1) / 1;
	e2 = 1 / (a * a + 1);
	return e1 * e2;
}
bool equals(short a, short b) {             //проверка на равенство
	unsigned int e1 = 0;
	unsigned int e2 = 0;
	e1 = (a + (a * a + b * b + 1)) / (b + (a * a + b * b + 1));
	e2 = (b + (a * a + b * b + 1)) / (a + (a * a + b * b + 1));
	return e1 * e2;
}
bool more(short a, short b) {               //проверка на больше, в случае равенства возвращает 0
	unsigned int e1 = 0;
	e1 = (b + (a * a + b * b + 1)) / (a + (a * a + b * b + 1));
	return check_zero(e1);
}
bool less(short a, short b) {               //проверка на меньше, в случае равенства возвращает 0
	unsigned int e1 = 0;
	e1 = (a + (a * a + b * b + 1)) / (b + (a * a + b * b + 1));
	return check_zero(e1);
}
unsigned int order = 0;

void assignment(short* a, short b, unsigned int c) {       	//присваивание нового значения переменной A, значения B, во время этапа C
	*a = ((*a) * (invent(equals(order, c)))) + (b * equals(order, c));
}
void assignment(unsigned int* a, unsigned int b, unsigned int c) {       	//присваивание нового значения переменной A, значения B, во время этапа C
	*a = ((*a) * (invent(equals(order, c)))) + (b * equals(order, c));
}
void assignment(bool* a, bool b, unsigned int c) {       	//присваивание нового значения переменной A, значения B, во время этапа C
	*a = ((*a) * (invent(equals(order, c)))) + (b * equals(order, c));
}
void mywhile(bool a, unsigned int b, unsigned int c) {    				//цикл, который итерируется пока A правда, этап цикла B, во время этапа C
	order = (order * invent(myor(equals(order, b), equals(order, c)))) + ((b * a + c * invent(a)) * myor(equals(order, b), equals(order, c)));
}
void myif(bool a, unsigned int b, unsigned int c) {    				//условие, которое срабатывает если A правда, этап условия B, во время этапа C
	order = (order * invent(equals(order, c))) + ((b * a + c * invent(a)) * equals(order, c));
}
void assignment(bool a, short* b, short c, unsigned int d) {	//присваивание нового значения переменной B, значения C, если A правда, во время этапа D
	assignment(b, invent(a) * (*b) + a * c, d);
}
void assignment(bool a, bool* b, bool c, unsigned int d) {	//присваивание нового значения переменной B, значения C, если A правда, во время этапа D
	assignment(b, invent(a) * (*b) + a * c, d);
}
char logo[322] = { ' ','/','@','@','@','@','@','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','@','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\n',
					'|','@','|','\"','\"','\"','|','@','|',' ',' ','U','n','c','o','n','d','i','t','i','o','n','a','l',' ',' ',' ','|','@','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\n',
					' ','\\','@','\\',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|','@','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\n',
					' ',' ','\"','@','@','@',',',' ',' ','|','@','|','/','@','@',',',' ',' ',' ',',','g','@','@','@','g',',',' ','|','@','|',' ',',','g','@','@','/',' ',',','g','\"','\"','\"','g',',',' ','\n',
					' ',' ',' ',' ',' ','\\','@','\\',' ','|','@','@','@','@','@','@','\\',' ','"','"',' ',' ',' ','J','|','@','|','|','@','@','@','@','@','*','*',' ','/','@','L',',',',',',','J','@','\\','\n',
					'|','@','|','_','_','_','|','@','|','|','@','@','/',' ','\\','@','@','|','/','@','P','\"','\"','\"','T','@','|','|','@','@','@','@','@','g',',',' ','\\','@','L',',','_','_','_',',',',','\n',
					' ','\\','@','@','@','@','@','/',' ','|','@','|',' ',' ',' ','|','@','|','\\','@','L',',',',','J','\\','@','|','|','@','|',' ','\"','*','@','@','\\',' ','\"','*','@','@','@','*','\"',' ','\n' };
short field[49][49] = {};
short snakeX = 19;
short snakeY = 24;
bool direction0 = 1;
bool direction1 = 0;
short i = 0;
short j = 0;
short apple = 0;
short amountOfVoid = 2399;
short score = 0;
bool true0 = 0;
short mytime = 0;
short old = 1;
bool keyEnter = 0;
bool keyA = 0;
bool keyD = 0;
bool keyS = 0;
bool keyW = 0;
int main() {
	field[19][24] = 1;
	field[29][24] = -1;
	srand(int(&true0));
sh73:
	keyEnter = GetAsyncKeyState(VK_RETURN);
	keyA = GetAsyncKeyState('A');
	keyD = GetAsyncKeyState('D');
	keyS = GetAsyncKeyState('S');
	keyW = GetAsyncKeyState('W');
	mywhile(invent(keyEnter), 1, 0);
		assignment(&true0, true, 1);
	mywhile(true0, 2, 0);
		mywhile(less(mytime, 20), 20, 2);
			Sleep(50 * equals(order, 20));
			myif(equals(direction1, 0), 200, 20);
				myif(keyS, 2000, 200);
					assignment(&direction0, false, 2000);
					assignment(&direction1, true, 2000);
					assignment(&mytime, 20, 2000);
					assignment(&order, 200, 2000);
				myif(keyW, 2001, 200);
					assignment(&direction0, true, 2001);
					assignment(&direction1, true, 2001);
					assignment(&mytime, 20, 2001);
					assignment(&order, 200, 2001);
				assignment(&order, 20, 200);
			myif(equals(direction1, 1), 201, 20);
				myif(keyA, 2010, 201);
					assignment(&direction0, false, 2010);
					assignment(&direction1, false, 2010);
					assignment(&mytime, 20, 2010);
					assignment(&order, 201, 2010);
				myif(keyD, 2011, 201);
					assignment(&direction0, true, 2011);
					assignment(&direction1, false, 2011);
					assignment(&mytime, 20, 2011);
					assignment(&order, 201, 2011);
				assignment(&order, 20, 201);

			mywhile(less(j, 49), 202, 20);
				mywhile(less(i, 49), 2020, 202);
					std::cout << char((short(' ') * equals(field[i][j], 0) + short('@') * equals(field[i][j], -1) + short('H') * more(field[i][j], 0)) * equals(order, 2020));
					assignment(&i, i + 1, 2020);
				std::cout << char((short('\n')) * equals(order, 202));
				assignment(&j, j + 1, 202);
				assignment(&i, 0, 202);
			assignment(&j, 0, 20);

			/* mywhile(less(i, 2450), 203, 20);
			 	std::cout << char((short('\b'))*equals(order, 203));
			 	assignment(&i, i+1, 203);
			 assignment(&i, 0, 20);*/

			assignment(&mytime, mytime + 1, 20);
		assignment(&mytime, 0, 2);
		assignment(&snakeX, snakeX + direction0 * invent(direction1), 2);
		assignment(&snakeY, snakeY + direction0 * direction1, 2);

		assignment(more(field[snakeX][snakeY], 0), &true0, false, 2);

	    myif(equals(field[snakeX][snakeY], 0), 21, 2);
	        mywhile(less(j, 49), 210, 21);
	            mywhile(less(i, 49), 2100, 210);
	                assignment(more(field[i][j], 0), &(field[i][j]), field[i][j] - 1, 2100);
	                assignment(&i, i + 1, 2100);
	            assignment(&j, j + 1, 210);
	            assignment(&i, 0, 210);
	        assignment(&j, 0, 21);
	        assignment(&(field[snakeX][snakeY]), old, 21);
	        assignment(&order, 2, 21);

	    myif(equals(field[snakeX][snakeY], -1), 22, 2);
	        assignment(&apple, rand() % amountOfVoid, 22);
	        mywhile(less(j, 49), 220, 22);
	            mywhile(less(i, 49), 2200, 220);
	                myif(equals(field[i][j], 0), 22000, 2200);
	                    myif(equals(apple, 0), 220000, 22000);
	                        assignment(&(field[i][j]), -1, 220000);
	                        assignment(&i, 48, 220000);
                            assignment(&j, 48, 220000);
                            assignment(&order, 22000, 220000);
	                    assignment(invent(equals(apple, 0)), &apple, apple - 1, 22000);
	                    assignment(&order, 2200, 22000);
	                assignment(&i, i + 1, 2200);
	            assignment(&j, j + 1, 220);
	            assignment(&i, 0, 220);
	        assignment(&j, 0, 22);
	        assignment(&amountOfVoid, amountOfVoid - 1, 22);
            assignment(&old, old + 1, 22);
            assignment(&(field[snakeX][snakeY]), old, 22);
            assignment(&order, 2, 22);
	assignment(&snakeX, 19, 0);
	assignment(&snakeY, 24, 0);
	assignment(&direction0, true, 0);
	assignment(&direction1, false, 0);
	assignment(&apple, 0, 0);
	assignment(&amountOfVoid, 2399, 0);
	assignment(&old, 1, 0);

	goto sh73;
}