#include<stdio.h>
double a,b,c,d,e,f,ans;
int dp[100000000];

int fn(int n)
{
    if(n==0) return a;
    if(n==1) return b;
    if(n==2) return c;
    if(n==3) return d;
    if(n==4) return e;
    if(n==5) return f;
    if(dp[n]!=-1) return dp[n];
    else{
    dp[n]=((fn(n-1)%10000007)+(fn(n-2)%10000007)+(fn(n-3)%10000007)+(fn(n-4)%10000007)+(fn(n-5)%10000007)+(fn(n-6)%10000007));
    return dp[n];
    }
}

int main()
{
    int caseno=0,cases;
    double n;
    long aa;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f,&n);
        memset(dp,-1,sizeof(dp));
        ans=fn(n);
        aa=ans;
        printf("Case %d: %ld\n",++caseno,aa);
    }
    return 0;
}
