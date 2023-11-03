#include "array.h"

int main(void) {
    int nums[7] = {4,5,6,7,0,1,2};
    printf("Index is %d\n", search(nums, sizeof(nums)/sizeof(int), 0));
    return 0;
}
