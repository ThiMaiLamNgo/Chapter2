/*
#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	float a = 2.3436;
	printf("so a voi 2 chu so sau dau phay: %10.2f", a);
	printf("Lap Trinh Khong Kho!");
}
*/

/*
#include<stdio.h>
int main()
{
    float x;
    scanf_s("%f", &x);
    if (x >= 0 && x <= 10000) {
        printf("%d %d", (int)x, (int)x + 1);
    }
    else if (x <= 0 && x >= -10000) {
        printf_s("%d %d", (int)x + (-1), (int)x);
    }
}
*/

/*
//lAY THANG NGAY NNAM HIEN TAI TU HE THONG MAY TINH HIEN TAI
#include<stdio.h>
#include<time.h>
#include<Windows.h>
#pragma
#pragma warning(disable : 4996)
int main()
{
    SYSTEMTIME t;
    GetLocalTime(&t);
    printf("users setClock \%d\ %d\ %d", t.wMonth, t.wDay, t.wYear);
}
*/

/*
//c2: in ra ngay thang hien tai tu may tinh nhung k khai bao thu vien Windows.h:
#include<stdio.h>
#include<time.h>
#pragma
#pragma warning(disable : 4996)
int main()
{

int namhientai, thanghientai, ngayhientai;
time_t t = time(0);
struct tm *Now = localtime(&t);
namhientai = Now->tm_year + 1900;
thanghientai = Now->tm_mon;
ngayhientai = Now->tm_mday;
printf("users setClock \\%d\\%d\\%d", thanghientai, ngayhientai, namhientai);
}
*/

/*
//CHO phep nguoi dung nhap vao ngay thang nam sau do in ra thang ngay nam:
#include<stdio.h>
int main()
{
    int date, month, year;
    scanf_s("%d %d %d", &date, &month, &year);
    if ((date >= 1 && date <= 31) && (month >= 1 && month <= 12) && (year >= 2000 && year <= 3000))
    {
        printf("users setClock \\%d\\%d\\%d", date, month, year);
    }
}
*/

/*
//Cho f(x) = a*x*x + b*x + c và giá trị của a, b, c, x.hay tinh f(x).
//input:la 1 dong chua cac so int a, b, c, xa,b,c,x (0 ≤ x, a, b, c ≤ 10^6). 
// do do ta phai khai bao kieu long va dac ta cua kdl long la %ld doi voi 1so trinh duyet khac visual studio. 
#include<stdio.h>
int main()
{
    int a, b, c, x;
    scanf_s("%d %d %d %d", &a, &b, &c, &x);
    printf("%d", ((a * (x * x)) + (b * x) + c));
}
*/

/*
#include<stdio.h>
#pragma
#pragma warning(disable : 4996)
int main()
{
    int a, b, x, c;
    scanf("%d %d %d", &a, &b, &x);
    c = (3 * x) - a - b;
    printf("%d", c);
}
*/

/*
#include<stdio.h>
#pragma
#pragma warning(disable : 4996)
int main()
{
    int a, b; int 
    scanf("%d %d", &a, &b);
    a > b ? printf("1") : printf("0");
}
*/

#include<stdio.h>
#include<math.h>
#pragma
#pragma warning(disable : 4996)
int main()
{
    /*
    //double x;
    int N, x;
    scanf("%d", &N);
    x = round(pow(double(N), (1.0 / 3)));
    //printf("%lf\n", x);
    if (pow(double(x),double(3)) == double(N)) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    */

    /*
    int N;
    double x;
    scanf("%d", &N);
    x = round(pow(double(N), (1.0 / 3)));
    if (pow(x, double(3)) == double(N)) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    */
    unsigned int N, digit, sum = 0;
    scanf("%u", &N);
    while (N > 9) {
        sum += N % 10;
        N /= 10;
        if (N < 10) {
            sum += N;
        }
    }
    if (sum < 10 && sum == 9) {
        printf("YES");
    }
    else if (sum < 10 && sum != 9) {
        printf("NO");
    }
    else if (sum >= 10) {
        digit = sum % 10;
        if (digit == 9) {
            printf("YES");
        }
        else {
            printf("No");
        }
    }
    
    /*if (N < 10 && N == 9) {
        printf("YES");
    }
    else if (N >= 10 && N <= 99) {
        N /= 10;
        sum += N % 10;

        N /= 10;
        sum += N;
        if (sum % 10 == 9) {
            printf("YES");
        }
        else {
            printf("NO");
        }*/
}

