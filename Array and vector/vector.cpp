#include<iostream>
#include<vector>
using namespace std;

int main(){
  // Demo vector
	// vector<int> arr= {1,2,45,5};

	// Fill constructor
	vector<int> visited(100,7);

	// pus_back O(1)
	arr.push_back(16);

	cout<<arr.size()<<endl;

 // capacity of the vector
	cout<< arr.capacity()<<endl;

	// print all  the element
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}
