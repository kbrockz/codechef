#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	ll z,w,p,q,i,j,k,l,m,n,t;
	double y; 
	ll arr[100005];
	scanf("%lld",&t);

	while(t--)
	{
		memset(arr,0,sizeof arr);
		scanf("%lld",&n);
		q=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		//	q+=arr[i];
		}

		vector<ll> v(arr,arr+n);
//		sort(arr,arr+n);
		k=*min_element(v.begin(),v.end());
//		l=*lower_bound(v.begin(),v.end(),k);
//		p=*lower_bound(v.begin(),v.end(),l);
		m=*max_element(v.begin(),v.end());

//		k=arr[0];l=arr[1];m=arr[n-1];
//		p=arr[2];
	
		w=9999999999;
		q=0;
		for(i=0;i<n;i++)
		{
			q+=arr[i];
			if(arr[i]>k && arr[i]<w)
				w=arr[i];
		}
		
		y= (double) (n-1)/2;
		y*= (2*k+(n-2)) ;

		if(k+n-2!=m && k+1!=w)
		{
//			 cout<<3<<endl;
			printf("%lld\n",k);
		//	break;
		}
		else if(k+1==w && k+n-2!=m)
		{
//			 cout<<4<<endl;
			printf("%lld\n",m);
		//	break;
		}
		else
		{
//			 cout<<5<<endl;
			cout<<q-y<<endl;
		}
			
//		cout<<k<<w<<endl;
	}	
	return 0;
}
