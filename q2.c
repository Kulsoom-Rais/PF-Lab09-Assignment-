#include <stdio.h>

void updateBalances(float *bal, int n) {
    char type;
    float amount;
	int i;
    for(i=0;i<n;i++){
        printf("\nAccount %d (d=deposit, w=withdraw): ", i+1);
        scanf(" %c", &type);

        printf("Amount: ");
        scanf("%f", &amount);

        if(type=='d') bal[i] += amount;
        else if(type=='w') bal[i] -= amount;
    }
}

float avgBalance(float *bal, int n){
    float sum = 0;
    int i;
    for(i=0;i<n;i++) sum += bal[i];
    return sum / n;
}

int main() {
    float balance[5];
	int i;
    printf("Enter balances of 5 customers:\n");
    for(i=0;i<5;i++) scanf("%f", &balance[i]);

    updateBalances(balance, 5);

    printf("\nUpdated Balances:\n");
    for(i=0;i<5;i++) printf("Acc %d: %.2f\n", i+1, balance[i]);

    printf("Average Balance: %.2f\n", avgBalance(balance, 5));

    return 0;
}

