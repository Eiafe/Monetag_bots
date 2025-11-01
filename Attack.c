#include<stdio.h>
int main(){
    long long a,b,w;
    scanf("%lld %lld",&a,&b);
    w=(a+b-1)/b;
    printf("%lld",w);
    return 0;
}
