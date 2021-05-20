#include<bits/stdc++.h>
class Solution {
public:
    bool isValid(string str) {
        stack<char>st;
        for(int i=0;i<str.size();i++){
            char ch=str[i];
            if(ch=='('||ch=='['||ch=='{'){
                st.push(ch);
            }
            else{
                if(st.empty()==true){
                    return false;
                }
				
                else if(ch==')'&&st.top()!='('){
                    return false;
                }
                else if(ch==']'&&st.top()!='['){
                    return false;
                }
                else if(ch=='}'&&st.top()!='{'){
                    return false;
                }
                st.pop();
            }
        }
		
        return st.empty();
    }
};
