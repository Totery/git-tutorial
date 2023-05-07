#include <stdio.h>
#include "../lib/espl_lib.h"

int main()
{ 
    int number;
    int user_decision;
    while(1)
    {
        printf("Please input a number.\n");
        scanf("%d",&number);
        printf("%s\n",num_to_words(number));
        printf("Do you want to continue to input number?\nIf yes, please enter 1\n");
        scanf("%d",&user_decision);
        if (user_decision!=1)
        {
            break;
        }
    }
}

/*int main()
{
    printf("Hello ESPL");
    printf("This is a new print");
    return 0;
}*/