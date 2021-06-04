class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int i=0;
        int j=numbers.size()-1;
        while(i<j)
        {int total = numbers[i]+numbers[j];
            if(total==target)
            return vector<int>{1,1};
            else if(total<target)
            j--;
            else if(total>target)
            i++;}
            
        
        return 0;
    }
};