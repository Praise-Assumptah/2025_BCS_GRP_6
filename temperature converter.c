#include<stdio.h>
int main(){
int choice;
float fahrenheit;
float celsius;


printf("\n1.convert from celsius to fahrenheit");
printf("\n2.convert from fahrenheit to celsius");
printf("\n3.Exit....");
printf("\nEnter conversion option from(1,2,3):  ");
scanf("%d", &choice);

switch(choice){
case 1:
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius*(9.0/5.0)) +32;
    printf("%2.f celsius is %.2f fahrenheit\n", celsius,fahrenheit);
    break;


case 2:
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit-32)*(5.0/9.0);
    printf("%2. fahrenheit is %.2f celsius\n", fahrenheit,celsius);
    break;
case 3:
    printf("Exit...\n");
    break;
default:
    printf("Invalid choice\n");
}
return 0;

}
