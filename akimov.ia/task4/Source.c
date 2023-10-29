#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

void ProductName(int a)
{
	if (a == 0)
		printf("GeForce RTX 3060\n");
	else if (a == 1)
		printf("GeForce GTX 1660\n");
	else if (a == 2)
		printf("GeForce RTX 4060\n");
	else if (a == 3)
		printf("GeForce GTX 1650\n");
	else if (a == 4)
		printf("AMD Radeon RX 6600\n");
	else if (a == 5)
		printf("GeForce RTX 3070 Ti\n");
	else if (a == 6)
		printf("GeForce RTX 4090\n");
	else if (a == 7)
		printf("GeForce RTX 4070 Ti\n");
	else if (a == 8)
		printf("AMD Radeon RX 6700\n");
	else if (a == 9)
		printf("GeForce RTX 4070\n");

}

int ProductPrice(int a)
{
	int price;
	if (a == 0)
		price = 34000;
	else if (a == 1)
		price = 26000;
	else if (a == 2)
		price = 40000;
	else if (a == 3)
		price = 16000;
	else if (a == 4)
		price = 27000;
	else if (a == 5)
		price = 62000;
	else if (a == 6)
		price = 184000;
	else if (a == 7)
		price = 96000;
	else if (a == 8)
		price = 45000;
	else if (a == 9)
		price = 78000;
	return price;
}

float Discount()
{
	float skidka;
	int a;
	do
	{
		a = 5 + rand() % 46;
	} while (a % 5 != 0);
	skidka = 1 - a / 100.;
	return skidka;
}

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int barcode, flag, choice, discount1, total_price_without_discount = 0, total_price_with_discount = 0, total_discount = 0, i = 0;
	float discount;
	int quantity[10] = { 0 };
	printf("����� ���������� � ������� ���������! � ��� ���� �� ����� 10 ��������� � ��������� �� ��������, ��� � ������ � �����-�����"
		" �������������:\n");
	printf("1.GeForce RTX 3060 - 34000 ������/�� - 2735\n");
	printf("2.GeForce GTX 1660 - 26000 ������/�� - 5962\n");
	printf("3.GeForce RTX 4060 - 40000 ������/�� - 3933\n");
	printf("4.GeForce GTX 1650 - 16000 ������/�� - 9087\n");
	printf("5.AMD Radeon RX 6600 - 27000 ������/�� - 4352\n");
	printf("6.GeForce RTX 3070 Ti - 62000 ������/�� - 4727\n");
	printf("7.GeForce RTX 4090 - 184000 ������/�� - 2821\n");
	printf("8.GeForce RTX 4070 Ti - 96000 ������/�� - 6327\n");
	printf("9.AMD Radeon RX 6700 - 45000 ������/�� - 4341\n");
	printf("10.GeForce RTX 4070 - 78000 ������/�� - 3520\n\n");
	printf("������� �����-���� ���������������� ��� ������� � �� ����� ��������� ��� ������ ��� � ���!\n");
	printf("������ ��������������� �� ������ ����� ���������� �� 5 �� 50 ���������.\n\n");
	do
	{
		do
		{
			flag = 0;
			printf("������� �����-���: ");
			scanf("%d", &barcode);
			while (getchar() != '\n');
			if (barcode != 2735 && barcode != 5962 && barcode != 3933 && barcode != 9087 && barcode != 4352
				&& barcode != 4727 && barcode != 2821 && barcode != 6327 && barcode != 4341 && barcode != 3520)
			{
				flag = 1;
				printf("�� ����� ������������ �����-���!\n");
			}
		} while (flag);
		if (barcode == 2735)
		{
			quantity[0]++;
			printf("�� ������������� %d - GeForce RTX 3060 - %d ������/��\n", barcode, ProductPrice(0));
		}
		else if (barcode == 5962)
		{
			quantity[1]++;
			printf("�� ������������� %d - GeForce GTX 1660 - %d ������/��\n", barcode, ProductPrice(1));
		}
		else if (barcode == 3933)
		{
			quantity[2]++;
			printf("�� ������������� %d - GeForce RTX 4060 - %d ������/��\n", barcode, ProductPrice(2));
		}
		else if (barcode == 9087)
		{
			quantity[3]++;
			printf("�� ������������� %d - GeForce GTX 1650 - %d ������/��\n", barcode, ProductPrice(3));
		}
		else if (barcode == 4352)
		{
			quantity[4]++;
			printf("�� ������������� %d - AMD Radeon RX 6600 - %d ������/��\n", barcode, ProductPrice(4));
		}
		else if (barcode == 4727)
		{
			quantity[5]++;
			printf("�� ������������� %d - GeForce RTX 3070 Ti - %d ������/��\n", barcode, ProductPrice(5));
		}
		else if (barcode == 2821)
		{
			quantity[6]++;
			printf("�� ������������� %d - GeForce RTX 4090 - %d ������/��\n", barcode, ProductPrice(6));
		}
		else if (barcode == 6327)
		{
			quantity[7]++;
			printf("�� ������������� %d - GeForce RTX 4070 Ti - %d ������/��\n", barcode, ProductPrice(7));
		}
		else if (barcode == 4341)
		{
			quantity[8]++;
			printf("�� ������������� %d - AMD Radeon RX 6700 - %d ������/��\n", barcode, ProductPrice(8));
		}
		else if (barcode == 3520)
		{
			quantity[9]++;
			printf("�� ������������� %d - GeForce RTX 4070 - %d ������/��\n", barcode, ProductPrice(9));
		}
		do
		{
			flag = 0;
			printf("������� 0, ����� ��������� �������, ��� 1, ����� ���������� �������: ");
			scanf("%d", &choice);
			while (getchar() != '\n');
			if (choice != 0 && choice != 1)
				flag = 1;
		} while (flag);
	} while (choice);
	printf("������� ���������!\n\n");
	do
	{
		if (quantity[i] != 0)
		{
			discount = Discount();
			discount1 = discount * 100;
			discount1 = 100 - discount1;
			ProductName(i);
			printf("����: %d\n", ProductPrice(i));
			printf("����������: %d\n", quantity[i]);
			printf("����� ��������� �� ����� ��� ������: %d\n", quantity[i] * ProductPrice(i));
			printf("����� ��������� �� ����� � ������ ������ %d ���������: %.0f\n\n", discount1, (quantity[i] * ProductPrice(i) * discount));
			total_price_without_discount += quantity[i] * ProductPrice(i);
			total_price_with_discount += quantity[i] * ProductPrice(i) * discount;
			total_discount += discount1 * quantity[i] * ProductPrice(i) / 100;
		}
		i++;
	} while (i < 10);
	printf("����� ��������� �� ������ ��� ������: %d\n", total_price_without_discount);
	printf("��������� ������ �� ��� ������: %d\n", total_discount);
	printf("�������� ����� � ������: %d\n", total_price_with_discount);
	system("pause");
}