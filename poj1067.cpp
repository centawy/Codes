//
//  main.cpp
//  Poj
//
//  Created by centa on 12-8-31.
//  Copyright (c) 2012年 centa. All rights reserved.
//

#include <iostream>
using namespace std;
int F(int a, int b);
int main()
{
    // insert code here...
    int a,b;
    
    while (true) {
        cin>>a>>b;
        cout<<F(a,b)<<endl;
    }
    return 0;
}

int F(int a, int b)
{
    int flag = 1;
    if (a == b || a == 0 || b == 0)
        return flag;
    if (a < b)
    {
        return F (b, a);
    }
    
    for (int i = 1; i < a; i ++)
    {
        flag = flag && F (i, b);
        
    }
    for (int i = 1; i < b; i ++)
    {
        flag = flag && F (a, i) && F (a-i, b-i);
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}




