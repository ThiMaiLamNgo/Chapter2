//nhap vao so luong va gia sau do tinh so tien phai tra va thue phai tra. biet tien = soluong*gia va thue = 10%tien.
#include<stdio.h>
#pragma
int main()
{
	int SL;
	float gia, tien = 0, thue;
	printf("Nhap so luong: ");
	scanf_s("%d", &SL);
	printf("Nhap gia: ");
	scanf_s("%f", &gia);
	// C1: Su dung toan tu 3 ngoi 
	SL > 0 ? tien = SL * gia : printf("Nhap sai du lieu");
	/*
	// C2: Su dung lenh if:
	if (SL > 0) {
		tien = SL * gia;
	}
	*/
	printf("Tong tien la  %d * %f =  %f\n", SL, gia, tien);
	printf("Thue phai tra la %f", tien * 0.1);
}