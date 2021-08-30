#include <bits/stdc++.h>
using namespace std;

bool check;
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

void solve(Node *u)
{
    int sum = 0;
    int temp = 0;
    // cout << u->data << ' ';
    if (u->left != NULL)
    {
        solve(u->left);
        sum += u->left->data;
        temp++;
    }
    if (u->right != NULL)
    {
        solve(u->right);
        sum += u->right->data;
        temp++;
    }
    // cout << sum << '\n';
    if (temp != 0)
    {
        if (sum != u->data)
            check = 0;
        else
            u->data += sum;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        check = 1;
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
        solve(root);
        if (check)
            cout
                << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}