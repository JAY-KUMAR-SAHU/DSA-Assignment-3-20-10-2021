#include <stdio.h>

int main()
{
    long long int n;
    printf("Enter n (MAX = 520,642) : ");
    scanf("%d", &n);
    int primes[n+1];
    primes[0]=0; primes[1]=0;

    //SETTING ELEMENTS TO 1
    for (int i = 2; i < n+1; i++){ primes[i]=1; } 

    for(int i=2; i*i<=n; i++){
        for (int j = i*i; j <= n; j+=i){
            primes[j]=0;
        }
    }

    // PRINTING PRIME NUMBERS
    int count=0;
    for (int i = 2; i < n+1; i++){
        if(primes[i]==1){
            printf("%d ", i);
            count++;
        }
    }
    printf("\n       %d prime numbers upto %d", count, n);

    return 0 ;
}
