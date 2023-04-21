#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main(){

char category;
int tempchoice;
int currencychoice;
int masschoice;
int userinputF;
int userinputC;
int userinputEUROtoUSD;
int userinputEUROtoPOUND;
int userinputEUROtoARY;
int userinputOunce;
int userinputGram;
int FahrenheitToCelsius;
int celsiusToFahrenheit;
float EUROtoUSD;
float EUROtoPOUND;
float EUROtoARY;
float ounceToPounds;
float gramsToPounds;


printf("                    Welcome to Unit Converter! \n");
printf("                    Here is a list of conversation to choose from: \n");
printf("                    Temperature(T), Currency(C), Mass(M) \n");
printf("                    Please enter the letter you want to convert.\n");
scanf("%c",&category);

if(category == 'T'){
    printf("welcome to temperature converter! \n");
    printf(" here's list of conversations to choose from: \n");
    printf("enter 1 for fahrenheit to celsius \n");
    printf("enter 2 for celsius to fahrenheit \n");
    scanf("%d", &tempchoice);
    if(tempchoice==1){
        printf("please enter the fahrenheit degree: \n");
        scanf("%d", &userinputF);
        FahrenheitToCelsius = ((userinputF -32) * (5.0/9.0));
        printf("Celsius: %d\n", FahrenheitToCelsius);
    }
    else if(tempchoice==2){
    printf("please enter the celsius degree: \n");
    scanf("%d", &userinputC);
    celsiusToFahrenheit = ((9.0/5.0) * userinputC + 32);
    printf("Fahrenheit : %d\n", celsiusToFahrenheit);

}
}
else if(category == 'C'){
    printf("Welcome to the currency converter \n");
    printf("here is a list of conversion to choose : \n");
    printf("enter 1 for Euro to USD\n");
     printf("enter 2 for Euro to POUND\n");
    printf("enter 3 for Euro to ARIARY\n");
    scanf("%d",&currencychoice);
    switch(currencychoice){
        case 1:
            printf("enter the amount of euro : \n");
            scanf("%d", &userinputEUROtoUSD);
            EUROtoUSD = userinputEUROtoUSD * 1.096;
            printf("%d euros = %lf dollars", userinputEUROtoUSD, EUROtoUSD);
            break;
        case 2:

            printf("enter the amount of euro : \n");
            scanf("%d", &userinputEUROtoPOUND);
            EUROtoPOUND = userinputEUROtoUSD * 0.88;
            printf("%d euros = %lf pounds", userinputEUROtoPOUND, EUROtoPOUND);
            break;
        case 3:
            printf("enter the amount of euro : \n");
            scanf("%d", &userinputEUROtoARY);
            EUROtoARY = userinputEUROtoARY * 4807.17;
            printf("%d euros = %lf ariary", userinputEUROtoARY, EUROtoARY);
            break;
        default :
            printf("veuillez choisr entre 1 2 ou 3 !\n");

    }
}
else if(category == 'M'){
    printf("Welcome to the mass converter \n");

}
else
printf("Please enter the correct choice. \n");


return 0;
}
  
        
        
