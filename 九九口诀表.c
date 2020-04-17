#include<stdio.h>
int main()
{
	int N,a,b,c;
	 
	scanf("%d", &N);
	b=1;
	if(N<10){
	while(a<(N+1)||b<(N+1)){
	                        a=1;
		                    c=a*b;
		                    while(a<=b){
		              	                printf("%d*%d=%d ", a,b,c);
		              	                a++;
					                    }
					                     printf("\n");
					                    b++;
	                                    }
	       }else{
	       	printf("´íÎó\n");
		   }
	
	return 0;
 } 
