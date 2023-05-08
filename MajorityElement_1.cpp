//Majority Element :  (>N/2) times
//Moores Voting Algorithm
# include <bits/stdc++.h> 
using namespace std ;
int MajorityElement(vector<int>&elements, int n) {
    int cnt=0;
    int el=0;
    for(int i=0;i<elements.size();i++){
      
        if(cnt==0){
            cnt=1;
            el=elements[i];
        }     
        else if(el==elements[i]){
            cnt++;
        }  
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<elements.size();i++){
        if(elements[i]==el)
            cnt1++;
    }
    if(cnt1>elements.size()/2){
        return el;
    }
    else{
        return -1;
    }
    
}
int main(){
    vector<int> elements={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};

    int res= MajorityElement(elements,elements.size());
    cout<<" The Majority Element is : "<<res<<endl;
}
