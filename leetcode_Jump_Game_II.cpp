class Solution {
public:
    int jump(vector<int>& nums) {
        int temp = 0;
        int m = nums.size();
        int step=0;
        int pos=0;
        int next=0;
        if(nums.size()==1){
            return 0;
        }
        while(pos+nums[pos]<m-1){
            for(int i=1;i<=nums[pos];++i){
                if(temp<=i+nums[pos+i]){
                    temp = max(temp,i+nums[pos+i]);
                    next = pos+i;
                } 
            }
            step++;
            pos = next;
            temp = 0;
        
        }
        step++;
        return step;
        
    }
};
