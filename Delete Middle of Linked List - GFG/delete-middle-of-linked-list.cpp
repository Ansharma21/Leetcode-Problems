//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

/* Function to get the middle of the linked list*/
struct Node *deleteMid(struct Node *head);
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		head = deleteMid(head);
		printList(head); 
	}
	return 0; 
} 



// } Driver Code Ends


/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

 Node*middleNode(Node* head) {
       if(head == NULL || head-> next == NULL){
           return head ;
       }
       if(head->next->next == NULL){
           return head->next ;
       }
       Node*slow = head ;
       Node*fast = head->next ;
       while(fast != NULL){
           fast = fast->next ;
           if(fast != NULL){
               fast =  fast->next ;
           }
           slow = slow->next ;
       }
       return slow ;
    }
Node* deleteMid(Node* head){
      if(head == NULL || head->next == NULL){
        return NULL;
      }
      Node* mid = middleNode(head);
      if(mid->next == NULL){
          head->next = NULL;
      }
      else {
       Node* temp = head ;
       while(temp->next != mid){
           temp = temp->next;
       }
       temp->next = mid->next ;
      }
      return head ;
}