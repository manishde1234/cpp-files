      stack <char> st;
        for(int i = 0;i < s.size(); i++){
            if(s[i] =='(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else if(!st.empty() && st[i] == ')' && st.top() == '('){
                st.pop();
            }
            else if(!st.empty() && st[i] == '}' && st.top() == '{'){
                st.pop();
            }
            else if(!st.empty() && st[i] == ']' && st.top() == '['){
                st.pop();
            }
            else {
                return false;
            }
        }
        return(st.size() == 0)? true:false;