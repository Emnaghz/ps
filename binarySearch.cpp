----------------classc binary search----------------
//algorithm with O(log n) runtime complexity

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


----------------Search in Rotated Sorted Array----------------
//algorithm with O(log n) runtime complexity
//problem link: https://leetcode.com/explore/learn/card/binary-search/125/template-i/952/

int search(vector<int>& nums, int target) {
        int left = 0, right, mid, res = -2;
        int minElementIndex = std::min_element(nums.begin(),nums.end()) - nums.begin();
        right = minElementIndex;
        while(right >= left)
        {
            mid = left + (right - left) / 2;
            if(nums[mid] == target)
               {res = mid;
                break;}
            else if(nums[mid] > target)
                right = mid - 1;
            else
                left = mid+ 1;
        }
        if(res == -2)
        {
            left = minElementIndex;
            right = nums.size()-1;
            while(right >= left)
                {
                    mid = left + (right - left) / 2;
                    if(nums[mid] == target)
                       {res = mid;
                        break;}
                    else if(nums[mid] > target)
                        right = mid - 1;
                    else
                        left = mid+ 1;
                }
            
        }
        if(res == -2)
            return -1;
        else 
            return res;
    }