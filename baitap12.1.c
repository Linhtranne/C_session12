#include<stdio.h>
int main(){
	int a, b, c;
	printf("Nhap lan luot 3 so a b c? \n");
	scanf("%d %d %d",&a, &b, &c);
	int sumAb = (a > b) ? a + b : b + a;
    int sumAc = (a > c) ? a + c : c + a;
    int sumBc = (b > c) ? b + c : c + b;

    int diffAb = (a > b) ? a - b : b - a;
    int diffAc = (a > c) ? a - c : c - a;
    int diffBc = (b > c) ? b - c : c - b;

    printf("Tong va hieu cua a va b: %d, %d\n", sumAb, diffAb);
    printf("Tong va hieu cua a va c: %d, %d\n", sumAc, diffAc);
    printf("Tong va hieu cua b va c: %d, %d\n", sumBc, diffBc);

}