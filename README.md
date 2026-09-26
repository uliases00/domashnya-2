<h1>Домашнее задание к работе 2</h1>
<h1>Вариант 28</h1>
<h2>Условие задачи</h2>
Дама сдавала в багаж: диван, чемодан, саквояж, корзину, картонку и маленькую собачонку. При регистрации в аэропорту каждая вещь была взвешена (вес каждой в квитанции указан). Бесплатный провоз - 20 кг багажа и 5 кг ручной клади. Определить сколько придется даме доплатить за провоз вещей, если за каждый лишний 1 кг багажа нужно платить N рублей, за 1 кг ручной клади - V рублей. Собачку в багажное отделение нельзя сдавать, так как там холодно.
<h2>Алгооритм и блок схема</h2>
1)Начало<br>
2)Ввод переменных div, chem, sak, kor, kart, dog, bag, dopB, dopR, OBdop, N и V<br>
ㅤㅤdiv - диван<br>
    chem - чемодан<br>
    sak - саквояж<br>
    kor - корзина<br>
    kart - картонка<br>
    dog - собачка<br>
    bag - багаж<br>
    dopB - доплата за багаж<br>
    dopR - доплата за ручную кладь<br>
    OBdop - общая доплата<br>
    N - <br>
    V - <br>
3)Процесс решения по формуле<br>
ㅤㅤbag = div + chem + sak + kor + kart + dog<br>
    dopB = (bag - 20) * N<br>
    dopR = (dog - 5) * V<br>
    OBdop = dopB + dopR<br>
4)Вывод результата<br>
5)Конец<br>
<h2>Диаграма</h2>
<img width="98" height="301" alt="image" src="https://github.com/temk228/homework-lab2/blob/main/%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0.png" />
<h2>Реализация программы</h2>
#define _CRT_SECURE_NO_WARNINGS<br>
#include <locale.h><br>
#include <stdio.h><br>

int main()<br>
{<br>
	setlocale(LC_CTYPE, ".UTF-8");<br>

	float div, chem, sak, kor, kart, dog;<br>
	float N, V;<br>
	float bag, dopB, dopR, OBdop;<br>

	puts("Введите вес дивана:");<br>
	scanf("%f", &div);<br>
	printf("Введено число %f\n", div);<br>

	puts("Введите вес чемодана:");<br>
	scanf("%f", &chem);<br>
	printf("Введено число %f\n", chem);<br>

	puts("Введите вес саквояжа:");<br>
	scanf("%f", &sak);<br>
	printf("Введено число %f\n", sak);<br>

	puts("Введите вес корзинки:");<br>
	scanf("%f", &kor);<br>
	printf("Введено число %f\n", kor);<br>

	puts("Введите вес картонки:");<br>
	scanf("%f", &kart);<br>
	printf("Введено число %f\n", kart);<br>

	puts("Введите вес собаки:");<br>
	scanf("%f", &dog);<br>
	printf("Введено число %f\n", dog);<br>

	puts("Введите стоимость 1 кг лишнего багажа N:");<br>
	scanf("%f", &N);<br>
	printf("Введено число %f\n", N);<br>

	puts("Введите стоимость 1 кг лишней ручной клади V:");<br>
	scanf("%f", &V);<br>
	printf("Введено число %f\n", V);<br>

	puts("ВАЖНО! Собачку нельзя направлять в багажное помещение, так как там холодно!");<br>

	bag = div + chem + sak + kor + kart + dog;<br>

	if (bag > 20)<br>
	{<br>
		dopB = (bag - 20) * N;<br>
	}<br>

	else<br>
	{<br>
		dopB = 0;<br>
	}<br>

	if (dog > 5)<br>
	{<br>
		dopR = (dog - 5) * V;<br>
	}<br>

	else<br>
	{<br>
		dopR = 0;<br>
	}<br>

	OBdop = dopB + dopR;<br>

	printf("\nВес багажа: %.2f кг\n", bag);<br>
	printf("\nВес ручной клади: %.2f кг\n", dog);<br>
	printf("\nДоплата за багаж: %.2f руб\n", dopB);<br>
	printf("\nДоплата за ручную кладь: %.2f руб\n", dopR);<br>
	printf("\nОбщая доплата: %.2f руб\n", OBdop);<br>

	return 0;<br>
}<br>
<h2>Результат работы программы</h2><br>
исходные данные:<br>
бесплатный провоз 20 кг багажа и 5 кг ручной клади<br>
    
вес багажа, вес ручной клади, доплата за багаж, доплата за ручную кладь, общая доплата высчитываются по формулам указанным выше и данным, вписанными в ручную/с<br>
длина шага L: 80.0 см<br>
<h2>Информация о разработчике</h2>
Черкасова Ульяна бТИИ-261<br>
