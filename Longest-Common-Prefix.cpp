class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        for(int i=0; i<strs[0].length(); i++){//strs[0]=flower, i=4
            char c = strs[0][i];// c= flower[i], i=1, c = flow
            for(int j=1; j<strs.size(); j++){// strs has 3 elements, j=1 to j=2
                if(i==strs[j].length() || strs[j][i]!=c){//4==4 f=c, 0!=6
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
        
    }
};
