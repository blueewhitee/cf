    #include<bits/stdc++.h>
    using namespace std;   
    int main()
    {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        int t;
        cin>>t;
        while(t--)
        {
            int n, c, d;
            cin>>n>>c>>d;
            multiset<int>st;
            for(int i = 0; i<n; i++)
            {
                for(int j = 0; j<n; j++)
                {
                    st.insert(c*i+d*j);
                }
            }
            vector<int>arr(n*n, 0);
            int mn = INT_MAX;
            bool ptr = false;
            for(int i = 0; i<n*n; i++)
            {
                cin>>arr[i];
                mn = min(mn, arr[i]);
            }
            for(int i = 0; i<n*n; i++)
            {
                arr[i]-=mn;
            }
            for(int i = 0; i<n*n; i++)
            {
                if(st.find(arr[i])==st.end())
                {
                    ptr =  true;
                    cout<<"NO"<<endl;
                    break;
                }
                else{
                    st.erase(st.find(arr[i]));
                }
            }
            if(!ptr)
            {
                cout<<"YES"<<endl;
            }
     
        }
        return 0;
    }