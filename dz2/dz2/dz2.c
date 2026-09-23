#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	float div, chem, sak, kor, kart, dog;
	float N, V;
	float bag, dopB, dopR, OBdop;

	puts("Введите вес дивана:");
	scanf("%f", &div);
	printf("Введено число %f\n", div);

	puts("Введите вес чемодана:");
	scanf("%f", &chem);
	printf("Введено число %f\n", chem);

	puts("Введите вес саквояжа:");
	scanf("%f", &sak);
	printf("Введено число %f\n", sak);

	puts("Введите вес корзинки:");
	scanf("%f", &kor);
	printf("Введено число %f\n", kor);

	puts("Введите вес картонки:");
	scanf("%f", &kart);
	printf("Введено число %f\n", kart);

	puts("Введите вес собаки:");
	scanf("%f", &dog);
	printf("Введено число %f\n", dog);

	puts("Введите стоимость 1 кг лишнего багажа N:");
	scanf("%f", &N);
	printf("Введено число %f\n", N);

	puts("Введите стоимость 1 кг лишней ручной клади V:");
	scanf("%f", &V);
	printf("Введено число %f\n", V);

	puts("ВАЖНО! Собачку нельзя направлять в багажное помещение, так как там холодно!");

	bag = div + chem + sak + kor + kart + dog;

	if (bag > 20)
	{
		dopB = (bag - 20) * N;
	}

	else
	{
		dopB = 0;
	}

	if (dog > 5)
	{
		dopR = (dog - 5) * V;
	}

	else
	{
		dopR = 0;
	}

	OBdop = dopB + dopR;

	printf("\nВес багажа: %.2f кг\n", bag);
	printf("\nВес ручной клади: %.2f кг\n", dog);
	printf("\nДоплата за багаж: %.2f руб\n", dopB);
	printf("\nДоплата за ручную кладь: %.2f руб\n", dopR);
	printf("\nОбщая доплата: %.2f руб\n", OBdop);

	return 0;
}