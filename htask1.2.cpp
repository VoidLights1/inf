#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "Russian");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char var_name[21];
    printf("Введите строку: ");

   fgets(var_name, sizeof(var_name),stdin);
   printf("Введённаяф строка: %s\n", var_name);
}