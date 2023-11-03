#include "array.h"

// Search in Rotated Sorted Array

int search(int nums[], int numsSize, int target){
    int low, high;
    
    for (low = 0, high = numsSize - 1; low <= high;) {
        int mid = (low + high) / 2;
        
        if (nums[mid] == target) {
            return mid;
        }
        
        if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (nums[mid] < target && target <= nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
    }

    return -1;
}
