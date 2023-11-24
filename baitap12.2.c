#include<stdio.h>
int main(){
	int a, b, c;
	printf("Nhap lan luot 3 so a b c? \n");
	scanf("%d %d %d",&a, &b, &c);
	int accumAb = (a % b ==0 ) ? a * b : b * a;
    int accumAc = (a % c ==0 ) ? a * c : c * a;
    int accumBc = (b % c ==0) ? b * c : c * b;

    int quotientAb = (a % b ==0 ) ? a / b : b / a;
    int quotientAc = (a % c ==0 ) ? a / c : c / a;
    int quotientBc = (b % c ==0 ) ? b / c : c / b;
	if(a % b ==0 && a % c ==0 && b % c ==0  ){
    printf("Tich va thuong cua a va b: %d, %d\n", accumAb, quotientAb);
    printf("Tich va thuong cua a va c: %d, %d\n", accumAc, quotientAc);
    printf("Tich va thuong cua b va c: %d, %d\n", accumBc, quotientBc);
}
}