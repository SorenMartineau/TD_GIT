#include <stdio.h>
#include <math.h>


int main(){

    float C;
    float t;
    int n;
    float res;


    printf("le montant du pret\n");
    scanf("%f", &C);
    getchar();
    printf("taux d'interet annuel\n");
    scanf("%f", &t);    
    getchar();
    printf("a durée du pret en annees\n");
    scanf("%d", &n);
    getchar();

    res = (C*(t/12)) / (1-pow((1 + t/12), (-n*12)));

    printf("%f", res);



    return 0;
}