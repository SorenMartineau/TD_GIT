#include <stdio.h>

int main(){

    int seconds;
    int heures;
    int minutes;
    scanf("%d", &seconds);

    heures = seconds / 3600;
    minutes = seconds % 3600 / 60;
    seconds = seconds % 60;

    printf("heures: %d, minutes: %d, secconds: %d", heures, minutes, seconds);


    return 0;
}