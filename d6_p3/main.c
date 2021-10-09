#include <stdio.h>

int main()
{
    int n = 5;
    int i;
    int price[n];
    int qty[n];
    int sum[n];
    int total=0;
    int discount_percentage;
    int discount;
    printf("Enter the prices of items\n");
    for(i=0;i<n;i++){
        printf("Item %d : ",i+1);
        scanf("%d", &price[i]);
    }
    printf("Enter the quantity of items\n");
    for(i=0;i<n;i++){
        printf("Item %d : ",i+1);
        scanf("%d", &qty[i]);
    }
    for(i=0;i<n;i++){
        sum[i] = price[i] * qty[i];

        total = total + sum[i];
    }
    if(total>5000){
        discount_percentage = 15;
    }
    else if(total>1000 && total < 5000){
        discount_percentage = 10;
    }
    else{
        discount_percentage = 5;
    }
    discount = total * discount_percentage / 100;


    printf("Item\tPrice\tQuantity\tSubtotal\n");
    for(i=0;i<n;i++){
        printf("Item %d\t%d\t%d\t\t%d \n",i+1,price[i],qty[i],sum[i]);
    }
    printf("---------------------------------------------------------\n");
    printf("Total = %d \n",total);
    printf("Discount %d\%% = %d \n", discount_percentage, discount);
    printf("---------------------------------------------------------\n");
    printf("Grand Total = %d \n",(total-discount));


    return 0;
}
