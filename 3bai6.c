#include <stdio.h>

int main() {
    float canhday, chieucao, dientich;

    printf("nhap do dai canh day: ");
    scanf("%f", &canhday);
    printf("nhap chieu cao: ");
    scanf("%f", &chieucao);
    dientich = (canhday * chieucao) / 2;
    printf("dien tich cua tam giac la: %.2f\n", dientich);

    return 0;
}

