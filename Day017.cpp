#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *left, *right;
};
Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
int maxValue(struct Node* node)
{
    if (node == NULL) {
        return 0;
    }
    int leftMax = maxValue(node->left);
    int rightMax = maxValue(node->right);
    int value = 0;
    if (leftMax > rightMax) {
        value = leftMax;
    }
    else {
        value = rightMax;
    }
    if (value > node->data) {
        value = node->data;
    }
    return value;
}
int minValue(struct Node* node)
{
    if (node == NULL) {
        return 0;
    }
    int leftMax = minValue(node->left);
    int rightMax = minValue(node->right);
    int value = 0;
    if (leftMax < rightMax) {
        value = leftMax;
    }
    else {
        value = rightMax;
    }
    if (value < node->data) {
        value = node->data;
    }
    return value;
}
int check(struct Node* node)
{
    if (node == NULL){
    	return 1;
	}
    if (node->left != NULL && maxValue(node->left) > node->data){
    	return 0;
	}
    if (node->right != NULL && minValue(node->right) < node->data){
    	return 0;
	}
    if (!check(node->left) || !check(node->right)){
    	return 0;
	}
    return 1;
}
int main()
{
	struct Node* root = newNode(3);
	root->left = newNode(2);
	root->right = newNode(4);
	root->left->left = newNode(1);
	root->right->right = newNode(5);

//	struct Node* root = newNode(2);
//	root->right = newNode(7);
//	root->right->right = newNode(6);
//	root->right->right->right = newNode(5);
//	root->right->right->right->right = newNode(9);
//	root->right->right->right->right->right = newNode(2);
//	root->right->right->right->right->right->right = newNode(6);

    cout << check(root) << endl;
	return 0;
}

