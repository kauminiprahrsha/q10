
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int height;
    int weight;
    int bmi;

    printf("Enter the heiht");
    scanf("%d", &height);

    printf("Enter the weight");
    scanf("%d", &height);

    bmi=(height/(weight^2));
    if (bmi<18.5)
    {
       printf("Risk of developing problems such as nutritional deficiency and osteoporosis");
    }

    if (bmi<18.5 && bmi<23)
    {
       printf("ow Risk (healthy range)");
    }

    if (bmi<23 && bmi<27.5)
    {
       printf("Moderate risk of developing heart disease, high blood pressure, stroke,diabetes");
    }
    if (27.5<bmi)
    {
       printf("High risk of developing heart disease, high blood pressure, stroke, diabetes");
    }

return 0;
}
