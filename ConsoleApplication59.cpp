// ConsoleApplication59.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h" 
#include <fstream> 
#include <iostream> 
#include <cstring> 
using namespace std;//пространство имен для файла1 и фа ла2 
int _tmain(int argc, _TCHAR* argv[])
{
	char str1[10][50];
	char str2[10][50];

	ifstream file1("file1.txt"); // открыли файл1 для чтения 
	ifstream file2("file2.txt"); // открыли файл2 для чтения 


								 //_________читаем файл1________________________________ 
	{ int i = 0;
	while (file1) {
		const int max_lenght = 50;
		do {
			file1.getline(str1[i], 50);
			i++;
		} while (!file1.eof());
	}
	file1.close();
	}


	//_________читаем файл2_________________________________ 
	{ int i = 0;
	while (file2) {
		const int max_lenght = 50;
		do {
			file2.getline(str2[i], 50);
			i++;
		} while (!file2.eof());
	}
	file2.close();
	}


	//__________просто выводим содержание файла1_______________________________ 
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			printf_s("%c", str1[j][i]);
		} printf_s("\n");
	} printf_s("\n");


	//___________содержание файла2______________________________ 
	for (int j = 0; j < 3; j++) {
		for (int i = 0; i < 3; i++) {
			printf_s("%c", str2[j][i]);
		} printf_s("\n");
	} printf_s("\n");


	//_____________находим различия в строка файла1 с файлом 2____________________________ 
	for (int i = 0; i < 3; i++) {
		if ((strcmp(str1[i], str2[i]) > 0) || strcmp(str1[i], str2[i]) < 0) {
			printf_s("file1.txt %d ", i + 1);
			for (int j = 0; j < 3; j++) {
				printf_s("%c", str1[i][j]);
			}printf_s("\n");
		}
	}printf_s("\n");


	//_____________находим различия в строка файла2 с файлом 1____________________________ 
	for (int i = 0; i < 3; i++) {
		if ((strcmp(str2[i], str1[i]) > 0) || strcmp(str2[i], str1[i]) < 0) {
			printf_s("file2.txt %d ", i + 1);
			for (int j = 0; j < 3; j++) {
				printf_s("%c", str2[i][j]);
			}printf_s("\n");
		}
	}printf_s("\n");
	//_________________________________________ 
	system("pause");
	return 0;
}