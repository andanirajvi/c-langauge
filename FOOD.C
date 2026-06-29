/*
	Author:Rajvi;
	doc:26-06-2026;
	object: starbucks menu
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int choice ,item,quan,bill;
	clrscr();
	printf("\n\t\t==============");
	printf("\n\t\tStarbucks Menu");
	printf("\n\t\t==============");
	printf("\n\n1.Coffee");
	printf("\n2.Tea");
	printf("\n3.Milk");
	printf("\n4.Juice");
	printf("\n5.Water");
	printf("\n6.Soda");
	printf("\nEnter your choice : ");
	scanf("%d",&choice);

	switch(choice){
		case 1:  //coffee
			printf("\n--- coffee menu ---");
			printf("\n1.cappuccino \n2.latte \n3.Espresso \n4.Americano \n5.Mocha");
			printf("\n\nselect coffee:");
			scanf("%d",&item);


			switch(item){
				case 1:
					printf("cappuccino");
					break;
				case 2:
					printf("\n2.latte");
					break;
				case 3:
					printf("\n3.Espresso");
					break;
				case 4:
					printf("\n4.Americano");
					break;
				case 5:
					printf("\n5.Mocha");
					break;
				default :
					printf("Invalid coffee Choice");
				}
				printf("\n you chose coppucchino");
					printf("\nEnter for Quantity :");
					scanf("%d",&quan);
					printf("\nyou ordered %d cups...");
					printf("\n\nyour bill amount are=%d",200*quan);


				break;
		case 2:  //Tea
			printf("\n--- Tea menu ---");
			printf("\n1.Green Tea \n2.Black Tea \n3.Herbal Tea \n4.Chai Tea \n5.Earl Grey Tea");
			printf("\n\nselect Tea:");
			scanf("%d",&item);

			switch(item){
				case 1:
					printf("\n1.Green Tea");
					break;
				case 2:
					printf("\n2.Black Tea");
					break;
				case 3:
					printf("\n3.Herbal Tea");
					break;
				case 4:
					printf("\n4.Chai Tea");
					break;
				case 5:
					printf("\n5.Earl Grey Tea");
					break;
				default :
					printf("Invalid Tea Choice");
				}
				printf("\n you chose coppucchino");
					printf("\nEnter for Quantity :");
					scanf("%d",&quan);
					printf("\nyou ordered %d cups...");
					printf("\n\nyour bill amount are=%d",200*quan);


				break;

		case 3:  //Milk
			printf("\n--- Milk menu ---");
			printf("\n1.Whole Milk \n2.Skim Milk \n3.Soy milk \n4.Almond Milk \n5.Oat Milk");
			printf("\n\nselect Milk:");
			scanf("%d",&item);

			switch(item){
				case 1:
					printf("\n1.Whole Milk");
					break;
				case 2:
					printf("\n2.Skim Milk");
					break;
				case 3:
					printf("\n3.Soy milk");
					break;
				case 4:
					printf("\n4.Almond Milk");
					break;
				case 5:
					printf("\n5.Oat Milk");
					break;
				default :
					printf("Invalid Milk Choice");
				}
				printf("\n you chose coppucchino");
					printf("\nEnter for Quantity :");
					scanf("%d",&quan);
					printf("\nyou ordered %d cups...");
					printf("\n\nyour bill amount are=%d",200*quan);


				break;

			case 4:  //Juice
			printf("\n--- Juice menu ---");
			printf("\n1.orange juice \n2.Apple juice \n3.cranberry juice \n4.pineapple juice \n5.grapefruit juice");
			printf("\n\nselect juice:");
			scanf("%d",&item);

			switch(item){
				case 1:
					printf("\n1.orange juice");
					break;
				case 2:
					printf("\n2.Apple juice");
					break;
				case 3:
					printf("\n3.cranberry juice ");
					break;
				case 4:
					printf("\n4.pineapple juice");
					break;
				case 5:
					printf("\n5.grapefruit juice");
					break;
				default :
					printf("Invalid juice Choice");

				}
				printf("\n you chose coppucchino");
					printf("\nEnter for Quantity :");
					scanf("%d",&quan);
					printf("\nyou ordered %d cups...");
					printf("\n\nyour bill amount are=%d",200*quan);


				break;

			case 5:  //water
			printf("\n--- Water menu ---");
			printf("\n1.still water \n2.sparkling water \n3.flavored water \n4.minerak water \n5.infused water");
			printf("\n\nselect water:");
			scanf("%d",&item);

			switch(item){
				case 1:
					printf("\n1.still water");
					break;
				case 2:
					printf("\n2.sparkling water");
					break;
				case 3:
					printf("\n3.flavored water");
					break;
				case 4:
					printf("\n4.minerak water");
					break;
				case 5:
					printf("\n5.infused water");
					break;
				default :
					printf("Invalid water Choice");
				}
				printf("\n you chose coppucchino");
					printf("\nEnter for Quantity :");
					scanf("%d",&quan);
					printf("\nyou ordered %d cups...");
					printf("\n\nyour bill amount are=%d",200*quan);


				break;

			case 6:  //soda
			printf("\n--- Soda menu ---");
			printf("\n1.Cola \n2.Lemon-Lime \n3.Ginger Ale \n4.Root Beer \n5.Orange Soda");
			printf("\n\nselect soda:");
			scanf("%d",&item);

			switch(item){
				case 1:
					printf("\n1.Cola");
					break;
				case 2:
					printf("\n2.Lemon-Lime");
					break;
				case 3:
					printf("\n3.Ginger Ale");
					break;
				case 4:
					printf("\n4.Root Beer");
					break;
				case 5:
					printf("\n5.Orange Soda");
					break;
				default :
					printf("Invalid soda Choice");
				}
				printf("\n you chose coppucchino");
					printf("\nEnter for Quantity :");
					scanf("%d",&quan);
					printf("\nyou ordered %d cups...");
					printf("\n\nyour bill amount are=%d",200*quan);


				break;


			case 7:
				printf("Exiting... Thank you,visit again!\n");
				break;
			default:
				printf("Invalid Choice!");

		}
	getch();
}

