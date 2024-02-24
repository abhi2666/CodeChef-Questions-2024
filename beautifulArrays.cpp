// leetcode questions
// build up the array using 1...try to form even elements from 1 and odd elements from 1
class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int>res = {1};     
        while(n--){
            vector<int>temp;
            for(auto ele : res) if(ele*2-1 <= n) temp.push_back(ele*2-1);
            for(auto ele : res) if(ele*2 <= n) temp.push_back(ele*2);
            res = temp;
        }
        return res;
    }
};