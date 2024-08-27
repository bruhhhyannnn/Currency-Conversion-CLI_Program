/*
    @author - Bryan Jesus Mangapit
    @start - 12/20/2021

    | Project 'Currency Conversion & Word Formatter Program' using only conditionals, loops, and functions |
*/

#include <stdio.h>
void otp_Choices(); // Function Prototype
int MoneyConversion(int choices);
int NumToWords(int money);
int ones_teens(int word), tens_digit(int word);

int main() {
    int otp_Converted, otp_Words, choice;
    otp_Choices(); // Function Call
    printf("Enter Your Choice (between 0 - 4):  ");
    scanf("%d", &choice);
    otp_Converted = MoneyConversion(choice); // Function Call
    if (choice >= 1 && choice <= 4) {
        printf("\tThe computed Amount in Words is ");
        otp_Words = NumToWords(otp_Converted); // Function Call
        printf("\n\n\n");
    }
    if (otp_Converted <= -1 && -1000000000000 < otp_Converted)
        printf("\n\t\t\tINVALID MONEY EXCHANGE !!!\n\n\n");
    return 0;
}

void otp_Choices() { // Function Definition
    printf(" ****** MANGAPIT's MONEY EXCHANGE ****** \n");
    printf("\t[ 1 ]  Peso to Dollar\t\t\t\t\t\tMoney Conversion Rates:\n");
    printf("\t[ 2 ]  Dollar to Peso\t\t\t\t\t\t Dollar = 55.00\n");
    printf("\t[ 3 ]  Peso to Euro\t\t\t\t\t\t Euro   = 68.00\n");
    printf("\t[ 4 ]  Euro to Peso\n");
    printf("\t[ 0 ]  Exit\n\n\n");
}

int MoneyConversion(int choices) { // Function Definition
    switch (choices) {
    case 1:
        printf("\nEnter your amount of PESO(S):  ");
        scanf("%d", &choices);
        choices /= 55;
        printf("\n\tThe amount of your Pesos in Dollars is = %d.\n", choices);
        return choices;
    case 2:
        printf("\nEnter your amount of DOLLAR(S):  ");
        scanf("%d", &choices);
        choices *= 55;
        printf("\n\tThe amount of your Dollars in Pesos is = %d.\n", choices);
        return choices;
    case 3:
        printf("\nEnter your amount of PESO(S):  ");
        scanf("%d", &choices);
        choices /= 68;
        printf("\n\tThe amount of your Pesos in Euros is = %d.\n", choices);
        return choices;
    case 4:
        printf("\nEnter your amount of EURO(S):  ");
        scanf("%d", &choices);
        choices *= 68;
        printf("\n\tThe amount of your Euros in Pesos is = %d.\n", choices);
        return choices;
    case 0:
        printf("\n\n\n\t**** THANK YOU FOR CHOOSING MY MONEY EXCHANGE!!! :)) ****\n\n\n");
        break;
    default:
        printf("\n\n\n\t\t\t Invalid Inputted Choice! \n\n\n");
    }
}

int NumToWords(int money) { // Function Definition
    if (money < 20) {       // ONES TO TEENS (1 to 19)
        printf("", ones_teens(money));
    }
    if (money >= 20 && money < 100) {       // TENS
        printf("", tens_digit(money / 10)); //(2)0, (3)3
        printf("", ones_teens(money % 10)); // if last digit is not zero, 1(1), 1(2),  if it is zero, it will print out nothing because i didnt make a "zero" word
    }
    if (money >= 100 && money < 1000) {              // HUNDREDS
        printf("Hundred ", ones_teens(money / 100)); //(1)00, (2)00
        printf("", NumToWords(money % 100));         // will go back to the function NumToWords, then it will go to a particular what if condition
    }
    if (money >= 1000 && money < 10000) { // THOUSANDS
        printf("Thousand ", ones_teens(money / 1000));
        printf("", NumToWords(money % 1000));
    }
    if (money >= 10000 && money < 100000) { // TEN THOUSANDS
        printf("Thousand ", NumToWords(money / 1000));
        printf("", NumToWords(money % 1000));
    }
    if (money >= 100000 && money < 1000000) { // HUNDRED THOUSANDS
        printf("Thousand ", NumToWords(money / 1000));
        printf("", NumToWords(money % 1000));
    }
    if (money >= 1000000 && money < 10000000) { // MILLIONS
        printf("Million ", ones_teens(money / 1000000));
        printf("", NumToWords(money % 1000000));
    }
    if (money >= 10000000 && money < 100000000) { // TEN MILLIONS
        printf("Million ", NumToWords(money / 1000000));
        printf("", NumToWords(money % 1000000));
    }
    if (money >= 100000000 && money < 1000000000) { // HUNDRED MILLIONS
        printf("Million ", NumToWords(money / 1000000));
        printf("", NumToWords(money % 1000000));
    }
    if (money >= 1000000000 && money < 10000000000) { // BILLIONS
        printf("Billion ", NumToWords(money / 1000000000));
        printf("", NumToWords(money % 1000000000));
    }
}

int ones_teens(int word) { // Function Definition
    switch (word) {
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    case 10:
        printf("Ten ");
        break;
    case 11:
        printf("Eleven ");
        break;
    case 12:
        printf("Twelve ");
        break;
    case 13:
        printf("Thirteen ");
        break;
    case 14:
        printf("Fourteen ");
        break;
    case 15:
        printf("Fifteen ");
        break;
    case 16:
        printf("Sixteen ");
        break;
    case 17:
        printf("Seventeen ");
        break;
    case 18:
        printf("Eighteen ");
        break;
    case 19:
        printf("Nineteen ");
        break;
    }
}

int tens_digit(int word) { // Function Definition
    switch (word) {
    case 2:
        printf("Twenty ");
        break;
    case 3:
        printf("Thirty ");
        break;
    case 4:
        printf("Forty ");
        break;
    case 5:
        printf("Fifty ");
        break;
    case 6:
        printf("Sixty ");
        break;
    case 7:
        printf("Seventy ");
        break;
    case 8:
        printf("Eighty ");
        break;
    case 9:
        printf("Ninety ");
        break;
    }
}
