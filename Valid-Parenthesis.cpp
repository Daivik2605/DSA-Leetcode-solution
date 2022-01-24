class Solution {
public:
    bool isMatching(char a, char b){
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
    }
    bool isValid(string s) {
        stack<char> s1;
        char x;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                s1.push(s[i]);
                continue;
            }
            if(s.empty()){
                return false;
            }
            if(s[i]==')' && !s1.empty()){
                x=s1.top();
                if(isMatching(x,s[i])){
                    s1.pop();
                }else{
                   return false; 
                }
            }else if(s[i]=='}' && !s1.empty()){
                x=s1.top();
                if(isMatching(x,s[i])){
                    s1.pop();
                }else{
                   return false; 
                }
            }else if(s[i]==']' && !s1.empty()){
                x=s1.top();
                if(isMatching(x,s[i])){
                    s1.pop();
                }else{
                   return false; 
                }
            }else{
                   return false; 
                }
        }
        return (s1.empty());
    }
};
