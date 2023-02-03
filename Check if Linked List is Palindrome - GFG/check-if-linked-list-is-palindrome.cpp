//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    Node *  reverse(Node* head_ref){
        Node*temp = NULL;
        Node*cur;
        while(head_ref!=NULL)
        {
            cur = head_ref;
            head_ref = head_ref->next;
            cur->next = temp;
            temp = cur;
        }
        return temp;
    }
    bool isPalindrome(Node *head)
    {
        Node*fast = head;
        Node*slow = head;
        
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow= slow->next;
            fast = fast->next->next;
        }
        slow->next = reverse(slow->next);
        slow = slow->next;
        
        while(slow!=NULL)
        {
            if(head->data != slow->data)
            {
                return false;
            }
            head = head->next;
            slow = slow->next;
        }
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends