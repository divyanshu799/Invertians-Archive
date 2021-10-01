// C++ linear time solution for stock span problem
// Previous Greater...
#include <iostream>
#include <stack>
using namespace std;

void calculateSpan(int price[], int n, int S[]){
	stack<int> st;
	st.push(0);

	S[0] = 1;

	for (int i = 1; i < n; i++){
		// Pop elements from stack while stack is not
		// empty and top of stack is smaller than
		// price[i]
		while (!st.empty() && price[st.top()] <= price[i])
			st.pop();

		// If stack becomes empty, then price[i] is
		// greater than all elements on left of it,
		// i.e., price[0], price[1], ..price[i-1]. Else
		// price[i] is greater than elements after
		// top of stack
        if(st.empty())
            S[i] = i + 1;
        else
		    S[i] = i - st.top();

		st.push(i);
	}
}

void printArray(int arr[], int n){
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main(){
	int price[] = {10, 4, 5, 90, 120, 80 };
	int n = sizeof(price) / sizeof(price[0]);
	int S[n];

	calculateSpan(price, n, S);

	printArray(S, n);

	return 0;
}
