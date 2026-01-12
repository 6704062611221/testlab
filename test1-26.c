#include<stdio.h>
int main(){
	int x,i,n;
	int sumn=0,sumh=0;
	float g;
	char h;
	scanf("%d",&i);
	for(x = 0 ;x < i ; x++){
		scanf("%d %f %c",&n,&g,&h);
		if(n < 2){
			if(g >= 3.00){
				if(h = 'Y'){
					printf("approved\n");
				}else{
					sumn = sumn+1;
					printf("approved\n");
				}
			}else if(g >= 2.50){
				if(h = 'Y'){
					sumh = sumh + 1;
					printf("not approved:year < 2\n");
				}else{
					printf("not approved:year < 2\n");
				}
			}else if(g < 2.50){
				if(h = 'Y'){
					sumh = sumh + 1;
					printf("not approved:grade < 3.00\n");
				}else{
					printf("not approved:grade < 3.00\n");
				}
			}
		}else if(n >=2){
			if(g >= 2.50 && g < 3.00){
				if(h = 'Y'){
					printf("approved\n");
				}else{
					printf("not approved:no help\n");
				}
			}else if(g >= 3.00){
			    if(h = 'Y'){
			        printf("approved\n");
			    }else{
			        sumn = sumn + 1;
			        printf("approved\n");
			    }
			}
			else if(g < 2.50){
				if(h = 'Y'){
					sumh = sumh+1;
					printf("not approved:grade < 2.50\n");
				}else{
					printf("not approved:grade < 2.50\n");
				}
			}
		}
	}
	printf("%d\n",sumn);
	printf("%d\n",sumh);
}
