#include <stdio.h> 
   
int main() {  
    int day;
    printf("Enter Day Number\n");  
    scanf("%d", &day);  
  
    switch(day){
        case 1 : printf("Monday  THIS IS YOUR MONDAY MORNING REMINDER THAT YOU CAN HANDLE WHATEVER THIS WEEK THROWS AT YOU.\n");
            break;
        case 2 : printf("Tuesday  SEIZE THE DAY. MAKE IT RIDICULOUSLY AMAZING. HAVE A WONDERDUL TUESDAY.\n");
            break;
        case 3 : printf("Wednesday  WEDNESDAYS ARE LIKE MONDAYS IN THE MIDDLE OF THE WEEK.\n");
            break;
        case 4 : printf("Thursday  START YOUR THURSDAY WITH AN ATTITUDE OF OPTIMISM. IT'S GOING TO BE A GOOD DAY.'\n");
            break;
        case 5 : printf("Friday  FRIDAY SEES MORE SMILES THAN ANY OTHER DAY OF THE WEEKEND\n");
            break;
        case 6 : printf("Saturday  MAY SATURDAY BE A DAY OF HAPPINESS, PEACE AND LOVE\n");
            break;
        case 7 : printf("Sunday  HAPPY SUNDAY, COUNT YOUR RAINBOWS, NOT YOUR THUNDERSTORMS\n");
            break;
        default: printf("Invalid Input !!!!\n");          
    }
  
    return 0;  
}
