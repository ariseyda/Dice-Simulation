#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

//Dice Simulation

double random(){
	double r=(double) 1+ rand()/RAND_MAX %6;
	return r;
}
int main(){
	
	int i,n,dice1,dice2,k;
	double p;
  	srand(time(NULL));
  	
	printf("Number of experiments:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		dice1=(int) random();
		dice1=(int) random();
		if(dice1+dice2==7){
			k++;
		}
	}
	
	p=(double)k/n;
	
	printf("Roll the dice:%d\nThe number of dice is 7 in total:%d\nThe probability that the sum of dice is seven:%.2f",n,k,p);
	
	return 0;
}
