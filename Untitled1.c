#include<stdio.h>

int ex(){
    int x,i=0;
    float a,sum=0,avg=0;
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&x);
    if(x==1){
        while(1){
        scanf("%f",&a);
        if(a<0.0 || a>10.0){
            printf("nota invalida\n");
        }
        else{
            sum+=a;
            i++;
        }
        if(i==2){
            avg=sum/2;
            printf("media = %.2f\n",avg);
            return ex();
        }
    }


    }
    else if(x==2){
        return 0;
    }
    else{
        return ex();
    }
}

int main(){
    int x,i=0;
    float a,b,sum=0,avg=0;

    while(1){
        scanf("%f",&a);
        if(a<0.0 || a>10.0){
            printf("nota invalida\n");
        }
        else{
            sum+=a;
            i++;
        }
        if(i==2){
            avg=sum/2;
            printf("media = %.2f\n",avg);
            ex();
            break;
        }
        //if(i==2){
           //

        //}


    }



    return 0;
}
