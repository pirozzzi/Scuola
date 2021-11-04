#include<stdio.h>
int max(int a, int b);
int main(){
    int a,b,n;
    printf("Inserisci due numeri: ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Digitare 0 per conoscere il maggiore, altrimenti digitare un altro numero ");
    scanf("%d",&n);
    if(n==0)
    printf("Il maggiore e': ",max(a,b));
    else
    printf("Il minimo e': ",min(a,b));
}

int max(a,b){
    if(a>b)
    return a;
    else
    return b;
}

int min(a,b){
    if(a<b)
    return a;
    else
    return b;
}