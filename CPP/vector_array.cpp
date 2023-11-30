#include <chrono>
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    
    vector<int> v;
    cout<<"Capacity of vector v at initialization: "<<v.capacity()<<"\n";
    cout<<"Size of vector v at initialization: "<<v.size()<<"\n";
    
    for(int i=0;i<10;i++){
        v.push_back(i+1);
    }
    vector<int> c(v);
   cout<<"Output of begin() and end(): " ;
   for(auto i=v.begin(); i<v.end();i++){
       cout<<*i<<" ";
   }
   cout<<"\n"<<"Output of rbegin(): "; // it reverse the vector array
   for(auto ir = v.rbegin(); ir!=v.rend();ir++){
       cout<<*ir<<" ";
   }
   
   cout<<"\n"<<"Output of cbegin() and cend(): ";
   for(auto ic=v.cbegin();ic!=v.cend();ic++){
       cout<<*ic<<" ";
   }
   cout<<"\n"<<"Output of crbegin() and crend(): ";
   for(auto icr=v.crbegin();icr!=v.crend();icr++){
       cout<<*icr<<" ";
   }

    cout<<"\n"<<"Front element: "<<v.front();
    cout<<"\n"<<"End element: "<<v.back();

    cout<<"\n"<<"SWAP12 the element of vector v: ";
    // swap(v[0],v[1]);

    // cout<<"\n"<<"Erase: ";
    // v.erase(v.begin(),v.begin()+3);
    cout<<"\n"<<"After erase Front element: "<<v.front();
    cout<<"\n"<<"After swapping 0th and 1th element of vector v: ";
    for(int i:v){
        cout<<i<<" ";
    }
    
    cout<<"\n"<<"Capacity: "<<v.capacity();
    cout<<"\n"<<"Size: "<<v.size();
    cout<<"\n"<<"Copy ve  v into vector c: ";
    for(int i:c){
        cout<<i<<" ";
    }
    cout<<"\n"<<"Print vector v: ";
    for(int i:v){
        cout<<i<<" ";
    }
    vector<int> last;
    cout<<"\n"<<"Copy vector v into vector last: ";
    for(int j=0;j<last.size();j++){
        cout<<j<<" ";
    }
    cout<<"\n"<<"Max size of vector v that can hold elements: "<<v.max_size();
    cout<<"\n"<<"Resize vector v: ";
    v.resize(5);
    cout<<"\n"<<"Print vector v after resize(5): ";
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    cout<<"\n"<<"Size of vector v after resize(): "<<v.size();
    cout<<"\n"<<"is vector v empty or not: "<<v.empty();
    cout<<"\n"<<"Size of vector v after shrink_to_fit: ";
    v.shrink_to_fit();
    cout<<v.size();

    cout<<"\n"<<"Print vector v after shrink_to_fit: ";
    for(int i:v){
        cout<<i<<" ";
    }
    auto stop = high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stop-start);
    cout<<"\nTime "<<duration.count()<<" microseconds";
    return 0;
}