	#include <iostream>
	#include <string>
	#include <vector>
	#include <algorithm>
	#include <queue>
	#include <map>
	#include <set>
	#include <utility> 
	#include <stack>
	#include <cstring> 
	#include <math.h>
	#include<cstdio>
	#include<deque>
	#include<sstream>

	/* You got a dream, you gotta protect it.*/ 

	#define pb push_back
	#define mem(a,b) memset(a,b,sizeof(a))
	#define sz(v) ((int)v.size())
	#define rep(i,m) for(int i=0;i<(int)(m);i++)
	#define oo ((int) 1e9)
	#define mp make_pair
	#define pi 2 * acos(0);
	#define eps 1e-6
	using namespace std;

	int dx[] = {0 ,  0 , 1 ,-1 , 1 , 1 , -1 , -1 } ;
	int dy[] = {1 , -1 , 0 , 0 , 1 ,-1 ,  1 , -1 } ; 

	int geti(){
		int y = 0, s = 1;
		char c = getchar();
		while ( !isdigit(c) && c!='-' ) c = getchar();
		if ( c == '-' ) s = -1 , c = getchar();
		while ( isdigit(c) ) y = y * 10 + ( c - '0' ) , c = getchar();
		return s * y;
	}
	string s;
	int a,b,c,res;
	bool f;
	int  main()
	{
		//freopen("test.in" , "rt" , stdin);
		cin >> s ;
		c=0;res=0;a=0;b=0;
		f=false;
		for ( int i = 0 ; i < sz(s) ; i++) {
			if ( s[i] =='(' ) {
				if ( c ==1 )  {
					res+=(min(a,b) *2 ) ;
					a-=min(a,b);
					b=0;
				}
				a++ ;
				f=true;
				c=0;	
			}
			else if(s[i] == ')' && f) {
				b++;
				c=1;
			}

		}
		if ( c == 1 ) {
			res+=(min(a,b) *2 ) ;
		}
		printf("%d\n",res);
		return 0 ;
	}