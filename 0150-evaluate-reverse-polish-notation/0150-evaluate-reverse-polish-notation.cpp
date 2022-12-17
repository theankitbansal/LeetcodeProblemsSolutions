class Solution {
    long resolves(int a, int b, char Operator){
        if(Operator=='+') return a+b;
        else if(Operator=='-') return a-b;
        else if(Operator=='*') return (long)a*b;
        return a/b;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<long>st;
        int n=tokens.size();
        for(int i=0; i<n; i++){
            if(tokens[i].size()==1 and tokens[i][0]<48){
                long integer2=st.top();
                st.pop();
                long integer1=st.top();
                st.pop();
                
                string Operator=tokens[i];
                long resolvesAns=resolves(integer1, integer2, Operator[0]);
                st.push(resolvesAns);
                
            }else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
        
    }
};