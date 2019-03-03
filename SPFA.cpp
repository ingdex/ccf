/*
test input:
5 7
0 1 3
0 2 2
1 3 1
3 0 4
3 2 6
3 4 4
4 2 4

5 7
0 4 10
0 1 2
1 4 7
1 2 3
4 2 6
2 3 4
3 4 5
*/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stdio.h>
#include <queue>

#define MAXM 100
#define INF (1000)

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

bool spfa(int s, int n) //s为源节点号，n为点数
{
    queue <int> que;
    int visit[MAXM], inq[MAXM];
    for (int i=0; i<n; i++)
    {
        visit[i] = 0;
        inq[i] = 0;
        d[i] = (i==s)?0:INF;
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
        if (visit[u] > n)
        {
            return true;
        }
        for (int e=head[u]; e!=-1; e=edge[e].next)
        {
            EDGE edge2 = edge[e];
            u = edge2.u;
            v = edge2.v;
            w = edge2.w;
            if (d[u]+w < d[v])
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
    int n, e, u, v, w;
    cin >> n >> e;
    while (e--)
    {
        cin >> u >> v >> w;
        addEdge(u, v, w);
    }
    spfa(0, n);
    for (int i=0; i<n; i++)
    {
        cout << "0->" << i << ": " << d[i] << endl;
    }

    return 0;
}

//#include <iostream>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <stdio.h>
//#include <queue>
//
//#define MAXM 100
//#define INF 1000
//
//using namespace std;
//
//int d[MAXM];
//int inq[MAXM];
//int visit[MAXM];
//int head[MAXM];
//int edgeCount = 0;
//
//struct EDGE
//{
//	int u, v, w, next;
//	EDGE() {}
//	EDGE(int _u, int _v, int _w, int _next)
//	{
//		u = _u, v = _v, w = _w, next = _next;
//	}
//}edge[MAXM];
//
//void addEdge(int u, int v, int w)
//{
//	edge[edgeCount] = EDGE(u, v, w, head[u]);
//	head[u] = edgeCount++;
//}
//
//bool spfa(int s, int n)
//{
//	queue <EDGE> q;
//	for (int i = 0; i < n; i++)
//	{
//		d[i] = (i == s) ? 0 : INF;
//		inq[i] = (i == s);
//		visit[i] = 0;
//	}
//	q.push(edge[head[s]]);
//
//	while (!q.empty())
//	{
//		EDGE p = q.front();
//		q.pop();
//		inq[p.u] = 0;
//		if (visit[p.u]++ > n)   //存在环
//		{
//			return true;
//		}
//		for (int e = head[p.u]; e != -1; e = edge[e].next)
//		{
//			int v = edge[e].v;
//			int w = edge[e].w;
//			int u = d[p.u];
//			if (u + w < d[v])
//			{
//				d[v] = d[p.u] + w;
//				if (!inq[v])
//				{
//					inq[v] = 1;
//					q.push(edge[head[v]]);
//				}
//			}
//		}
//	}
//	return false;
//}
//
//
//int main()
//{
//	memset((void *)head, -1, sizeof(head));
//	int n, e, u, v, w;
//	cin >> n >> e;
//	while (e--)
//	{
//		cin >> u >> v >> w;
//		addEdge(u, v, w);
//	}
//	spfa(0, n);
//	for (int i = 0; i < n; i++)
//	{
//		cout << "0->" << i << ": " << d[i] << endl;
//	}
//
//	return 0;
//}
