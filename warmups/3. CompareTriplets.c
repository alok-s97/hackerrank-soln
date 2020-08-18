#include <stdio.h>

int main(){
    int i=0;
    int bob[3];
    int alice[3];
    int bobscore = 0, alicescore = 0;

    for(i=0; i<=2; i++){
        scanf("%d", &bob[i]);
    }

    for (i=0; i<=2; i++){
        scanf("%d", &alice[i]);
    }

    for (i=0; i<=2; i++){
        if (bob[i]>alice[i]){
            bobscore +=1;
        }
        else if (alice[i]>bob[i]){
            alicescore +=1;
        }
        else 
            continue;

    }

    printf("%d %d", bobscore, alicescore);

    return 0;
}
