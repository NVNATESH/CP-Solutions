class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        for(int i = 0;i<n;i++){
            unordered_map<int,int> freq;
            vector<int> v;
            bool valid = true;
            for(int j = i;j<n;j++){
                int x = nums[j];
                if(freq[x]==0){
                    v.push_back(x);
                }
                freq[x]++;
                int k = v.size();
                if(freq[x]!=k){
                    valid = false;
                }
                valid = true;
                for(int t = 0;t<k;t++){
                    if(freq[v[t]] != t+1){
                        valid = false;
                        break;
                    }
                }
                if(valid) ans++;
            }
        }
        return ans;
    }
};