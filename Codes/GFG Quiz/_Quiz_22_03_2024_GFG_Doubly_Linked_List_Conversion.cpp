/*__________________________PROBLEM__________________________*/
/*
Doubly Linked List Conversion

Given a doubly linked with each of the previous pointer assigned to null. Your task is to assign previous pointer to each of
previous nodes respectively.
Input Format :
First line of input contains number of testcases T. For each testcase, first line of input contains length of linked list N and next
line contains elements of linked list L[i].
Output Format :
For each testcase, print linked list in reverse order as per sample output shown below.
Task : Given all the other driver and utility functions. Your task is to complete function to convert to doubly.
Constraints :
1<=T<=100
1<=N<=100
0<=L[i]<=10
Example:
Input:
1
5
1 2 3 4 5
Output:
5 <- 4 <- 3 <- 2 <- 1 (single spaces on back and rear of each arrow)

*/

/*__________________________PROGRAM__________________________*/
#include <bits/stdc++.h> // Include necessary header files
using namespace std; // Allow the use of names from the std namespace without prefixing them

// Structure representing a node of a doubly linked list
struct Node
{
    int data; // Data stored in the node
    struct Node *next; // Pointer to the next node
    struct Node *prev; // Pointer to the previous node
};

// Function to create a new node with the given key value
struct Node *newNode(int key){
    struct Node *temp=new Node; // Allocate memory for a new node
    temp->data=key; // Set the data of the new node
    temp->next=NULL; // Initialize next pointer as NULL
    temp->prev=NULL; // Initialize prev pointer as NULL
    return temp; // Return pointer to the new node
}

// Function to insert a node with the given key value at the end of the linked list
struct Node *insertNode(struct Node *head,int key)
{
    if(head==NULL) // If the list is empty
        head=newNode(key); // Create a new node and set it as head
    else
    {
        head->next=insertNode(head->next,key); // Recursively insert the node in the next of current node
    }
    return head; // Return the head of the list
}

// Function to convert a singly linked list to a doubly linked list
void makeDoubly(struct Node *head)
{
    struct Node *prev = nullptr; // Initialize previous node pointer as nullptr
    struct Node *current = head; // Initialize current node pointer as head
    while (current != nullptr) { // Loop through the list until the end
        current->prev = prev; // Set the prev pointer of the current node to the previous node
        prev = current; // Update the previous node pointer
        current = current->next; // Move to the next node
    }
}

// Function to traverse the linked list and print its elements
void traverse(struct Node *head)
{
    for(struct Node *temp=head;temp!=NULL;temp=temp->next) // Loop through the list
        cout<<temp->data<<" "; // Print the data of each node
    cout<<endl; // Print newline after printing all elements
}

// Function to print the linked list in reverse order
void printBack(struct Node *head)
{
    if(head==NULL) // If the list is empty
        return; // Return from the function
    struct Node *temp=head; // Start from the head of the list
    while(temp->next) // Traverse to the last node
        temp=temp->next;
    
    while(temp!=head) // Loop until reaching the head of the list
    {
        cout<<temp->data<<" <- "; // Print data of each node followed by "<-"
        temp=temp->prev; // Move to the previous node
    }
    cout<<temp->data; // Print data of the head node
    cout<<endl; // Print newline after printing all elements
}

// Main function
int main() {
    int t; // Variable to store the number of test cases
    cin>>t; // Read the number of test cases
    while(t--) // Loop through each test case
    {
        struct Node *head=NULL; // Initialize head of the list as NULL
        int n; // Variable to store the number of elements in the list
        cin>>n; // Read the number of elements
        while(n--) // Loop to read each element and insert into the list
        {
            int x; // Variable to store the value of the element
            cin>>x; // Read the value of the element
            head=insertNode(head,x); // Insert the element into the list
        }
        makeDoubly(head); // Convert the singly linked list to a doubly linked list
        printBack(head); // Print the list in reverse order
    }
    return 0; // Return 0 to indicate successful completion
}
