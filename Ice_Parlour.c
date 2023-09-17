#include<stdio.h>

int main()
{
    int choice;
    int choice1;
    char name[20];
    char icescream[20];
    char ml[20];
    char Rs[5];

    printf("\n       Welcome To Our Shop \"Scoops of Smiles\"\n\n");
    printf("What Can I Do For You Today, Here Is Menu Card!!\n");


    printf("\n 1) Vanila \t250ml-Rs50/-\n\t        500ml-Rs100/-\n\t\t1000ml-Rs200/-\n \n2) Strawberry \t250ml-Rs50/-\n\t        500ml-Rs100/-\n\t\t1000ml-Rs200/-\n\n 3) Kesar Pista 250ml-Rs50/-\n\t        500ml-Rs100/-\n\t\t1000ml-Rs200/-\n\n 4) Mango Tango 250ml-Rs50/-\n\t         500ml-Rs100/-\n\t         1000ml-Rs200/-\n  \n 5) Tooti Frooti 250ml-Rs50/-\n\t         500ml-Rs100/-\n\t         1000ml-Rs200/-\n  \n 6) Chocolate 250ml-Rs50/-\n\t         500ml-Rs100/-\n\t         1000ml-Rs200/-\n  \n 7) Butter Scotch 250ml-Rs50/-\n\t         500ml-Rs100/-\n\t         1000ml-Rs200/-\n  \n 8) Black Currant 250ml-Rs50/-\n\t         500ml-Rs100/-\n\t         1000ml-Rs200/-\n  \n 9) Choco Chips 250ml-Rs50/-\n\t         500ml-Rs100/-\n\t         1000ml-Rs200/-\n  \n  ");
    printf("Choose Any Number\, If you dont want any press '0'::");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
           icescream[20]= "Vanila";
           printf("WoW Vanila Is Great Choice!!!\nEnter Quantity You Want In 'ml' 1)250ml 2)500ml 3)1000ml :: ");
           scanf("%d",&choice1);
           switch (choice1)
           {
           case 1:
                    printf("250ml");
                    ml[20]="250ml";
                    Rs[5]="50/-";
            break;
           case 2:
                    printf("500ml");
                    ml[20]="500ml";
                    Rs[5]="100/-";
            break;
            case 3:
                    printf("1000ml");
                    ml[20]="1000ml";
                    Rs[5]="200/-";
            break;


           default:
                    printf("Choose Between 1 to 3 Only");
            break;
           }


        break;
    case 2:
            icescream[20]= "Strawberry";
           printf("WoW Strawberry Is Great Choice!!!\nEnter Quantity You Want In 'ml' 1)250ml 2)500ml 3)1000ml :: ");
           scanf("%d",&choice1);
           switch (choice1)
           {
           case 1:
                    printf("250ml");
                     ml[20]="250ml";
                     Rs[5]="50/-";
            break;
           case 2:
                    printf("500ml");
                    ml[20]="500ml";
                    Rs[5]="100/-";
            break;
            case 3:
                    printf("1000ml");
                    ml[20]="1000ml";
                    Rs[5]="200/-";
            break;


           default:
                    printf("Choose Between 1 to 3 Only");
            break;
           }
        case 3:
            icescream[20]= "Kesar Pista";
           printf("WoW Kesar Pista Is Great Choice!!!\nEnter Quantity You Want In 'ml' 1)250ml 2)500ml 3)1000ml :: ");
           scanf("%d",&choice1);
           switch (choice1)
           {
           case 1:
                    printf("250ml");
                    ml[20]="250ml";
                    Rs[5]="50/-";
            break;
           case 2:
                    printf("500ml");
                     ml[20]="500ml";
                     Rs[5]="100/-";
            break;
            case 3:
                    printf("1000ml");
                    ml[20]="1000ml";
                    Rs[5]="200/-";
            break;


           default:
                    printf("Choose Between 1 to 3 Only");
            break;
           }
        case 4:
         icescream[20]= "Mango Tango";
           printf("WoW Mango Tango Is Great Choice!!!\nEnter Quantity You Want In 'ml' 1)250ml 2)500ml 3)1000ml :: ");
           scanf("%d",&choice1);
           switch (choice1)
           {
           case 1:
                    printf("250ml");
                    ml[20]="250ml";
                    Rs[5]="50/-";
            break;
           case 2:
                    printf("500ml");
                    ml[20]="500ml";
                    Rs[5]="100/-";
            break;
            case 3:
                    printf("1000ml");
                    ml[20]="1000ml";
                    Rs[5]="200/-";
            break;


           default:
                    printf("Choose Between 1 to 3 Only");
            break;
           }
        case 5:
            icescream[20]= "Tooti Frooti";
           printf("WoW Tooti Frooti Is Great Choice!!!\nEnter Quantity You Want In 'ml' 1)250ml 2)500ml 3)1000ml :: ");
           scanf("%d",&choice1);
           switch (choice1)
           {
           case 1:
                    printf("250ml");
                    ml[20]="250ml";
                    Rs[5]="50/-";
            break;
           case 2:
                    printf("500ml");
                    ml[20]="500ml";
                    Rs[5]="100/-";
            break;
            case 3:
                    printf("1000ml");
                    ml[20]="1000ml";
                    Rs[5]="200/-";
            break;


           default:
                    printf("Choose Between 1 to 3 Only");
            break;
           }
        case 6:
           icescream[20]= "Chocolate";
           printf("WoW Chocolate Is Great Choice!!!\nEnter Quantity You Want In 'ml' 1)250ml 2)500ml 3)1000ml :: ");
           scanf("%d",&choice1);
           switch (choice1)
           {
           case 1:
                    printf("250ml");
                    ml[20]="250ml";
                    Rs[5]="50/-";
            break;
           case 2:
                    printf("500ml");
                    ml[20]="500ml";
                    Rs[5]="100/-";
            break;
            case 3:
                    printf("1000ml");
                    ml[20]="1000ml";
                    Rs[5]="200/-";
            break;


           default:
                    printf("Choose Between 1 to 3 Only");
            break;
           }
        case 7:
           printf("WoW Butter Scotch Is Great Choice!!!\nEnter Quantity You Want In 'ml' 1)250ml 2)500ml 3)1000ml :: ");
           scanf("%d",&choice1);
           switch (choice1)
           {
           case 1:
                    printf("250ml");
                    ml[20]="250ml";
                    Rs[5]="50/-";
            break;
           case 2:
                    printf("500ml");
                    ml[20]="500ml";
                    Rs[5]="100/-";
            break;
            case 3:
                    printf("1000ml");
                    ml[20]="1000ml";
                    Rs[5]="200/-";
            break;


           default:
                    printf("Choose Between 1 to 3 Only");
            break;
           }
        case 8:
           printf("WoW Black Currant Is Great Choice!!!\nEnter Quantity You Want In 'ml' 1)250ml 2)500ml 3)1000ml :: ");
           scanf("%d",&choice1);
           switch (choice1)
           {
           case 1:
                    printf("250ml");
                    ml[20]="250ml";
                    Rs[5]="50/-";
            break;
           case 2:
                    printf("500ml");
                    ml[20]="500ml";
                    Rs[5]="100/-";
            break;
            case 3:
                    printf("1000ml");
                    ml[20]="1000ml";
                    Rs[5]="200/-";
            break;


           default:
                    printf("Choose Between 1 to 3 Only");
            break;
           }
        case 9:
           printf("WoW Choco Chips Is Great Choice!!!\nEnter Quantity You Want In 'ml' 1)250ml 2)500ml 3)1000ml :: ");
           scanf("%d",&choice1);
           switch (choice1)
           {
           case 1:
                    printf("250ml");
                    ml[20]="250ml";
                    Rs[5]="50/-";
            break;
           case 2:
                    printf("500ml");
                    ml[20]="500ml";
                    Rs[5]="100/-";
            break;
            case 3:
                    printf("1000ml");
                    ml[20]="1000ml";
                    Rs[5]="200/-";
            break;


           default:
                    printf("Choose Between 1 to 3 Only");
            break;
           }
    
        default: 
            printf("Enter Only in 1 to 9");
        break;
    }

        printf("\nEnter Your Name ::");
    scanf("%s",&name);

    printf("\n___________________________________________________");

    printf("\n\t         \"Scoops of Smiles\"");
    printf("\n___________________________________________________\n");

    printf("Invoice For::%s",name); printf("\t\tInvoice No:: 152 ");
    printf("\n\t\t\t\tInvoice Date 12/09/2023\n");
    printf("\n___________________________________________________");
    printf("\n   Item No.  \t Description   \t Qty   \t Total");
    printf("\n___________________________________________________");
    printf("\n\t1\t   %s \t%s  \t  %s  \n\n\n\n\n\n\n", icescream,ml,Rs);
    printf("\t\t\t   Grand Total::%s ",Rs);
    printf("\n___________________________________________________");
    printf("\n   \n\tThank You Visit Again!!!");
    printf("\n___________________________________________________\n\n\n");


    

    

    
    
    








}