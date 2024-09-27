int removeDuplicates(int* nums, int numsSize) {
   int i;
   {
    if(numsSize==0)
return 0;
   }


int j = 0;
for(i=1;i<numsSize;i++)
if(nums[i]!=nums[j]) 
nums[++j]=nums[i];
return j+1;
}
