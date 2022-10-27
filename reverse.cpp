#include<bits/stdc++.h>
using std::cout;
using namespace std;
class Reverse{
    public:
    
        string reverse(string word,int n){
            int low=0;
            int high=n-1;

            while(low<high){
                swap(word[low],word[high]);
                low++;
                high--;
            }
       return word;
        }
        int reverse(int num){
            int rem=0,rev=0,sum=0;
            while(num>0){
            rem=num%10;
            rev=rev*10+rem;
            sum=sum+rem;//for sum
            num/=10;
        }
        return (rev);
        }   
};
int main(){
    string n;
    Reverse r;
    int num;
    cout<<"Enter number and string:-";
    cin>>num>>n;
    int s=n.size();
    cout<<r.reverse(num)<<" - "<<r.reverse(n,s);
    //cout<<reverse(n);
}