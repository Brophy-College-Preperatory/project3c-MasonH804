#include <stdio.h>

//Build project 3 here:
// Mason Hutchison and Oliver Edelstsiuiurieun
int main(void){

int totalQ = 0;
int totalD = 0;
int totalN = 0;
int totalP = 0;
int userInput;
char choice = 'y';
while(choice == 'y'){

//Ask user if they want to contiune. 


printf("How much change do you have");
printf("Enter as a whole number. For example, print .41 as 41: \n");
scanf("%i", &userInput);

while(userInput > 24){
    userInput = userInput - 25;
    totalQ++;
}

while(userInput > 9){
    userInput = userInput - 10;
    totalD++;
}
    
while(userInput > 4){
    userInput = userInput - 5;
    totalN++;
}

while(userInput > 0){
    userInput = userInput - 1;
    totalP++;
}


printf("Quarters = %i\n", totalQ);
printf("Dimes = %i\n", totalD);  
printf("Nickels = %i\n", totalN);
printf("Pennies = %i\n", totalP);

printf("Total Coins = %i\n", totalD + totalN + totalP + totalQ);


}   
return 0;
}
