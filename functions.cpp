#include "Header.h"

void two_arrays(double num, int uah[], int pen[]) {
    long long int d = num * 100;
    int i = 9;
    int j = 9;
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

void rename(double num, const int arr[]) {
	bool notNull = false;
	if (num == 0) {
		printf("нуль ");
		return;
	}
	for (int i = 0; i < 10; i++) {
		if (!arr[i] && !notNull) {
			notNull = true;
			if (arr[0])
				i--;
			continue;
		}
		if (!i) {
			switch (arr[i]) {
			case 1: printf("один "); break;
			case 2: printf("два "); break;
			}
			if (!arr[i])
				printf("");
			else if (arr[i] == 1)
				printf("мiльярд ");
			else
				printf("мiльярди ");
		}
		if (i == 1 || i == 4 || i == 7) {
			switch (arr[i]) {
			case 1: printf("сто "); break;
			case 2: printf("двiстi "); break;
			case 3: printf("триста "); break;
			case 4: printf("чотириста "); break;
			case 5: printf("п'ятсот "); break;
			case 6: printf("шiстсот "); break;
			case 7: printf("сiмсот "); break;
			case 8: printf("вiсiмсот "); break;
			case 9: printf("дев'ятсот "); break;
			}
			if (!arr[i + 1] && !arr[i + 2]) {
				if (!arr[i])
					printf("");
				else if (i == 1)
					printf("мiльйонiв ");
				else if (i == 4)
					printf("тисяч ");
			}
		}
		else if (i == 2 || i == 5 || i == 8) {
			if (arr[i] == 1) {
				switch (arr[i + 1]) {
				case 0: printf("десять "); break;
				case 1: printf("одинадцять "); break;
				case 2: printf("дванадцять "); break;
				case 3: printf("тринадцять "); break;
				case 4: printf("чотирнадцять "); break;
				case 5: printf("п'ятнадцять "); break;
				case 6: printf("шiстнадцять "); break;
				case 7: printf("сiмнадцять "); break;
				case 8: printf("вiсiмнадцять "); break;
				case 9: printf("дев'ятнадцять "); break;
				}
				if (i == 2)
					printf("мiльйонiв ");
				else if (i == 5)
					printf("тисяч ");
			}
			else if (arr[i] != 1) {
				switch (arr[i]) {
				case 2: printf("двадцять "); break;
				case 3: printf("тридцять "); break;
				case 4: printf("сорок "); break;
				case 5: printf("п'ятдесят "); break;
				case 6: printf("шiстдесят "); break;
				case 7: printf("сiмдесят "); break;
				case 8: printf("вiсiмдесят "); break;
				case 9: printf("дев'яносто "); break;
				}
				if (!arr[i + 1]) {
					if (!arr[i])
						printf("");
					else if (i == 2)
						printf("мiльйонiв ");
					else if (i == 5)
						printf("тисяч ");
				}
				else {
					switch (arr[i + 1]) {
					case 1: {
						if (i + 1 == 6 || i == 9)
							printf("одна ");
						else
							printf("один ");
					} break;
					case 2: {
						if (i + 1 == 6 || i + 1 == 9)
							printf("двi ");
						else
							printf("два ");
					} break;
					case 3: printf("три "); break;
					case 4: printf("чотири "); break;
					case 5: printf("п'ять "); break;
					case 6: printf("шiсть "); break;
					case 7: printf("сiм "); break;
					case 8: printf("вiсiм "); break;
					case 9: printf("дев'ять "); break;
					}

					if (i == 2) {
						if (!arr[i + 1])
							printf("");
						else if (arr[i + 1] == 1)
							printf("мiльйон ");
						else if (arr[i + 1] == 2 || arr[i + 1] == 3 || arr[i + 1] == 4)
							printf("мiльйони ");
						else
							printf("мiльйонiв ");
					}
					else if (i == 5) {
						if (!arr[i + 1])
							printf("");
						else if (arr[i + 1] == 1)
							printf("тисяча ");
						else if (arr[i + 1] == 2 || arr[i + 1] == 3 || arr[i + 1] == 4)
							printf("тисячi ");
						else
							printf("тисяч ");
					}
				}
			}
		}
	}
}