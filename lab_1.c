#include<stdio.h>	// подключение библиотеки stdio для ввода и вывода данных
#include<math.h>	// подключение библиотеки math для использвания мат функций


int main() {
	signed int x, y;	// объявление знаковых целочисленных x и y
	float z, a, b;	// объявление вещественных z, a и b
	printf("Input integer x: ");	// вывод фразы введите целочисленный х
	scanf_s("%d", &x);	// ввод значения х
	printf("Input integer y: ");	// вывод фразы введите целочисленный у 
	scanf_s("%d", &y);	// ввод значения у
	printf("Input z: ");	// вывод фразы введите z
	scanf_s("%f", &z);	// ввод значения z
	printf("x = %d\ny = %d\nz = %10.5e\n", x, y, z);	// построчный вывод значений x, y и z

	a = (3 + exp(y - 1)) / (float)(1 + (pow(x, 2) * (fabs(y - tan(z)))));	// формула для нахождения значения а

	b = 1 + fabs(y - x) + pow(y - x, 2) / 2 + pow(fabs(y - x), 3) / 3;	// формула для нахождения значения b

	printf("a = %-10.4f\n", a);	// вывод значения а
	printf("b = %-10.4f\n", b);	// вывод значения b

	if (x >= 0) {	// проверка знака у х
		printf("x_8 = %o\n", x);	// вывод х в восьмеричной системе счисления, если он положительный
	}
	else {
		printf("x_8 = -%o\n", abs(x));	// вывод х в восьмеричной системе счисления, если он отрицательный
	}
	printf("y_16 = %x", y);	// вывод у в шестнадцатеричной системе счисления

	return 0;
}
