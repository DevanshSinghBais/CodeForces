#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	// Read the number of test cases
	int t;
	cin >> t;
 
	// Process each test case
	while (t--) {
		// Read the length of the string
		int n;
		cin >> n;
 
		// Read the palindrome string consisting of '0's and '1's
		string s;
		cin >> s;
 
		// Initialize a counter for '0's in the string
		int count0 = 0;
		// Count the number of '0's in the string
		for (int i = 0; i < n; i++) {
			if (s[i] == '0') count0++;
		} //? O(N)
 
		// Determine the winner based on the number of '0's
		// If the number of '0's is even or exactly one, Bob wins
		if ((count0 % 2 == 0) or (count0 == 1)) {
			cout << "BOB
";
		} else {
			// Otherwise, Alice wins
			cout << "ALICE
";
		}
	}
 
	return 0;
}
//! Total Time Complexity (TC): O(t * N)
//! Total Space Complexity (SC): O(t * N)