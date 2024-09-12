//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++

class node{
    public:
    int data;
    int i;
    int j;
    
    node(int data,int row,int col){
        this->data = data;
        this->i = row;
        this->j = col;
    }
};

class compare{
    public:
    bool oprator()(node* a,node* b){
        return a->data > b->data;
    }
};

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        
        priority_queue<node* ,vector<node*> ,compare> pq;
        
        for(int i=0;i<k;i++){
            node* temp = new node(arr[i][0],i,0);
            pq.push(temp);
        }
        vector<int> ans;
        while(pq.size() > 0){
            node* tmp = pq.top();
            vector.push_back(tmp->data);
            pq.pop();
            int i= tmp->i;
            int j = tmp->j+1;
            
            if(j < k){
                node* n = new node(arr[i][j],i,j);
                pq.push(n);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends
