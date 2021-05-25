
class Solution{
public:
    string Reduced_String(int k,string s){
       stack<pair<char,int>>st;
       int n=s.size();
       int c=0;
       if(k==1)
       {
           return "";
       }
       for(int i=0;i<n;i++)
       {
         if(st.empty()==true)
         {
             st.push(make_pair(s[i],1));
         }
         else
         {
             if(s[i]==(st.top().first))
             {
                 st.push({s[i],st.top().second+1});
                 if(st.top().second==k)
                 {
                     int x=k;
                     while(x--)
                     {
                         st.pop();
                     }
                 }
             }
             else
             {
                 st.push(make_pair(s[i],1));
             }
         }
       }
         string str;
         while(!st.empty())
         {
             str+=st.top().first;
             st.pop();
         }
       reverse(str.begin(),str.end());
       return str;// Your code goes here
    }
    };
