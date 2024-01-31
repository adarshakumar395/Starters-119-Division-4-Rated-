#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int t;
    cin>>t;
	int count=0;
	int temp;

	while(t>0){
	int r;
	for(int i=0;i<5;i++){
	    cin>>r;
	    
	    if (r ==1){
	    count ++;
	  
	    }
	   
	    
	    
	}
	 temp = count;
	 count=0;
	t--;
	
	if (temp >=4 )
	cout <<"YES"<< endl;
	
	else if(temp<4){
	    cout <<"NO"<< endl;
	}
	}
    
	

	
	
	return 0;

}
