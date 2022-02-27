#pragma warning(disable:4996)
#include<conio.h> //de co the sd ham getch()
#include<stdio.h>
#include<math.h>// de thuc hien tinh log co so 10.
#include<Windows.h> // Khai bao thu vien cua Windows, hay chinh la CMD, kbao thu vien nay de sd ham system("cls").

int main()
{
 Nhapsoxe:
	int soxe, sonut = 0;
	printf("Nhap vao so xe cua ban(Chu y so xe phai co 5 chu so):\n");
	scanf("%d", &soxe);
	// ktra neu so nhap vao k du 5 chu so thi chuong trinh se dung lai
	int digit = log10((double)soxe) + 1;// lam tron
	printf("So xe : %d\n", soxe);

	sonut += soxe % 10;//lay lan luot cac chu so hang don vi lan 1.
	soxe /= 10;//so xe sau khi da bo di so phan don vi

	sonut += soxe % 10;//lay lan luot cac chu so hang don vi lan 2.
	soxe /= 10;//so xe sau khi da bo di so phan don vi

	sonut += soxe % 10;//lay lan luot cac chu so hang don vi lan 3.
	soxe /= 10;//so xe sau khi da bo di so phan don vi

	sonut += soxe % 10;//lay lan luot cac chu so hang don vi lan 4.
	soxe /= 10;//so xe sau khi da bo di so phan don vi

	sonut += soxe;//lay lan luot cac chu so hang don vi lan 5.
	//soxe /= 10;//so xe sau khi da bo di so phan don vi

	sonut %= 10;
	digit == 5 ? printf("So nut: %d\n", sonut) : printf("Nhap 5 chu so.\n");
	
	printf("Bam phim c de tiep tuc HOAC bam phim bat ky de thoat chuong trinh.\n");
	char x = getch();
	if (x == 'c' || x == 'C') {
		system("cls"); // ham system de lay tu he thong, xoa het cac dong thong tin da nhap va ket qua cua lan chay truoc do. 
		goto Nhapsoxe; // goto la lenh di den cau lenh Nhapsoxe.
	}
}