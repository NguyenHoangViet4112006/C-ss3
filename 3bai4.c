#include <stdio.h>

int main(){
	
	float toan, van, anh;
	float tong, trungbinh;
	printf("nhap diem mon toan: ");
	scanf("%f", &toan);
	printf("nhap diem mon van: ");
	scanf("%f", &van);
	printf("nhap diem mon anh: ");
	scanf("%f", &anh);
	
	tong = toan + van + anh;
	trungbinh = (toan + van +anh) / 3;
	
	printf("tong diem 3 mon la: %.2f\n" , tong);
	printf("trung binh diem 3 mon la: %.2f", trungbinh);
	
	return 0;
	
}
