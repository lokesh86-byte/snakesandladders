// grading system for classroom students
#include<stdio.h>
int main(){
	int a;//a is number of marks obtained
	
	scanf("%d",&a);
	if(a>=85){
		printf(" Grade A");
	}
	else if(a>=70 && a<85){
		printf(" Grade B");
	}
	else if(a>=55 && a<70){
		printf(" Grade C");
	}
	else if(a>=40 && a<55){
		printf(" Grade D");
	}
	else{
		printf("Grade F");
	}
	return 0;
}
