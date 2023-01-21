//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
        stack<char> st;
        int maxi=0 , count=0;
        for(int i=0 ; i<s.length() ; i++)
        {
            if(s[i] == '(')
            {
                st.push('(');
                count++;
                maxi = max(maxi,count);
            }
            else if(s[i] == ')')
            {
                st.pop();
                count--;
                maxi = max(count,maxi);
            }
            else {
               continue; 
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends