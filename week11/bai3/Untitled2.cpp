#include <vector>

void printReverse(Node* head, int k){
    vector<int> v;
    for (int i = 0; i < k ; i ++ ){
        v.push_back(head -> value);
        head = head -> next;
    }
    
	reverse(v.begin(), v.end());
	for(auto &i : v)
		cout << i << " ";
}