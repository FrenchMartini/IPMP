
//finding union of two arrays 
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n = a.size();
        int m = b.size();
        int i = 0 , j = 0;
        vector<int> ans;
        while( i < n && j < m){
            
            while(i+1<n && a[i] == a[i+1]){
                i++;
            }
            while(j+1<m && b[j]==b[j+1]){
                j++;
            }
            if(a[i] < b[j]){
                ans.push_back(a[i++]);
            }
            else if(a[i] > b[j]){
                ans.push_back(b[j++]);
            }
            else {
                ans.push_back(a[i++]);
                j++;
                
            }
        }
        while(i<n){
            while( i+1 < n && a[i] == a[i+1]){
                i++;
            }
            ans.push_back(a[i++]);
            
        }
        while(j<m){
            while( j+1 < m && b[j] == b[j+1]){
                j++;
            }
            ans.push_back(b[j++]);
            
        }
  
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends