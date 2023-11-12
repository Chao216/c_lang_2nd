#include <stdio.h>
#include <stdlib.h>

int main(){

    int nums[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("%d\n",nums[0][0]);
    printf("%d\n",nums[1][0]);
    printf("%d\n",nums[2][1]);
    printf("%d\n",nums[1][2]);

    return 0;
}