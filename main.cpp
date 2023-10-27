#include <iostream>

using namespace std;

using namespace std;
bool ktnt(int b)
{
    int ok=1;
    for (int i=2;i<=sqrt(b);i++)
    if (b%i==0){
    ok=0;
    break;
    }
    return ok;
}
int main(){
int a;cin>>a;
    if(ktnt) cout<<"Yes";
    else cout<<"No";
    return 0;
}
