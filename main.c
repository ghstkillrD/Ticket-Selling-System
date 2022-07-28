#include <stdio.h>
int main(void)
{
 int seatNo, countFs, countBs, countBl; //declaring variables
 float total, seatPrice; //countFs for front seat count
 char choice; //countBl for balcony seat count
//countBs for back seat count
 total = 0;
 countFs = 0; //assigning values for variables
 countBl = 0;
 countBs = 0;
 do{
 printf("Seat Class Seat Type Place Ticket Price(per person)\n");
 printf("----------------------------------------------------------------------------------------\n");
 printf("Gold 1 Front seats 5000/= \n");
 printf("Silver 2 Balcony seats 3000/= \n");
 printf("Bronze 3 Back seats 1000/= \n");
 printf("\n");
 printf("Enter the Seat Type: ");
 scanf("%d", &seatNo); //reading seat type
 if (seatNo == 1 || seatNo == 2 || seatNo == 3)
 {
 if (seatNo == 1 && countFs < 50)
 {
 seatPrice = 5000; //assigning prices for each seat type
 countFs++;
 }
 else if (seatNo == 2 && countBl < 50)
 {
 seatPrice = 3000;
 countBl++;
 }
 else if (seatNo == 3 && countBs < 150)
 {
 seatPrice = 1000;
 countBs++;
 }
 else
 {
 seatPrice = 0;
 printf("\n");
 printf("*** Ticket limit exceeded. ***\n"); //error message for exceeding ticket limit
 printf("\n");
 }
 }
 else
 {
 seatPrice = 0;
 printf("\n");
 printf("*** Invalid Seat Type. ***\n"); //error message for entering invalid seat type
 printf("\n");
 }
 total += seatPrice; //calculating the total
 printf("\n");
 printf("Do you have more entries?(Y/N): "); //looking for more other entries
 scanf("%s", &choice);
 printf("\n");
 }while (choice == 'Y' || choice == 'y');
 printf("\n");
 printf("Ticket Details\n");
 printf("------------------\n");
 printf("\n");
 printf("Seat Class Tickets sold\n");
 printf("-----------------------------------\n");
 printf("Gold %d \n", countFs);
 printf("Silver %d \n", countBl); //final result
 printf("Bronze %d \n", countBs);
 printf("**********************\n");
 printf("The Total is Rs:%.2f/=\n", total);
 printf("\n");
 return 0;
} //end of main function
