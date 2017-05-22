            #include<bits/stdc++.h>
            long long a[1000001];
            using namespace std;
            int c=0;
            int l,flag=0,m=0;
            int primeno(int );
            void printDivisors(int n)
            {
            	c=0;
                 for (int i=1; i<=sqrt(n)+1; i++)
                {
                    if (n%i==0)
                    {
                        
                        if (n/i == i)
                           c++;
             
                        else
                            c=c+2;
                    }
                    //cout<<"c="<<c;
                }
                if(c>1 && c%2!=0)
                {
                	//cout<<"ecc"<<c<<endl;
                int x=primeno(c);
                if(x==0) m++;
                }
                    
            }
             
            int primeno(int n)
            {
             
                if (n <= 1)  return 1;
                if (n <= 3)  return 0;
             
                
                if (n%2 == 0 || n%3 == 0) return 1;
             
                for (int i=5; i*i<=n; i=i+6)
                    if (n%i == 0 || n%(i+2) == 0)
                       return 1;
             
                return 0;
            }
             
            int main()
            {
            	freopen("i1.txt","rt",stdin);
                freopen("o1.txt","wt",stdout);
            	long long t,l;
            	cin>>t;
            	while(t--)
            	{
            	m=0;
                
                long long n,i;
                cin>>n;
                for(i=0;i<n;i++)
                cin>>a[i];
                for(i=0;i<n;i++)
                {
				if(a[i]>2&&a[i]%2!=0)
                {
                printDivisors(a[i]);
                }
                }
                if(m==0)
                cout<<"Not Possible"<<endl;
                else
                cout<<m<<endl;
               }
                return 0;
            }    

