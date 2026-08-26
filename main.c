#include <stdio.h>
#include <math.h>

int main() {

    double principle = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0.0;
    double total = 0.0;

    printf("Compound Intrest Calculator\n");

    printf("Enter the principle (P): ");
    scanf("%lf", &principle);

    printf("Enter the rate % (R): ");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years (Y): ");
    scanf("%d", &years);

    printf("Enter the # times compounded per year (N): ");
    scanf("%d", &timesCompounded);

    total = principle * pow(1 +  rate / timesCompounded, timesCompounded * years);
    
    printf("After %d years, your total will be $%.2lf", years, total);

    return 0;
}