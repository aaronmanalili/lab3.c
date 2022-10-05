#include <stdio.h>

// lab3.c created by Aaron Manalili

int main()
{
  // I'm initializing my variables
  int order4x = 3; // The remaining orders
  int total = 0;
  int firstOrder = 0; // USed to take the price of the first order
  int food = 8; // The int food is used for what the use wants from 1 = Pizza to 8 = Salad
  int Chicken = 4; // Price of Chicken
  int Pizza = 2; // Price of Pizza
  int Burger = 5; // Price of Burger
  int Soup = 1; // Price of Soup
  int Eggs = 1; // Price of Eggs
  int Gyro = 6; // Price of a Gyro
  int HotDog = 4; // Price of a Hot dog
  int Salad = 2; // Price of a Salad

  printf("Menu: 1. Chicken = $4, 2. Pizza: $2, 3. Burger: $5, 4. Soup: $1, 5. Eggs: $1, 6. Gyro: $6, 7. Hot Dog: $4, 8. Salad: $2 \n");

  printf("What would you like to eat?");
   scanf("%d", &food);

   switch(food) // This first switch statement takes in the first order the user types in
   {
       case 1:
       printf("You ordered Chicken. That will be $4 \n");
       firstOrder+=Chicken;
       total+=firstOrder;
       break;

       case 2:
       printf("You ordered Pizza. That will be $2 \n");
       firstOrder+=Pizza;
       total+=firstOrder;
       break;

       case 3:
       printf("You ordered a burger. That will be $5 \n");
       firstOrder+=Burger;
       total+=firstOrder;
       break;

       case 4:
       printf("You ordered Soup. That will be $1 \n");
       firstOrder+=Soup;
       total+=firstOrder;
       break;

       case 5:
       printf("You ordered Eggs.  That will be $1 \n");
       firstOrder+=Eggs;
       total+=firstOrder;
       break;

       case 6:
       printf("You ordered a Gyro. That will be $6 \n");
       firstOrder+=Gyro;
       total+=firstOrder;
       break;

       case 7:
       printf("You ordered a Hot Dog. That will be $4 \n");
       firstOrder+=HotDog;
       total+=firstOrder;
       break;

       case 8 :
       printf("You ordered a Salad. That will be $2 \n");
       firstOrder+=Salad;
       total+=firstOrder;
       break;
   }
 for(int i = 0; i < order4x; i++)
  {

    printf("What else would you like to eat? \n");
    scanf("%d", &food);

   switch(food) // The 2nd switch statement is used for the other 3 remaining chances to order food
   {
       case 1:
       printf("You ordered Chicken. That will be $4 \n");
       total+=Chicken;
       break;

       case 2:
       printf("You ordered Pizza. That will be $2 \n");
       total+=Pizza;
       break;

       case 3:
       printf("You ordered a burger. That will be $5 \n");
       total+=Burger;
       break;

       case 4:
       printf("You ordered Soup. That will be $1 \n");
       total+=Soup;
       break;

       case 5:
       printf("You ordered Eggs. That will be $1 \n");
       total+=Eggs;
       break;

       case 6:
       printf("You ordered a Gyro. That will be $6 \n");
       total+=Gyro;
       break;

       case 7:
       printf("You ordered a Hot Dog. That will be $4 \n");
       total+=HotDog;
       break;

       case 8 :
       printf("You ordered a Salad. That will be $2\n ");
       total+=Salad;
       break;
   }

    if(food > 8) // If a number is typed in that is not 1 to 8, the user loses 1 out 4 chances to order food
    {
      printf("You have lost their chance to order 1 of the 4 items.");
      order4x--;
    }

  }


  printf("The total bill is $%d", total); // Shows total bill
}
