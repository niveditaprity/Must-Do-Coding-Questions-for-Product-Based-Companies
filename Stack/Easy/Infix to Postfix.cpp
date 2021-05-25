class Solution
{
    public:
    //Function to convert an infix expression to a postfix expression.
    int precedence(char c)
    {
        if(c=='^')
        {
            return 3;
        }
       else if(c=='*'||c=='/')
        {
            return 2;
        }
        else if(c=='+'||c=='-')
        {
            return 1;
        }
        else
        {
            return -1;
        }
        
    }
    string infixToPostfix(string s)
    {
       string ps;
       int n=s.size();
       stack<char>st;
       st.push('N');
       for(int i=0;i<n;i++)
       {
           if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
           {
               ps+=s[i];
           }
           else if(s[i]=='(')
           {
            st.push('(');  
           }
           
           else if(s[i]==')')
           {
               while(st.top()!='N'&&st.top()!='(')
               {
                   char ch=st.top();
                   st.pop();
                   ps+=ch;
               }
               if(st.top() == '(') 
            { 
                st.pop(); 
            } 
           }
           else{ 
            while(st.top() != 'N' && precedence(s[i]) <= precedence(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ps += c; 
            } 
            st.push(s[i]); 
        } 
  
    } 
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ps += c; 
    } 
    return ps;// Your code here
    }
};
