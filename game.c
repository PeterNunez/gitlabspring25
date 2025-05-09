//contributors
//GP
//Jovanny Gonzalez
//Joel Castro
//Ryan A
//Nicole Brooks
//Yoonhong Min
// Jessenia Hernandez Mora
//Gerard McCallion

// Nanu Panchamurthy

// carlos acevedo



//Jesse Navarro



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//place function prototypes here


void PedroFunctionRoom(void);


int main(int argc, char *argv[])
{
	int choice = 0;
	char name[30] = "bob";
	srand(time(NULL));
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Hello %s welcome to the RPG Game!\n",name);
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
		puts("As you look around you see the room has 55 doors, each labeled with a number.");
		puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
		puts("What door do you choose?");
		scanf("%d",&choice);
		switch(choice)
		{
			case 37:
			{
				puts("room37");
				PedroFunctionRoom();
				break;
			}

			case 99:
			{
				puts("You have escaped");
				break;
			}
			default:
			{
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;
}

//place functions here
void PedroFunctionRoom(void)
{
	int opt37 = 0;
	puts("You have picked room 37, Pedro's room\n");
	puts("Let's start by visiting some planets in our solar system\n");
	puts("You have 3 planets to visit from\n");
	puts("1. Earth, 2. Mars, 3. Saturn");
	scanf("%d", &opt37);

	if(opt37 == 1)
	{
		printf("Great you have picked Earth\n");
		puts("                                   ");
		puts("              *   *                ");
		puts("           *         *         *    ");
		puts("         *             *     *   *   ");
		puts("        *     EARTH     *      *     ");
		puts("        *               *            ");
		puts("         *             *              ");
		puts("           *         *                ");
		puts("              *   *                   ");
		puts("                                    \n");
		printf("Before we continue take a second to look at the world we live in!\n");
		printf("From here we can see the Earth in the middle and the Moon to the right of it \n");
		printf("Now we can either go to 1.Our planet or 2 The Moon\n ");
		scanf("%d", &opt37);

		if(opt37 == 1)
		{
			puts("AHh you feel that? That fresh air that our planet provides for us and the perfect condtions to hold life\n");
			puts("To think all of our lifes are within this small planet we call home. Now where do you want to go?\n");
			printf("1. The Beach, 2. continue roaming the world\n ");
			scanf("%d",&opt37);

			if(opt37 == 1)
			{
				puts("Lets enjoy this view by the beach and relax until we feel we can move on\n");
				printf("1. You want to go for a swim or 2. stay here for a bit longer \n ");
				scanf("%d",&opt37);

				if(opt37 == 1)
				{
					puts("Alright lets relax with a little swimimg\n");
				
				}
			
			}
		}
		else if(opt37 == 2)
		{
			puts("Hello ");
		
		}

	}
	else if(opt37 == 2)
	{
		int array[] = {1,2,3};
		int Guess = rand()%sizeof(array);
		int Rguess = 1;
		printf("Great you have picked Mars\n");
		puts("                                   ");
		puts("     *                              ");
		puts("   *   *                             ");
		puts("     *         *   *               ");
		puts("            *         *            ");
		puts("          *             *          ");
		puts("         *      MARS     *         ");
		puts("         *               *         ");
		puts("          *             *          ");
		puts("            *         *            ");
		puts("               *   *               ");
		puts("                             *     ");
		puts("                           *   *   ");
		puts("                             *     ");
		puts("                                  \n");
		printf("WOW look at that MARS is also accompanied by PHOBOS and DEIMOS\n");
		printf("Interestingly we can also vist them but here's the catch lets play a game im going to pick a number between 1-3\n");
		printf("If you guess the number right we will be going to PHOBOS otherwise well just go to DEIMOS only.\n ");
		printf("Please enter a number between 1 - 3\n");
		scanf("%d",&opt37);
		
		if(opt37 == Rguess || opt37 == Guess)
		{

			printf("Congratulations You guessed my number and now we can go to PHOBOS\n");
		
		}
	        if(opt37 != 1) 
		{
			printf("Sadly you did not guess ny number but thats okay now we can go to DEIMOS\n");
		}
			
	
	}
	else if(opt37 == 3)
	{

		printf("Great you Have picked Saturn\n");
		puts("                                       ");
		puts("                  *   *                ");
		puts("               *         *             ");
		puts("             *             *           ");
		puts("            *    SATURN     *          ");
		puts("      (~~~~~~~~~~~~~~~~~~~~~~~~~~~)    ");
		puts("            *               *          ");
		puts("             *             *           ");
		puts("               *         *             ");
		puts("                  *   *                ");
		puts("                                     \n");
	        	
	}

}
