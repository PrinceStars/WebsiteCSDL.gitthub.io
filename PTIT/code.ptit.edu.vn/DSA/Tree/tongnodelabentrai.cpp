#include <bits/stdc++.h>
using namespace std;

struct Node
{
    long data;
    Node *left;
    Node *right;
};
Node *root = NULL;

void createNodes(long key, long data, char direct)
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

void insertNode(long key, long data, char direct)
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
            if (direct == 'L' && u->left == NULL)
            {
                // if (u->left != NULL)
                // {
                //     new_node->left = u->left->left;
                //     new_node->right = u->left->right;
                // }
                u->left = new_node;
                return;
            }
            else if (direct == 'R' && u->right == NULL)
            {
                // if (u->right != NULL)
                // {
                //     new_node->right = u->right->right;
                //     new_node->left = u->right->left;
                // }
                u->right = new_node;
                return;
            }
        }

        if (u->left != NULL)
            Q.push(u->left);
        if (u->right != NULL)
            Q.push(u->right);
    }
}

long long cal()
{
    long long res = 0;
    queue<Node *> Q;
    Q.push(root);
    while (!Q.empty())
    {
        Node *u = Q.front();
        Q.pop();
        if (u->right != NULL)
            Q.push(u->right);
        if (u->left != NULL)
            Q.push(u->left);
        if (u->left != NULL && u->left->left == NULL && u->left->right == NULL)
            res += u->left->data;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long n;
        long u, v;
        char x;
        cin >> n;
        root = NULL;
        for (int i = 0; i < n; i++)
        {
            cin >> u >> v >> x;
            insertNode(u, v, x);
        }

        cout << cal() << '\n';
    }
    return 0;
}