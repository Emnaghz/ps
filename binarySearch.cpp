int search(vector<int>& nums, int target) {
       int left = 0, right = nums.size()-1;
           while(right-left >= 0){
               int m = left+(right - left) /2;
               if(nums[m] == target)
                   return m;
               else if(nums[m] > target)
                   right = m-1;
               else
                   left = m+1;
           }
        return -1;
    }