#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *root = NULL;

void createNodes(int key, int data, char direct)
{
    Node *newNode = new Node();
    newNode->data = key;
    newNode->left = NULL;
    newNode->right = NULL;
    Node *new_node = new Node();
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->data = data;

    if (direct == 'L')
        newNode->left = new_node;
    else
        newNode->right = new_node;
    root = newNode;
}

void insertNode(int key, int data, char direct)
{
    if (root == NULL)
    {
        createNodes(key, data, direct);
        return;
    }
    Node *new_node = new Node();
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    queue<Node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        Node *u = Q.front();
        Q.pop();
        if (u->data == key)
        {
            if (direct == 'L')
            {
                u->left = new_node;
                return;
            }
            else
            {
                u->right = new_node;
                return;
            }
        }
        else
        {
            if (u->left != NULL)
                Q.push(u->left);
            if (u->right != NULL)
                Q.push(u->right);
        }
    }
}

bool check()
{
    queue<Node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        Node *u = Q.front();
        Q.pop();
        int temp = 0;
        if (u->left != NULL)
        {
            Q.push(u->left);
            temp++;
        }
        if (u->right != NULL)
        {
            Q.push(u->right);
            temp++;
        }
        if (temp == 1)
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int u, v;
        char x;
        cin >> n;
        root = NULL;
        for (int i = 0; i < n; i++)
        {
            cin >> u >> v >> x;
            insertNode(u, v, x);
        }

        if (check())
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}