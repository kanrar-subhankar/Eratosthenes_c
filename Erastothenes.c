#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int i,j,n;
    int *primes;
    int z = 1;
	printf("Give the size of array::");
	scanf("%d",&n);
    primes = malloc(sizeof(int)*n);

    for (i=2;i<n;i++)
        primes[i]=1;

    for (i=2;i<sqrt(n);i++)
        if (primes[i])
            for (j=i;i*j<n;j++)
                primes[i*j]=0;
	printf("The prime nos are::\n");
    for (i=2;i<n;i++)
        if (primes[i])
            printf("%d\t",i);

return 0;
}
