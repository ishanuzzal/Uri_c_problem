#include<stdio.h>

int main(){
    int a,b,c, g=0, i=0, j=0, k=0,count=0;

    while(1){
        scanf("%d %d",&a,&b);
        count++;
        if(a>b){
            i++;
        }
        else if(b>a){
            j++;
        }
        else{
            k++;
        }
        while(1){
           printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&c);
        if(c==1){
            scanf("%d %d",&a,&b);
            count++;
           if(a>b){
            i++;
        }
        else if(b>a){
            j++;
        }
        else{
            k++;
        }
        }
        else{
            break;
        }
        }


        break;


    }
    printf("%d grenais\n",count);
    printf("Inter:%d\n",i);
    printf("Gremio:%d\n",j);
    printf("Empates:%d\n",k);
    if(i>j){
        printf("Inter venceu mais\n");
    }
    else if(j>i){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Não houve vencedor\n");
    }


    return 0;
}
