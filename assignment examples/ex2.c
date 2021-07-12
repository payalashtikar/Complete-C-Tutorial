// maths and science --- passed then gift of 45
// maths----15
// science----15

/*.......................completed................................*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char maths, science;
    printf("have you passed in maths : \n");
    scanf("%c", &maths);
    printf("have you passed in science : \n");
    scanf("%c", &science);
    if (maths == 'yes' && science == 'yes')
    {
        printf("you have rewarded with gift of 45 rs. \n");
    }
   /* else if (maths == 'yes' && science == 'no')
    {
        printf("you have passed in maths ...!you have rewarded with gift of 15 rs. \n");
    }
    else if (maths == 'no' && science == 'yes')
    {
        printf("you have passed in science ...!you have rewareded with gift of 15 rs.");
    }*/
    else
    {
        printf("you may look as failed in both subjects maths as well as science");
    }

    return 0;
}
