#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    Node *root = new Node();
    Node *temp;

    cin >> root->data;
    for (int i = 1; i < n; i++)
    {
        Node *new_node = new Node();
        new_node->next = NULL;
        cin >> new_node->data;
        temp = root;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }
    int k;
    cin >> k;
    temp = root;
    while (temp)
    {
        if (temp->data != k)
            cout << temp->data << ' ';
        temp = temp->next;
    }

    return 0;
}