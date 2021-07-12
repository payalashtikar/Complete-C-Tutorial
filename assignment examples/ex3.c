/*km to miles , inches to foot , cms to inches , pounds to kgs , inches to meter*/

/*...................................completed .........................................*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    float KmsToMiles = 0.62137;
    float InchesToFeet = 0.0833333;
    float CmsToInches = 0.393701;
    float PoundsToKgs = 0.453592;
    float InchesToMeter = 0.0254;
    float first, second;

    while (1) // mtlb chalate rhe jb tak break nhi hota//infinite while loop
    {
        printf("enter\n the input character q to quit\n  1. km to miles\n  2.inches to foot\n  3.cms to inches\n  4.pounds to kgs \n 5.inches to meter\n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quiting the program...");
            goto end;
            break;

        case '1':
            printf("enter quantity in terms of first unit :\n");
            scanf("%f", &first);
            second = first * KmsToMiles;
            printf("%f kms is equal to %f miles \n", first, second);
            break;

        case '2':
            printf("enter quantity in terms of first unit :\n");
            scanf("%f", &first);
            second = first * InchesToFeet;
            printf("%f inches is equal to %f feet \n", first, second);
            break;

        case '3':
            printf("enter quantity in terms of first unit :\n");
            scanf("%f", &first);
            second = first * CmsToInches;
            printf("%f cms is equal to %f inches \n", first, second);
            break;

        case '4':
            printf("enter quantity in terms of first unit :\n");
            scanf("%f", &first);
            second = first * PoundsToKgs;
            printf("%f pounds is equal to %f kgs \n", first, second);
            break;

        case '5':
            printf("enter quantity in terms of first unit :\n");
            scanf("%f", &first);
            second = first * InchesToMeter;
            printf("%f  inches is equal to %f meters \n", first, second);
            break;

        default:
            printf("this is default case");
            break;
        }
    }
end:

    return 0;
}
