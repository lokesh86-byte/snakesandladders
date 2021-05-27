#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;// order number for respective food item
printf(" enter the value of n: ");
scanf(" %d", &n);
switch(n){
	case 1: printf(" food item- PIZZA\n Price-Rs239\n");
	        
    break;
    case 2:printf(" food item -Burger\n Price-Rs 129");
    
           break;
    case 3: printf(" food item- Pasta\nPrice- Rs 179");
      break;
      case 4: printf(" food item- French Fries\n Price- Rs 99");
      break;
      case 5: printf(" food item- Sand Wich\n Price- Rs149 ");
      break;
      default: printf("Sorry ! No food item available");
      
	}
}
