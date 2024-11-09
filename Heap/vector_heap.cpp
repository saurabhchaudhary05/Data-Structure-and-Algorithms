//min heap
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    make_heap(v.begin(),v.end(),greater<int>());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    ~
}    
or    
//min heap
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        push_heap(v.begin(),v.end(),greater<int>());
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}




//max heap
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    make_heap(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
//max heap
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        push_heap(v.begin(),v.end());
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}



//max heep after deletion give descending order array
//min heap after deletion gives ascending order array
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{3,22,44,20,23};
    make_heap(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //deletion at particular index
    /*
    int t,index;
    cin>>t;
    for(int i=0;i<v.size();i++){
        if(v[i]==t){
            index=i;
            break;
        }
    }
    v.erase(v.begin()+index);*/
    //moving the root element to the last 
    pop_heap(v.begin(),v.end());
    //root element moved to the last 
    cout<<"AFTER DELETION: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
    cout<<endl;   
    //remove the last element that is root 
    v.pop_back();
    cout<<"AFTER DELETION: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
    cout<<endl;
    //min heap sorting
    heap_sort(v.begin(),v.end(),greater<int>());
    cout<<"AFTER sorting: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }    
    cout<<endl<<*max_element(v.begin(),v.end());
    cout<<endl;
    //max heap soritng
    sort_heap(v.begin(),v.end());
    cout<<"\nSORTED HEAP :"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
    cout<<endl;
    //ADDING ELEMENT TO HEAP
    v.push_back(90);
    push_heap(v.begin(),v.end());
    cout<<"Element after adding element: "<<end;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    } 
    cout<<endl;
    return 0;
}





/moving the root element to the last 
    pop_heap(v.begin(),v.end());
    //root element moved to the last    
    //remove the last element that is root using v.pop_back
    v.pop_back();
    cout<<"AFTER DELETION: "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
    
    
    
    
    
    
    
    
    
    
    int getLeafNode(Node* root){
    if(!root) return 0;
    if(!root->left and !root->right) return 1; 
    int leftLeaves = getLeafNode(root->left);
    int rightLeaves = getLeafNode(root->right);
    int leafNodes = leftLeaves + rightLeaves;
    return leafNodes;
}












#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a;
    vector<int> b;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        b.push_back(y);
    }
    cout<<endl;
    vector<int> v;
    v.insert(v. end(),a.begin(),a.end());
    v.insert(v.end(),b.begin(),b.end());
    for(auto &i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(auto &i:v){
        cout<<i<<" ";
    }

}
