//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
      for( int i = 0; i < s.length(); i++){
        string temp =  "";
        for(int j = i; j < x.length()+i; j++){
            temp+=s[j];
        }
        if(temp == x){
            return i;
        }
    }
    return -1;
}