//2.0
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stdio.h>
#include <queue>

#define MAXM 2006

using namespace std;

struct EDGE{
    int u, v, w, next;
    EDGE() {}
    EDGE(int u, int v, int w, int next):
        u(u), v(v), w(w), next(next) {}
}edge[MAXM];

int head[MAXM];
int edgeCount = 0;
int d[MAXM];

void addEdge(int u, int v, int w)
{
    edge[edgeCount] = EDGE(u, v, w, head[u]);
    head[u] = edgeCount++;
}

int a[301], b[301];

bool spfa(int s, int n) //s为源节点号，n为点数
{
    queue <int> que;
    int visit[MAXM], inq[MAXM];
    for (int i=0; i<=n; i++)
    {
        que.push(i);
        visit[i] = 1;
        inq[i] = 0;
        d[i] = 0;
    }
    que.push(s);
    inq[s] = 1;
    while (!que.empty())
    {
        int node = que.front();
        que.pop();
        EDGE edge1 = edge[head[node]];  //important head[node]
        int u, v, w;
        u = edge1.u;
        v = edge1.v;
        w = edge1.w;
        inq[u] = 0;
        if (visit[u]++ > n)
        {
            return true;
        }
        for (int e=head[node]; e!=-1; e=edge[e].next)
        {
            EDGE edge2 = edge[e];
            u = edge2.u;
            v = edge2.v;
            w = edge2.w;
            if (d[u]+w > d[v])
            {
                d[v] = d[u]+w;
                if (!inq[v])
                {
                    inq[v] = 1;
                    que.push(v);
                }
            }
        }
    }
    return false;
}

int main()
{
    memset((void *)head, -1, sizeof(head));
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    addEdge(2, 0, -(a[1]*2+1));
    addEdge(0, 2, a[1]*2);

    addEdge(n-2, n, 2*a[n]);
    addEdge(n, n-2, -(2*a[n]+1));
    for (int i=2; i<n; i++)
    {
        addEdge(i-2, i+1, 3*a[i]);
        addEdge(i+1, i-2, -(a[i]*3+2));
    }

    for (int i=1; i<=n; i++)
    {
        addEdge(i-1, i, 1);
    }
    spfa(0, n);
    cout << d[1];
    for (int i=2; i<=n; i++)
    {
        cout << " " << d[i]-d[i-1];
    }
    cout << endl;

    return 0;
}


//1.0
//#include <iostream>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <stdio.h>
//#include <queue>
//
//#define MAXM 100
//#define INF (-1000)
//
//using namespace std;
//
//struct EDGE{
//    int u, v, w, next;
//    EDGE() {}
//    EDGE(int u, int v, int w, int next):
//        u(u), v(v), w(w), next(next) {}
//}edge[MAXM];
//
//int head[MAXM];
//int edgeCount = 0;
//int d[MAXM];
//
//void addEdge(int u, int v, int w)
//{
//    edge[edgeCount] = EDGE(u, v, w, head[u]);
//    head[u] = edgeCount++;
//}
//
//int a[301], b[301];
//
//bool spfa(int s, int n) //s为源节点号，n为点数
//{
//    queue <int> que;
//    int visit[MAXM], inq[MAXM];
//    for (int i=0; i<=n; i++)
//    {
//        que.push(i);
//        visit[i] = 1;
//        inq[i] = 1;
//        d[i] = 0;
//    }
////    que.push(s);
////    inq[s] = 1;
//    while (!que.empty())
//    {
//        int node = que.front();
//        que.pop();
//        EDGE edge1 = edge[head[node]];  //important head[node]
//        int u, v, w;
//        u = edge1.u;
//        v = edge1.v;
//        w = edge1.w;
//        inq[u] = 0;
//        if (visit[u]++ > n)
//        {
//            return true;
//        }
//        for (int e=head[node]; e!=-1; e=edge[e].next)
//        {
//            EDGE edge2 = edge[e];
//            u = edge2.u;
//            v = edge2.v;
//            w = edge2.w;
//            if (d[u]+w > d[v])
//            {
//                d[v] = d[u]+w;
//                if (!inq[v])
//                {
//                    inq[v] = 1;
//                    que.push(v);
//                }
//            }
//        }
//    }
//    return false;
//}
//
//int main()
//{
//    memset((void *)head, -1, sizeof(head));
//    int n;
//    cin >> n;
//    for (int i=1; i<=n; i++)
//    {
//        cin >> a[i];
//    }
//    addEdge(2, 0, -(a[1]*2+1));
//    addEdge(0, 2, a[1]*2);
//
//    addEdge(n-2, n, 2*a[n]);
//    addEdge(n, n-2, -(2*a[n]+1));
//    for (int i=2; i<n; i++)
//    {
//        addEdge(i-2, i+1, 3*a[i]);
//        addEdge(i+1, i-2, -(a[i]*3+2));
//    }
//
//    for (int i=1; i<=n; i++)
//    {
//        addEdge(i-1, i, 1);
//    }
//    spfa(0, n);
//    cout << d[1];
//    for (int i=2; i<=n; i++)
//    {
//        cout << " " << d[i]-d[i-1];
//    }
//    cout << endl;
//
//    return 0;
//}
