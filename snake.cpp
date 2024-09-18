#include <iostream>
#include <windows.h>

bool invent(bool a) {                       //инвентирование
	return (a*-1+1);
}
bool myor(bool a, bool b) {                 //или
	return invent(invent(a) * invent(b));
}
bool check_zero(int a) {                  	//проверка на ноль
	return int((a*a+1)/1) * int(1/(a*a+1));
}
bool equals(int a, int b) {             	//проверка на равенство
	return int((a+(a*a+b*b+1))/(b+(a*a+b*b+1))) * int((b+(a*a+b*b+1))/(a+(a*a+b*b+1)));
}
bool more(int a, int b) {               	//проверка на больше, в случае равенства возвращает 0
	return check_zero(int((b+(a*a+b*b+1))/(a+(a*a+b*b+1))));
}
bool less(int a, int b) {               	//проверка на меньше, в случае равенства возвращает 0
	return check_zero(int((a+(a*a+b*b+1))/(b+(a*a+b*b+1))));
}
int order = 0;				//этап цикла

template <typename Y, typename Z>
void assignment(Y &a, Z b, int c) {			//присваивание нового значения переменной A, значения B, во время этапа C
	a = (a * (invent(equals(order, c)))) + (b * equals(order, c));
}
void mywhile(bool a, int b, int c) {		//цикл, который итерируется пока A правда, этап цикла B, во время этапа C
	order = (order * invent(myor(equals(order, b), equals(order, c)))) + ((b * a + c * invent(a)) * myor(equals(order, b), equals(order, c)));
}
void myif(bool a, int b, int c) {			//условие, которое срабатывает если A правда, этап условия B, во время этапа C
	order = (order * invent(equals(order, c))) + ((b * a + c * invent(a)) * equals(order, c));
}
template <typename Y, typename Z>
void myminiif(bool a, Y &b, Z c, int d) {	//присваивание нового значения переменной B, значения C, если A правда, во время этапа D
	assignment(b, invent(a) * b + a * c, d);
}
short field[25][25] = {};	//поле
short snakeX = 0;			//голова змеи
short snakeY = 0;
bool direction[]{0, 0};		//направление змеи
short old = 0;				//возраст змеи
short i = 0;				//для перечисления
short j = 0;
short apple = 0;			//параметры яблока
short amountOfVoid = 0;
short score = 0;			//очки
bool true0 = 0;				//для цикла
short mytime = 0;			//время
							//
char tlogo[] = " /@@@@@\\                   |@|               \n|@|\"\"\"|@|  Unconditional   |@|               \n \\@\\                       |@|               \n  \"@@@,  |@|/@@,   ,g@@@g, |@| ,g@@/ ,g\"\"\"g, \n     \\@\\ |@@@@@@\\ \"\"   J|@||@@@@@** /@L,,,J@\\\n|@|___|@||@@/ \\@@|/@P\"\"\"T@||@@@@@g, \\@L,___,,\n \\@@@@@/ |@|   |@|\\@L,,J\\@||@| \"*@@\\ \"*@@@*\" \n";
char tenter[] = "Press Enter to continue\n";
char tscore[] = "Score: ";
char tclear[] = "                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n                                                   \n";
char tnumber[] = {'0', '\0', '1', '\0', '2', '\0', '3', '\0', '4', '\0', '5', '\0', '6', '\0', '7', '\0', '8', '\0', '9', '\0'};
char tfield[] = "                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n            @@@@                  GD              |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n                                                  |\n-------------------------------------------------- \n";
char tsnake[] = "@@";
char tapple[] = "GD";
char tspace[] = "  ";
char tn[] = "\n";

bool keyEnter = 0;			//управление
bool keyA = 0;
bool keyD = 0;
bool keyS = 0;
bool keyW = 0;

