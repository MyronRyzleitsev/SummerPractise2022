/**
* @file SummerPractise2022
* @author Ризлейцев М.Р., гр. 515а, варіант 33
* @date 12 липня 2022
* @brief Практика
*
* Розробити програму, що переводить суму, задану у вигляді числа з плаваючою комою, в текст.
*/

#include "Header.h"

int main() {

    setlocale(LC_ALL, "");
    float num;
    scanf_s("%f", &num);
    while (true) {

        if (num < 0) {
            printf("Вы ввели некорректное число");
        }
        else {
            printf("%f", num);



            break;
        }
    }

    return 0;
}