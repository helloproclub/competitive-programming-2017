#include<stdio.h>
#include<iostream>
using namespace std;

int *q,hd_q,tl_q,hd_p,tl_p,*stack,top;
int push(int);

int main()
{
    int *p,n,chk,res;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        p=new int[n];
        q=new int[n];
        stack=new int[n];
        for(int i=0;i<n;i++)
            q[i]=i+1;
        while(1)
        {
            res=1;
            scanf("%d",&p[0]);
            if(p[0]==0)
                break;
            for(int i=1;i<n;i++)
                scanf("%d",&p[i]);
            hd_p=hd_q=0;
            tl_p=tl_q=n-1;
            top=-1;
            while(hd_p<=tl_p&&hd_q<=tl_q)
            {
                if(p[hd_p]==q[hd_q])
                {
                    hd_p++;
                    hd_q++;
                }
                else
                {
                    if(top>-1)
                    {
                        if(stack[top]==p[hd_p])
                        {
                            hd_p++;
                            top--;
                        }
                        else
                        {
                            push(q[hd_q]);
                            hd_q++;
                        }
                    }
                    else
                    {
                        push(q[hd_q]);
                        hd_q++;
                    }
                }
            }
            while(top>=0)
            {
                if(p[hd_p]!=stack[top])
                {
                    res=0;
                    break;
                }
                top--;
                hd_p++;
            }
            if(res)
                printf("Yes\n");
            else
                printf("No\n");
        }
        printf("\n");
    }
    return 0;
}

int push(int var)
{
    top++;
    stack[top]=var;
    return 0;
}