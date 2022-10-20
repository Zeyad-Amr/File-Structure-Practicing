using namespace std;
#include <bits/stdc++.h>

void getChange(double paid, double cost){
    vector<int> units= {1,5,10,25,50,100}; // cents
    stack<int> returning; // cents
    int remaining=(int) ((paid-cost)*100);

    for (int i = 0; i <units.size() ; ++i) {
        int index=units.size()-i-1;
        int d=(remaining-(remaining%units[index]))/units[index];
        remaining-=d*units[index];
        returning.push(d);

    }

    cout<<"[";

    for (int i = 0; i <units.size() ; ++i) {
        cout<<returning.top();
        if(units.size()-1!=i){
            cout<<", ";
        }
        returning.pop();
    }

    cout<<"]"<<endl;
}
int main()
{
    double paid,cost;
    cin>>paid>>cost;
    getChange(paid,cost);


    return 0;
}
