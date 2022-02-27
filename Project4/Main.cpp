//Nhap vao diem 3 mon toan ly hoa sau do nhap he so lan luot cua 3 mon do. sau do tinh diem trung binh cong.
#include<stdio.h>
#pragma
int main()
{
	int hs1, hs2, hs3;
	float toan, ly, hoa, tbc = 0;
	printf("Nhap vao diem cua cac mon toan, ly, hoa\n: ");
	scanf_s("%f %f %f", &toan, &ly, &hoa);
	printf("Nhap he so lan luot cua 3 mon toan, ly va hoa\n: ");
	scanf_s("%d %d %d", &hs1, &hs2, &hs3);
	//c1: sd toan tu 3 ngoi khong dung lenh if.
	((hs1 > 0 && hs1 <= 10) && (hs2 > 0 && hs2 < 10) && (hs3 > 0 && hs3 < 10)) ? tbc = ((toan * hs1) + (ly * hs2) + (hoa * hs3)) / (hs1 + hs2 + hs3) : printf("sai.");

	/*
	if ((hs1 > 0 && hs1 <= 10) && (hs2 > 0 && hs2 < 10) && (hs3 > 0 && hs3 < 10)) {
		tbc = ((toan * hs1) + (ly * hs2) + (hoa * hs3))/(hs1 + hs2 + hs3);
	}
	 */
	printf("Diem trung binh cong la %f\n", tbc);
}