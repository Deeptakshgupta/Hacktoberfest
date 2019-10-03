#include <stdio.h>

int main(void) {
	// your code goes here
	 long T,num,N;
	scanf("%ld",&T);
	int i,a[60];
	while(T--){
	   
	    scanf("%ld",&N);
	    
	    a[0]=0;
	    a[1]=1;
	    num=1;
        for(i=2;i<60;i++){
            a[i]=(a[i-1]+a[i-2])%10;
            if(num<N)num=num*2;
        }
	    if(num>N)num=num/2;
	    num=num%60;
	    printf("%d\n",a[num-1]);
	    
	}
	return 0;
}

