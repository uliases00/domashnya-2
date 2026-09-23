#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	float div, chem, sak, kor, kart, dog;
	float N, V;
	//float bag, dopB, dopR, OBdop;

	printf("Введите вес дивана:\n");
	scanf("%f", &div);

	printf("Введите вес чемодана:\n");
	scanf("%f", &chem);

	printf("Введите вес саквояжа:\n");
	scanf("%f", &sak);

	printf("Введите вес корзинки:\n");
	scanf("%f", &kor);

	printf("Введите вес картонки:\n");
	scanf("%f", &kart);

	printf("Введите вес собаки:\n");
	scanf("%f", &dog);

	printf("Введите стоимость 1 кг лишнего багажа N:\n");
	scanf("%f", &N);

	printf("Введите стоимость 1 кг лишней ручной клади V:\n");
	scanf("%f", &V);

	return 0;
}