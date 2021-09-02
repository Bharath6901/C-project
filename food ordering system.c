#include <stdio.h>
#include <string.h>
#include <conio.h>


struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];
int order_count = 0, served_count = 0, waiting_now = 0;

int order ()
{
    int n, in, qu;
    printf ("Enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 10000+order_count;
    items();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

    level:
    printf ("number of items to be ordered: ");
    scanf ("%d", &n);

    getchar ();
    while (n--){
        printf ("\nEnter item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 11 : {
        printf ("Enter the quantity of espresso: 1. small  2. large\n");
        int i;
        scanf ("%d", &i);
        getchar();ss

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (180*qu);
        break;
    }
    case 12 :{
        printf ("Enter the quantity of latte: 1. small  2. medium  3. large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (750*qu);

        else if (i==2) p[order_count].cost += (975*qu);

        else  p[order_count].cost += (1250*qu);

        break;
    }
    case 13 :{
        printf ("Enter the quantity of iced coffee: 1. small  2. medium  3. large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (85*qu);

        else if (i==2) p[order_count].cost += (320*qu);

        else  p[order_count].cost += (790*qu);

        break;
    }
    case 14 :{
        printf ("Enter the quantity of bagels: 1. small  2. med  3. large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (70*qu);

        else if (i==2) p[order_count].cost += (140*qu);

        else  p[order_count].cost += (250*qu);

        break;
    }
    case 15 :{
        printf ("Quantity of donuts: 1. medium  2. large\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (250*qu);

        break;
    }
    case 16 :{
        printf ("Quantity of chicken sandwich: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (120*qu);

        else p[order_count].cost += (240*qu);

        break;
    }
    case 17 : {
        printf ("250 ml of chocolate krushers\n");

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (180*qu);
        break;
    }
    case 18 : {
        printf ("250 ml of Dark chocolate milkshake\n");

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (65*qu);
        break;
    }
    case 19 : {
        printf ("250 ml of Cappuccino\n");

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (70*qu);
        break;
    }
    case 20 :{
        printf ("Enter the size of sprite: 1. 250ml  2. 500ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("no. of quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (20*qu);

        else p[order_count].cost += (30*qu);
        break;
    }
    default : {
        printf ("Invalid selection please try again\n");
        n++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %drs.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
}
int receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All orders served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
void items ()
{
    printf("..................................MENU....................................\n");

    printf("Item Code#   Description                  Size                     Price(tk)\n");

    printf("[11]         Espresso                   s/l                  130/180\n");
    printf("[12]         Latte                      s/m/l                      150/175/250\n");
    printf("[13]         Iced coffee                s/m/l                      85/170/230\n");
    printf("[14]         Bagels                     s/m/l                      70/140/250\n");
    printf("[15]         Donuts                     m/l                        130/250\n");
    printf("[16]         Chicken sandwich           Half/Full                  120/240\n");
    printf("[17]         Chocolate krushers         250ml                      200\n");
    printf("[18]         Dark chocolate milkshake   250ml                      165\n");
    printf("[19]         Cappuccino                 250ml                      100\n");
    printf("[20]         Sprite                     250/500ml                  20/30\n\n");

}
int main ()
{
    printf ("\t\t  ***Welcome To the Cafe***\n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                system ("COLOR 4");
                printf ("We are closed come by again\n\n\n");
                return 0;
            }
        }
    }
}
