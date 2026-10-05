#include <stdio.h>
#include <string.h>

int main(){

    char secret[] = "cristaux";
    char lettre;
    float index[100];
    int progress_lose = 0;
    int correct = 0;
    int win;

    for (int i = 0; i < 100; i++){
        index[i] = -1;
    }

    while (1){

        scanf("%c", &lettre);
        win = 1;

        for (int i = 0; i < strlen(secret); i++){


            if (lettre == secret[i]){
                index[i] = i;
                correct = 1;
            }

            if (index[i] != -1){
                printf("%c", secret[i]);
            }
            else{
                printf("%c", '_');
                win = 0;
            }

        }

        if (correct != 1){
            progress_lose += 1;
        }

        correct = 0;

        printf("\n");

        switch (progress_lose) {

        case 1:
            printf("\n\n\n\n\n\n\n-------\n"); 
            break;
        case 2:
            printf("\n |\n |\n |\n |\n |\n |\n-------\n"); 
            break;
        case 3:
            printf(" -------\n | |\n |\n |\n |\n |\n-------\n"); 
            break;
        case 4:
            printf(" -------\n |  |\n |  O\n |\n |\n |\n-------\n"); 
            break;
        case 5:
            printf(" -------\n |  |\n |  O\n | |\n |\n |\n-------\n"); 
            break;
        case 6:
            printf(" -------\n |  |\n |  O\n | /|\\\n |\n |\n-------\n"); 
            break;
        case 7:
            printf(" -------\n |  |\n |  O\n | /|\\\n | / \\\n |\n-------\n"); 
            break;
        default:
            break;
        }

        if (progress_lose == 7){
            printf("perdu");
            break;
        }

        if (win == 1){
            printf("gagne");
            break;           
        }



        getchar();


    }
    



    return 0;
}