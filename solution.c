int removeDuplicates(int* nums, int numsSize){
    int index = 0;

    int i = 0;
    while (i < numsSize - 1) {
        if (nums[i] != nums[i + 1]) {
            nums[index] = nums[i];

            index++;
        }
        
        i++;
    }

    nums[index] = nums[i];

    return index + 1;
}
