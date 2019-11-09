//
//  main.c
//  hotel
//
//  Created by Devanshi  Shah on 27/10/18.
//  Copyright © 2018 Devanshi  Shah. All rights reserved.
//

#include <stdio.h>
int main()
{
    int menu,submenu,amount=0,amt,n,p;
    while(1)
    {
        printf("\n 1.pizza \n 2.pasta \n 3.sandwhich \n 4.beverages \n 5.print the total bill \n what would you like to order: \t");
    scanf("%d",&menu);
    if(menu==1)
    {
        printf("\n 1.margarita \t 300 \n 2.pepper paneer \t 450 \n 3.cheesy blast \t 500 \n 4.onion tamato pizza \t 530 \n your choice?: \t");
        scanf("%d",&submenu);
        if (submenu==1)
        {
            printf("\n Enter the quantity: \t");
            scanf("%d",&n);
            amount=amount+300*n;
            amt=300*n;
            printf("\n you have ordered margarita pizza of amount %d",amt);
            printf("\n total amount is %d",amount);
        }
        else if (submenu==2)
        {
            printf("\n Enter the quantity: \t");
            scanf("%d",&n);
            amount=amount+450*n;
            amt=450*n;
            printf("\n you have ordered pepper paneer pizza of amount %d",amt);
            printf("\n total amount is %d",amount);
        }
        else if (submenu==3)
        {
            printf("\n Enter the quantity: \t");
            scanf("%d",&n);
            amt=500*n;
            amount=amount+500*n;
            printf("\n you have ordered cheesy blast pizza of amount %d",amt);
            printf("\n total amount is %d",amount);
            
        }
        else
        {
            printf("\n Enter the quantity: \t");
            scanf("%d",&n);
            amount=amount+530*n;
            amt=530*n;
            printf("\n you have ordered tamato onion pizza of amount %d",amt);
            printf("\n total amount is %d",amount);
        }
    }
    else if(menu==2)
    {
        printf("\n 1.White sauce pasta \t 399 \n 2.Red sauce pasta \t 399 \n 3.pink sauce pasta \t 399 \n your choice?: \t");
        scanf("%d",&submenu);
        {
            printf("\n Enter the quantity: \t");
            scanf("%d",&n);
            amount=amount+399*n;
            amt=399*n;
            printf("\n you have ordered pastas amount %d",amt);
            printf("\n total amount is %d",amount);
        }
    }
    else if (menu==3)
    {
        printf("\n 1.veg. sandwhich \t 99 \n 2.veg.grilled sandwhich \t 149 \n 3.veg. cheese sandwhich \t 199 \n 4.veg. mayo sandwhich \t 249 \n your choice?: \t");
        scanf("%d",&submenu);
        {
            if (submenu==1)
            {
                printf("\n Enter the quantity: \t");
                scanf("%d",&n);
                amount=amount+99*n;
                amt=99*n;
                printf("\n you have ordered veg. sandwhich of amount %d",amt);
                printf("\n total amount is %d",amount);
            }
            else if (submenu==2)
            {
                printf("\n Enter the quantity: \t");
                scanf("%d",&n);
                amount=amount+149*n;
                amt=149*n;
                printf("\n you have ordered veg. grilled sandwhich of amount %d",amt);
                printf("\n total amount is %d",amount);
            }
            else if (submenu==3)
            {
                printf("\n Enter the quantity: \t");
                scanf("%d",&n);
                amount=amount+199*n;
                amt=199*n;
                printf("\n you have ordered veg. cheese sandwhich of amount %d",amt);
                printf("\n total amount is %d",amount);
            }
            else
            {
                printf("\n Enter the quantity: \t");
                scanf("%d",&n);
                amount=amount+249*n;
                amt=249*n;
                printf("\n you have ordered veg. mayo sandwhich of amount %d",amt);
                printf("\n total amount is %d",amount);
                
            }
            
        }
    }
    else if(menu==4)
    {
        printf("\n 1.Tea \t 60 \n 2.Coffee \t 80 \n 3.Ice tea \t 50 \n 4.cold coffee \t 90 \n your choice?");
        scanf("%d",&submenu);
        {
            if(submenu==1)
            {
                printf("\n Enter the quantity: \t");
                scanf("%d",&n);
                amount=amount+60*n;
                amt=60*n;
                printf("\n you have ordered tea of amount %d",amt);
                printf("\n total amount is %d",amount);
            }
            else if(submenu==2)
            {
                printf("\n Enter the quantity: \t");
                scanf("%d",&n);
                amount=amount+80*n;
                amt=80*n;
                printf("\n you have ordered coffee of amount %d",amt);
                printf("\n total amount is %d",amount);
            }
            else if(submenu==3)
            {
                printf("\n Enter the quantity: \t");
                scanf("%d",&n);
                amount=amount+50*n;
                amt=50*n;
                printf("\n you have ordered ice tea of amount %d",amt);
                printf("\n total amount is %d",amount);
            }
            else
            {
                printf("\n Enter the quantity: \t");
                scanf("%d",&n);
                amount=amount+90*n;
                amt=90*n;
                printf("\n you have ordered cold coffee of amount %d",amt);
                printf("\n total amount is %d",amount);
                
            }
        }
    }
        else
        {
         printf("\n the total bill is %d",amount);
            printf("\n 1.cash \n 2.credit card \n 3.debit card \n 4.paytym \n Enter the mode of payment: \t");
            scanf("%d",&p);
            {
            if(p==1)
            {
                printf("\n Your payment method is cash");
            }
            else if(p==2)
            {
                printf("\n Your payment method is through credit card");
            }
            else if(p==3)
            {
                printf("\n Your payment method is through debit card");
            }
            else if(p==4)
            {
                printf("\n Your payment method is paytym");
            }
            else
            {
                printf("\n invalid payment method");
            }
            }
            printf("\n THANK YOU. VISIT AGAIN :)");
             break;
            
        
        }
    
    }
    
   
}
