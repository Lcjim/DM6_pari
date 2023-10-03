#include "stdio.h"
#include "string.h"


int main(){
    int initial_sum = 100;
    int reponse;
    int decisionMoney;
    int end_sum;

    printf("veut-tu commencer à jouer avec la somme initial ou la retirer,"
           "0:[oui] 1:[non]:\n");
    scanf("dl",&reponse);
    getchar();
    if (reponse !=1){
        while (initial_sum>0){
            printf("tu as une somme de 100 dollars.");
            printf("donner la somme d'argent que tu veux parier:\n");
            scanf("d",&decisionMoney);
            getchar();
        }
    }else{
        printf("fin du jeu\n");
        end_sum=initial_sum;
    }


 //programme  1 chance sur 2 de perdre tout perdre comme de gagner(aléatoire)//
    return 0;
}
