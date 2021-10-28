#include<iostream>
#include<vector>
#include<map>
using namespace std;

/*
1.Generate all substrings
2.Generate their hash
3.Hash the 'hash' value to club all anagrams in single bucket, to get their frequency count
4.From freq count, we can easily count the paris
*/


//Time complexity:O(N3) 

vector<int> getHashing(string s,int i,int j){

	vector<int> freq(26,0);

	for(int k=i;k<=j;k++){
		char ch = s[k];
		freq[ch - 'a']++;
	}

	return freq;
}





int anagrams_substring(string s){


   map<vector<int>,int> m;
   for(int i=0;i<s.length();i++){
   	 for(int j=i;j<s.length();j++){

   		//Substring s[i....j]

   		vector<int> h = getHashing(s,i,j);
   		// put it inside a map
        m[h]++;


   	}

   }
   // pair
   int ans=0;
   for(auto p : m){

   	int freq = p.second;
   	if(freq>=2){
       ans += (freq)*(freq-1)/2;
   	}

   }

   return ans;


}


int main(){

	string s;
	cin>>s;

    cout<<anagrams_substring(s)<<endl;


	return 0;
}