int main() {
	srand(int(true0));
	HANDLE consol = GetStdHandle(STD_OUTPUT_HANDLE);
sh73:

	assignment(direction[0], true, 0);								//установка по умолчанию
	assignment(direction[1], false, 0);
	assignment(snakeX, 7, 0);
	assignment(snakeY, 12, 0);
	assignment(apple, 0, 0);
	assignment(amountOfVoid, 622, 0);
	assignment(old, 2, 0);
	mywhile(less(j, 25), 3, 0);
		mywhile(less(i, 25), 30, 3);
			assignment((field[i][j]), 0, 30);
			assignment(i, i + 1, 30);
		assignment(j, j + 1, 3);
		assignment(i, 0, 3);
	assignment(j, 0, 0);
	assignment((field[6][12]), 1, 0);
	assignment((field[7][12]),  2, 0);
	assignment((field[17][12]), -1, 0);

	std::cout << tclear + 1352*invent(equals(order, 0));			//вывод главного меню
	SetConsoleCursorPosition(consol, {0, 0});
	std::cout << tlogo + 322*invent(equals(order, 0));
	std::cout << tscore + 7*invent(equals(order, 0));
	std::cout << tnumber + 19*invent(equals(order, 0)) + (short(score/100))*2*equals(order, 0);
	std::cout << tnumber + 19*invent(equals(order, 0)) + (short(score%100/10))*2*equals(order, 0);
	std::cout << tnumber + 19*invent(equals(order, 0)) + (short(score%100%10))*2*equals(order, 0);
	std::cout << tn + 1*invent(equals(order, 0));
	std::cout << tenter + 24*invent(equals(order, 0));
	SetConsoleCursorPosition(consol, {0, 0});

	mywhile(invent(keyEnter), 1, 0);								//главное меню
		assignment(true0, true, 1);
	std::cout << tfield + 1352*invent(equals(order, 0));
	assignment(score, 0, 0);
	SetConsoleCursorPosition(consol, {0, 0});
	mywhile(true0, 2, 0);											//главный цикл

		mywhile(less(mytime, 100), 20, 2);							//взаимодействие с игроком

			keyEnter = GetAsyncKeyState(VK_RETURN);
			keyA = GetAsyncKeyState('A');
			keyD = GetAsyncKeyState('D');
			keyS = GetAsyncKeyState('S');
			keyW = GetAsyncKeyState('W');
	
			myif(equals(direction[1], false), 200, 20);
				myif(keyS, 2000, 200);
					assignment(direction[0], false, 2000);
					assignment(direction[1], true, 2000);
					assignment(order, 2, 2000);
				myif(keyW, 2001, 200);
					assignment(direction[0], true, 2001);
					assignment(direction[1], true, 2001);
					assignment(order, 2, 2001);
				assignment(order, 20, 200);
			myif(equals(direction[1], true), 201, 20);
				myif(keyA, 2010, 201);
					assignment(direction[0], false, 2010);
					assignment(direction[1], false, 2010);
					assignment(order, 2, 2010);
				myif(keyD, 2011, 201);
					assignment(direction[0], true, 2011);
					assignment(direction[1], false, 2011);
					assignment(order, 2, 2011);
				assignment(order, 20, 201);
			assignment(mytime, mytime+1, 20);

		assignment(mytime, 0, 2);									//смена направления
		assignment(snakeX, snakeX + ((-1)*invent(direction[0]) + direction[0]) * invent(direction[1]), 2);
		assignment(snakeY, snakeY + ((-1)*direction[0] + invent(direction[0])) * direction[1], 2);
		myminiif(equals(snakeX, -1), snakeX, snakeX+25, 2);
		myminiif(equals(snakeX, 25), snakeX, snakeX-25, 2);
		myminiif(equals(snakeY, -1), snakeY, snakeY+25, 2);
		myminiif(equals(snakeY, 25), snakeY, snakeY-25, 2);

		SetConsoleCursorPosition(consol, {snakeX*2*equals(order, 2), snakeY*equals(order, 2)});
		std::cout << tsnake + 2*invent(equals(order, 2));
		SetConsoleCursorPosition(consol, {0, 0});

		assignment(apple, rand() % amountOfVoid, 2);				//перемещение змейки
		mywhile(less(j, 25), 21, 2);
			mywhile(less(i, 25), 210, 21);
				myif(equals(field[snakeX][snakeY], -1), 2100, 210);	//новое яблоко
					myif(equals(field[i][j], 0), 21000, 2100);
						myif(equals(apple, 0), 210000, 21000);
							assignment((field[i][j]), -1, 210000);
							SetConsoleCursorPosition(consol, {i*2*equals(order, 210000), j*equals(order, 210000)});
							std::cout << tapple + 2*invent(equals(order, 210000));
							SetConsoleCursorPosition(consol, {0, 0});
							assignment(score, score+1, 210000);
							assignment(i, 0, 210000);
							assignment(order, 2, 210000);
						myminiif(invent(equals(apple, 0)), apple, apple - 1, 21000);
						assignment(order, 2100, 21000);
					assignment(order, 210, 2100);
				myif(more(field[snakeX][snakeY], -1), 2101, 210);	//просто перемещение
					myif(equals(field[i][j], 1), 21010, 2101);
						SetConsoleCursorPosition(consol, {i*2*equals(order, 21010), j*equals(order, 21010)});
						std::cout << tspace + 2*invent(equals(order, 21010));
						SetConsoleCursorPosition(consol, {0, 0});
						assignment(order, 2101, 21010);					
					myminiif(more(field[i][j], 0), (field[i][j]), field[i][j] - 1, 2101);
					assignment(order, 210, 2101);
				assignment(i, i + 1, 210);
			assignment(j, j + 1, 21);
			assignment(i, 0, 21);
		assignment(j, 0, 2);

		myminiif(more(field[snakeX][snakeY], 0), true0, false, 2);
		myminiif(equals(field[snakeX][snakeY], 0), (field[snakeX][snakeY]), old, 2);
		myif(equals(field[snakeX][snakeY], -1), 22, 2);
			assignment(apple, 0, 22);
			assignment(amountOfVoid, amountOfVoid - 1, 22);
			assignment(old, old + 1, 22);
			assignment((field[snakeX][snakeY]), old, 22);
			assignment(order, 2, 22);
		SetConsoleCursorPosition(consol, {snakeX*2*equals(order, 2), snakeY*equals(order, 2)});
		std::cout << tsnake + 2*invent(equals(order, 2));
		SetConsoleCursorPosition(consol, {0, 0});

	goto sh73;
}