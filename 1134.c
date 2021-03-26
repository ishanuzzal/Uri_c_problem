#include<stdio.h>

int main(){
    int f,i=0,j=0,k=0;

    while(1){
        scanf("%d",&f);
        if(f>0 && f<5){
            if(f==1){
                i++;
            }
            else if(f==2){
                j++;
            }
            else if(f==3){
                k++;
            }
            else{
                break;
            }
        }
        else{
            continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",i);
    printf("Gasolina: %d\n",j);
    printf("Diesel: %d\n",k);


    return 0;
}
