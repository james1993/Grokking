#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct Node{
  int val;
  Node* left;
  Node* right;
  
  Node(int x) {
    val = x;
    left = right = nullptr;
  }
};

void breadth_first_search(Node* head)
{
    queue<Node*> queue;
    queue.push(head);
    
    while(!queue.empty())
    {
        int size = queue.size();
        for(int i = 0; i < size; i++)
        {
            Node* current = queue.front();
            queue.pop();
            //process current
            cout << current->val << " ";
            //inssert children
            if(current->left != NULL) queue.push(current->left);
            if(current->right != NULL) queue.push(current->right);
        }
    }
}

int main()
{
  Node *root = new Node(12);
  root->left = new Node(7);
  root->right = new Node(1);
  root->left->left = new Node(9);
  root->right->left = new Node(10);
  root->right->right = new Node(5);
  
  breadth_first_search(root);
}
