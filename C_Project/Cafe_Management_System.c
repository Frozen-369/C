#include <stdio.h>
struct manage
{
    int bill;
    int prod_num;
    int qty;
} item[13];

void c_momo()
{
    int ord1;
    printf("You have chosen Chicken Momo.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord1);
    printf("\n");
    item[0].qty = ord1;
    item[0].bill = 170 * ord1;
}

void c_pizza()

{
    int ord2;
    printf("You have chosen Chicken Pizza.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord2);
    printf("\n");
    item[1].qty = ord2;
    item[1].bill = 270 * ord2;
}

void v_momo()
{
    int ord3;
    printf("You have chosen Veg Momo.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord3);
    printf("\n");
    item[2].qty = ord3;
    item[2].bill = 150 * ord3;
}

void v_pizza()
{
    int ord4;
    printf("You have chosen Veg Pizza.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord4);
    printf("\n");
    item[3].qty = ord4;
    item[3].bill = 250 * ord4;
}

void i_coffee()
{
    int ord5;
    printf("You have chosen Iced Coffee.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord5);
    printf("\n");
    item[4].qty = ord5;
    item[4].bill = 110 * ord5;
}
void c_drinks()
{
    int ord6;
    printf("You have chosen Cold Drinks.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord6);
    printf("\n");
    item[5].qty = ord6;
    item[5].bill = 70 * ord6;
}

void capuccino()
{
    int ord7;
    printf("You have chosen Capuccino.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord7);
    printf("\n");
    item[6].qty = ord7;
    item[6].bill = 160 * ord7;
}
void latte()
{
    int ord8;
    printf("You have chosen Latte.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord8);
    printf("\n");
    item[7].qty = ord8;
    item[7].bill = 180 * ord8;
}
void lassi()
{
    int ord9;
    printf("You have chosen Lassi.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord9);
    printf("\n");
    item[8].qty = ord9;
    item[8].bill = 100 * ord9;
}
void m_tea()
{
    int ord11;
    printf("You have chosen Milk Tea.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord11);
    printf("\n");
    item[9].qty = ord11;
    item[9].bill = 60 * ord11;
}

void b_tea()
{
    int ord11;
    printf("You have chosen Black Tea.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord11);
    printf("\n");
    item[10].qty = ord11;
    item[10].bill = 30 * ord11;
}
void espresso()
{
    int ord12;
    printf("You have chosen Espresso.\n");
    printf("Enter the quantity you want to order? ");
    scanf("%d", &ord12);
    printf("\n");
    item[11].qty = ord12;
    item[11].bill = 200 * ord12;
}

void create()
{
    int num;
    do
    {

        printf("Choose the number which you want to order?\n");
        printf("If you want to exit press 0 : ");
        scanf("%d", &num);
        printf("\n");

        switch (num)
        {
        case 1:
            c_momo();
            item[0].prod_num = num;
            break;

        case 2:
            c_pizza();
            item[1].prod_num = num;
            break;

        case 3:
            v_momo();
            item[2].prod_num = num;
            break;

        case 4:
            v_pizza();
            item[3].prod_num = num;
            break;

        case 5:
            i_coffee();
            item[4].prod_num = num;
            break;

        case 6:

            c_drinks();
            item[5].prod_num = num;
            break;

        case 7:
            capuccino();
            item[6].prod_num = num;
            break;

        case 8:
            latte();
            item[7].prod_num = num;
            break;

        case 9:
            lassi();
            item[8].prod_num = num;
            break;

        case 10:
            m_tea();

            item[9].prod_num = num;
            break;

        case 11:
            b_tea();
            item[10].prod_num = num;
            break;

        case 12:
            espresso();
            item[11].prod_num = num;
            break;
        }

    } while (num != 0);
}

int bill()
{
    int total;
    for (int i = 0; i < 12; i++)
    {

        total += item[i].bill;
    }

    return total;
}

void f_bill()
{
    int num1, quantity, per_bill;
    FILE *fp;
    printf("\n================================ZED CAFE================================");
    printf("\n");
    printf("-------------------------------------------------------------------------");
    printf("\n\tS.N\t\tITEMS\t\tQUANTITY\t\tPRICE\n");
    printf("-------------------------------------------------------------------------");
    fp = fopen("Bill.txt", "a+");

    for (int k = 0; k < 12; k++)
    {
        num1 = item[k].prod_num;
        quantity = item[k].qty;
        per_bill = item[k].bill;

        switch (num1)
        {
        case 1:
            printf("\n\t1.\t    Chicken MO:MO\t    %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Chicken MO:MO,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 2:
        
            printf("\n\t2.\t    Chicken Pizza\t    %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Chicken Pizza,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 3:
            printf("\n\t3.\t     Veg MO:MO\t            %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Veg MO:MO,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 4:
            printf("\n\t4.\t    Veg Pizza\t            %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Veg Pizza,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 5:
            printf("\n\t5.\t    Iced Coffee\t            %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Iced Coffee,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 6:
            printf("\n\t6.\t    Cold Drinks\t            %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Cold Drinks,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 7:
            printf("\n\t7.\t     Capuccino\t            %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Capuccino,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 8:
            printf("\n\t8.\t      Latte\t            %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Latte,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 9:
            printf("\n\t9.\t      Lassi\t            %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Lassi,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 10:
            printf("\n\t10.\t     Milk Tea\t            %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Milk Tea,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 11:
            printf("\n\t11.\t     Black Tea\t            %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Black Tea,%d,%d\n", item[k].qty, item[k].bill);
            break;

        case 12:
            printf("\n\t12.\t     Espresso\t            %d\t\t        Rs.%d\n", quantity, per_bill);
            fprintf(fp, "Espresso,%d,%d\n", item[k].qty, item[k].bill);
            break;
        }
    }
    printf("-------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t      TOTAL     Rs.%d", bill());
    fprintf(fp, " %d\n", bill());
    printf("\n-------------------------------------------------------------------------");
    fclose(fp);
}

int main()
{
    int num, choice = 0;
    printf("\n");
    printf("\n");
    printf("                Cafe Management System\n");
    printf("                _______________________");
    printf("\n");
    printf("\n");
    printf("                        MENU\n");
    printf("                        _____\n");
    printf("\n");
    printf("S.N                     ITEMS                 PRICE\n");
    printf("1.                   Chicken MO:MO           -Rs 170\n");
    printf("2.                   Chicken Pizza           -Rs 270\n");
    printf("3.                     Veg MO:MO             -Rs 150\n");
    printf("4.                     Veg Pizza             -Rs 250\n");
    printf("5.                    Iced Coffee            -Rs 110\n");
    printf("6.                    Cold Drinks            -Rs 70\n");
    printf("7.                     Capuccino             -Rs 160\n");
    printf("8.                      Latte                -Rs 180\n");
    printf("9.                      Lassi                -Rs 100\n");
    printf("10.                    Milk Tea              -Rs 60\n");
    printf("11.                    Black Tea             -Rs 30\n");
    printf("12.                    Espresso              -Rs 200\n");

    printf("\n");
    do
    {
        create();
        printf("Press 1 to confirm the order.  \n");
        printf("Press 0 to cancel and order again. \n");
        scanf("%d", &choice);
        if (choice == 0)
        {
            for (int j = 0; j < 12; j++)
            {
                item[j].bill = NULL;
            }
        }

    } while (choice == 0);

    f_bill();
    return 0;
}