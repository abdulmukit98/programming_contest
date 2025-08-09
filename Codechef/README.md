### Set last 2 element
````
        set<int> myset;
        int val;
        for(int i=0;i<n;i++){
            cin>>val;
            myset.insert(val);
        }

        int last_element = *myset.rbegin();
        int second_last = *next(myset.rbegin());
        cout<<second_last + last_element<<endl;
````
