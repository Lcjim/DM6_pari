#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(){
    srand(time(NULL));
    int chance_win = (rand() % 100) + 1;
    printf("%d", chance_win);
    return chance_win;
}


int main(){
    int initial_sum = 100;
    int end_sum = 0;
    int reponse;
    int decisionMoney;
    int probaWin = random_number();


    printf("veut-tu commencer à jouer avec la somme initial ou la retirer, 0:[oui] 1:[non]:\n");
    scanf("%d",&reponse);
    getchar();
    if (reponse == 0) {
        printf("tu commencera avec une somme de 100 dollars.\n");
        while (initial_sum > 0){
            printf("donner la somme d'argent que tu veux parier:\n");
            scanf("%d", &decisionMoney);
            getchar();
            if (decisionMoney > initial_sum){
                printf("desolé,mais vous avez depassé la limite donné\n");
                break;
            }else{
                printf("preuve de proba  %d\n",probaWin);
                //modifier pour q fasse la proba de 50%//
                if (probaWin < 50 ) {
                    end_sum = (decisionMoney * 2);
                    end_sum = initial_sum + end_sum;
                    initial_sum = end_sum;
                    printf("vous avez le double de %d:\n",decisionMoney);
                    printf("vous avez maintenant %d:\n", end_sum);
                }else{
                    end_sum = initial_sum - decisionMoney;
                    initial_sum = end_sum;
                    printf("vous avez perdu %d\n",decisionMoney);
                    printf("vous avez maintenant %d:\n",end_sum);
                }
            }
        }
        printf("vous avez perdu!");
    }else{
        end_sum = initial_sum;
        printf(" fin du jeu!\n vous avez choisi de retirer l'argent!\n le joueur a retirer %d dollars",end_sum);
    }
return 0;
}
