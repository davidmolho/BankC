//
//  yeni_deneme.c
//  C uzaktan akademi
//
//  Created by Yusuf Baykan on 24.09.2022.
//


#include <stdio.h>

int main()
{
    printf("Please Insert your card.\nEnter your PIN.\n");
    int islem;
    int bakiye = 1000;
    int tutar;
    printf("Operations\n1:Withdraw\n2:Deposit\n3:Money Transfer\n4:Account Balance\n5:Take your card back\n\n\n");
    
    printf("Choose Operator:");
    scanf("%d", &islem);
    
    switch(islem) {
        case 1:
        printf("Balance: %d\n",bakiye);
        printf("Choose withdraw:");
        scanf("%d",&tutar);
        if (tutar > bakiye) {
            printf("out of Balance\n");
            
        }
        bakiye -= tutar;
        printf("Account Balance: %d",bakiye);
        break;
        
        case 2:
         printf("Account Balance: %d\n",bakiye);
        printf("Yatiralicak tutar:");
        scanf("%d",&tutar);
        bakiye += tutar;
        printf("Account Balance: %d",bakiye);
        break;
        
        case 3:
         printf("Account Balance: %d\n",bakiye);
        printf("amount of money transfer:\n");
        scanf("%d",&tutar);
        if (tutar > bakiye) {
            printf("out of Balance\n");
            
        }
        bakiye -= tutar;
        printf("Account Balance: %d",bakiye);
        break;
        
        case 4:
        printf("Account Balance: %d\n",bakiye);
        
        case 5:
        printf("Take your card back.\n");
        break;
        
        default:
        
        printf("Unkown Operator");
        break;
    }

    return 0;
}
