﻿// ILYUXA.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <math.h>
#include <time.h>//Используется для правильной работы рандома(рассчитывается на основе времени пк)
#define m 15//заменяет переменную m(в программе) на число стоящее за ней
using namespace std;
//============================================================================
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//ВАЖНО: не рекомендую использовать рандом, так как он сложен в описании.
//#define в начале ограничивает программу, если хочешь сделать ее более
//функциональной, надо вводить это значение в самой программе, а для этого
//желательно использовать динамический массив.

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//============================================================================
int main()
{
	srand(time(0));//Для того чтобы программа видела время пк, иначе рандом будет создавать одинаковые значения(если не используешь рандом, то удаляй эту стороку)
	int a[m][m];//Описание
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)//Ввод массива
		{
			a[i][j] = rand() % 10;//рандом или ручной ввод на след строке
			//cin >> a[i][j];
		}
		//Отделение от предыд строки при выводе
		//cout << endl;
		//Если используешь рандом удали ее
	}
	//=========================================================================
	//Вывод массива(нужо только для визуального проедставления массива при использовании рандомных значений)
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}// Если используешь ручной ввод, то убираешь этот модуль(от равно до равно)
	//========================================================================
	for (int i = 0; i < (m-1) / 2; i++)//определение ячеек лежащих выше главной диагонали
	{
		for (int j = i + 1; j < m - 1 - i; j++)
		{
			a[i][j] = 0;//Замена значений на 0
		}
	}
	cout << endl;
	for (int i = 0; i < m; i++)//Финальный вывод матрицы
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
}
