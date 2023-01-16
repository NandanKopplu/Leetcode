//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> S;
        
        for(char it : x)
        {
            if(it == '(' or it == '{' or it == '[')
            S.push(it);
            
            else
            {
                if(it == ')')
                {
                    if(S.empty() or S.top() != '(')
                    return false;
                }
                
                if(it == '}')
                {
                    if(S.empty() or S.top() != '{')
                    return false;
                }
                
                if(it == ']')
                {
                    if(S.empty() or S.top() != '[')
                    return false;
                }
                
                S.pop();
            }
        }
        
        return S.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends