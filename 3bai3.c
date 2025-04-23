#include <stdio.h>

int main(){
	
	const float pi=3.14;
	float bankinh;
	printf("nhap ban kinh duogn tron: ");
	scanf("%f", &bankinh);
	float chuvi= 2 * pi * bankinh;
	float dientich= pi * bankinh * bankinh;
	
	printf("ban kinh hinh tron la: %.2f\n", bankinh);
    printf("chu vi hinh tron la: %.2f\n", chuvi);
    printf("dien tich hinh tron la: %.2f\n", dientich);
	
	return 0;
}
