/**
* @file SummerPractise2022
* @author Ризлейцев М.Р., гр. 515а, варіант 33
* @date 12 липня 2022
* @brief Практика
*
* Розробити програму, що переводить суму, задану у вигляді числа з плаваючою комою, в текст.
*/

#include "Header.h"

void two_arrays(float digit, int uah[], int pen[]) {
    long long int d = digit * 100;
    int i = 9;
    int j = 1;
    int k = 0;
    while (i >= 0) {
        if (!d)
            break;
        if (k >= 2) {
            uah[i] = d % 10;
            i--;
        }
        else {
            pen[j] = d % 10;
            k++;
            j--;
        }
        d /= 10;
    }
    return;
}



int main() {

    setlocale(LC_ALL, "rus");

    int pen[2] = { 0 };
    int uah[10] = { 0 };
    float num;

    while (true) {
        scanf_s("%f", &num);

        if (num < 0) {
            printf("Вы ввели некорректное число\n");
            system("pause");
            system("cls");
        }
        else {
            two_arrays(num, uah, pen);
            for (int i = 0; i < 10; i++)
                printf("%d ", uah[i]);
            printf("\n");
            for (int j = 0; j < 2; j++)
                printf("%d ", pen[j]);
            break;
        }
    }

    return 0;
}