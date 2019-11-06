#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,q,cont=0;
    cin>>n>>q;
    while(n!=0){
        cont++;
        int x[n+2],y[q+2];
        bool encontrado;
        int i;
        for(i=0;i<n;i++) {
            cin >> x[i];
        }
        for(i=0;i<q;i++){
            cin>>y[i];
        }

        sort(x,x+n);
        cout<<"CASE# "<<cont<<":"<<endl;
        for(i=0;i<q;i++){
            encontrado=false;
            for(int k=0;k<n;k++){
                if(y[i]==x[k]){
                    cout<<y[i]<<" found at "<<k+1<<endl;
                    encontrado=true;
                    break;
                }
            }
            if(!encontrado) {
                cout << y[i] << " not found" << endl;
            }
        }
        cin>>n>>q;
    }
    return 0;
}