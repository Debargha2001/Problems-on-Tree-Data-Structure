#include<iostream>
#include "solution.h"
using namespace std;
int main() {
    TreeNode<int>* root = takeInputLevelWise();
    TreeNode<int>* ans = maxDataNode(root);
    if (root != NULL) {
        cout << ans->data<<endl;
    }
}
