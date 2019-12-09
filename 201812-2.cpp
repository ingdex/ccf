////maybe better
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//    long long light[3],N,a,b,ans=0;
//    scanf("%lld%lld%lld%lld",&light[0],&light[2],&light[1],&N);
//    long long sum=light[0]+light[1]+light[2];//sum为红绿灯变换一周的总时长
//    while(~scanf("%lld%lld",&a,&b)){
//        if(a==0)//是道路
//            ans+=b;//时长直接递增
//        else{//是红绿灯
//            if(a==1)//将红绿灯标号变为light数组的下标
//                a=0;
//            else if(a==3)
//                a=1;
//            b=(light[a]-b+ans)%sum;//该红绿灯变换的最后一周的时长
//            while(b>light[a]){//若b比当前红绿灯时长长
//                b-=light[a];//减去当前的红绿灯时长
//                a=(a+1)%3;//转向下一个红绿灯
//            }
//            if(a==0)//是红灯
//                ans+=light[a]-b;//加上红灯剩余时长
//            else if(a==2)//是黄灯
//                ans+=light[a]-b+light[0];//加上黄灯剩余时长以及一个红灯时长
//        }
//    }
//    printf("%lld",ans);
//    return 0;
//}

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stdio.h>
#include <queue>

#define MAXM 1000

using namespace std;

bool canGo(long long &wait, long long k, long long t, long long total, long long r, long long y, long long g)
{
    long long x;
    switch (k)
    {
    case 1:
        if (total < t)  //红灯未结束
        {
            wait = t - total;
            return false;
        }
        x = (total-t) % (g+y+r);
        if (x < g)  //到的时候正好是绿灯
        {
            wait = 0;
            return true;
        }
        else
        {
            wait = g + y + r - x;
            return false;
        }
        break;
    case 2:
        if (total < t)
        {
            wait = t - total + r;
            return false;
        }
        else if (total < t + r)
        {
            wait = t + r -total;
            return false;
        }
        x = (total-t-r) % (g+y+r);
        if (x < g)
        {
            wait = 0;
            return true;
        }
        else
        {
            wait = g + y + r - x;
            return false;
        }
        break;
    case 3:
        if (total < t)
        {
            wait = 0;
            return true;
        }
        x = (total-t) % (g+y+r);
        if (x < y+r)
        {
            wait = y + r - x;
            return false;
        }
        else
        {
            wait = 0;
            return true;
        }
        break;
    default:
        break;
    }
    return false;
}

int main()
{
    long long n, k;
    long long r, y, g, t, total, wait;
    total = 0;
    cin >> r >> y >> g >> n;
    for (long long i=0; i<n; i++)
    {
        cin >> k >> t;
        if (k == 0)
        {
            total += t;
            continue;
        }
        bool flag = canGo(wait, k, t, total, r, y, g);
        if (flag == true)
        {
            continue;
        }
        else
        {
            total += wait;
        }
    }

    cout << total << endl;

    return 0;
}
