//Nhap ban kinh hinh tron tinh chu vi va dien tich
#include<stdio.h>
#include<math.h>

#pragma
void main()
{
	float bankinh;
	const float PI = 3.14;
	printf("Nhap vao ban dinh duong tron:\n");
	scanf_s("%f", &bankinh);
	printf("Chu vi hinh tron la %f\n", 2 * bankinh * PI);
	//Tinh dien tich theo cach 1. khong can khai bao thu vien toan hoc:
	printf("Dien tich hinh tron la %f\n", 2 * PI * bankinh * bankinh );
	// tinh dien tich c2 sd ham binh phuong bankinh khi do phai khai bao thu vien toan math.h 
	printf("Dien tich la: %f\n", 2 * PI * pow(bankinh, 2));
}