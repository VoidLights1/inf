#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int arrlengh() {
	int len, c, tlen;
	scanf("%d", &len);
	if (len < 0 || len>15) {
		printf("Длинна массива содержет недопустимое значение, введите другое значение: ");
		return arrlengh();
	}
	else {
		return len;
	}
}
void arrelements(int arr[], int size){
	for(int i=0; i<size; i++){
		printf("Введите %d элемент: ", i);
		scanf("%d", &arr[i]);
	}
	for (int i=0; i<size; i++){
		printf("%d\n", arr[i]);
	}
}
int main() {
	int A[15],len;
	setlocale(LC_ALL, "Russian");
	printf("Введите длинну массива: ");
	len = arrlengh();
	arrelements(A,len);
}