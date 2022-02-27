#include<stdio.h>
#include<time.h>
#pragma
#pragma warning(disable : 4996)
int main() 
{
	printf("Enter the year you were born: ");
	int year, age = 0, namhientai;
	scanf_s("%d", &year);
	time_t t = time(0); // reset time
	struct tm *Now = localtime(&t); //struct tm chua dl ve time. *Now la 1 dang con tro tro vao time trong may tinh cua ta. 
	namhientai = Now->tm_year + 1900;//now goc la trc nhung nam 1900 nen de bu lai thi phai cong bu them 1900 de tinh ra nam hien tai.
	if (year < namhientai && year > 0) {
		age = namhientai - year;
	}
	printf("You were born in %d and you are %d years old", year, age);
}