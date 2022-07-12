/*
* @file SummerPractise2022
* @author Ризлейцев М.Р., гр. 515а, варіант 33
* @date 12 липня 2022
* @brief Практика
*
* Розробити програму, що переводить суму, задану у вигляді числа з плаваючою комою, в текст українською мовою.
*/

#include "Header.h"

int main() {

	setlocale(LC_ALL, "rus");

	int pen[10] = { 0 };
	int uah[10] = { 0 };
	float num;

	while (true) {

		printf("Введiть число для переводу\n");
		scanf_s("%f", &num);

		if (num < 0) {
			printf("Ви ввели некорректне число\n");
			system("pause");
			system("cls");
		}
		else {
			two_arrays(num, uah, pen);
			rename(num, uah);
			if (uah[9] == 1)
				printf("гривня ");
			else if (uah[9] == 2 || uah[9] == 3 || uah[9] == 4)
				printf("гривнi ");
			else
				printf("гривень ");
			rename(num, pen);
			if (pen[9] == 1)
				printf("копiйка ");
			else if (pen[9] == 2 || pen[9] == 3 || pen[9] == 4)
				printf("копiйки ");
			else
				printf("копiйок ");
			break;
		}
	}

	return 0;
}