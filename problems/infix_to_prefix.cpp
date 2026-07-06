#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int priority( char op)
{
    if(op =='^'){
        return 3;
    }
    else if(op == '*' || op== '/'){
        return 2;
    }
    else if( op == '+' || op == '-'){
        return 1;
    }
    else {
        return -1;
    }
}

string infixToPostfix(string s){
stack <char> st;
int n=s.length();
int i=0;
string ans="";
while(i<n){
    if((s[i]>='a' && s[i]<='z')||
      (s[i]>='A' && s[i]<='Z')||
      (s[i]>='0' && s[i]<='9') )
      {
            ans=ans+s[i];
      }
      else if(s[i]=='('){
            st.push(s[i]);
      }
       else if(s[i]==')'){
            while(st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
      }
      else{
        while(!st.empty() && priority(s[i])<= priority(st.top())){
            ans+=st.top();
            st.pop();
        }
        st.push(s[i]);
      }
      i++;
}
while(!st.empty())
{
    ans=ans+st.top();
    st.pop();
}
return ans;
}
string infixToPrefix(string s){
    reverse(s.begin(), s.end());
     for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            s[i] = ')';
        else if (s[i] == ')')
            s[i] = '(';
    }
     string postfix = infixToPostfix(s);
       reverse(postfix.begin(), postfix.end());

    return postfix;
}
int main(){
string express;
cin>>express;

string postfix= infixToPrefix(express);
cout << postfix << endl;
}