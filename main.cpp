//
//  main.cpp
//  1018
//
//  Created by 董依萌 on 2017/4/23.
//  Copyright © 2017年 董依萌. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    int n,i,x[6]={0},y[6]={0},a=3,b=3;
    cin>>n;
    char c1[n],c2[n];
    for(i=0;i<n;i++){
        cin>>c1[i]>>c2[i];
        if(c1[i]!='B'&&c1[i]!='J'&&c1[i]!='C')
            exit(0);
        if(c2[i]!='B'&&c2[i]!='J'&&c2[i]!='C')
            exit(0);
    }
    for(i=0;i<n;i++){
        if(c1[i]=='J'&&c2[i]=='B'){
            x[0]++;x[5]++;
        }
        else if(c1[i]=='J'&&c2[i]=='J'){
            x[1]++;y[1]++;
        }
        else if(c1[i]=='B'&&c2[i]=='J'){
            y[0]++;y[5]++;
        }
        else if(c1[i]=='C'&&c2[i]=='J'){
            x[0]++;x[4]++;
        }
        else if(c1[i]=='C'&&c2[i]=='C'){
            x[1]++;y[1]++;
        }
        else if(c1[i]=='J'&&c2[i]=='C'){
            y[0]++;y[4]++;
        }
        else if(c1[i]=='C'&&c2[i]=='B'){
            y[0]++;y[3]++;
        }
        else if(c1[i]=='B'&&c2[i]=='B'){
            x[1]++;y[1]++;
        }
        else if(c1[i]=='B'&&c2[i]=='C'){
            x[0]++;x[3]++;
        }
    }
    for(i=3;i<6;i++){
        if(x[i]>x[a])
            a=i;
        if(y[i]>y[b])
            b=i;
    }
    cout<<x[0]<<' '<<x[1]<<' '<<n-x[0]-x[1]<<endl;
    cout<<y[0]<<' '<<y[1]<<' '<<n-y[0]-y[1]<<endl;
    if(a==3)
        cout<<'B';
    if(a==4)
        cout<<'C';
    if(a==5)
        cout<<'J';
    cout<<' ';
    if(b==3)
        cout<<'B';
    if(b==4)
        cout<<'C';
    if(b==5)
        cout<<'J';
    cout<<endl;
    return 0;
}
