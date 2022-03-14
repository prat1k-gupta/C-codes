    vector<int> ar = {1,2,3,4,5};
    //upper_bound search: to find the element strictly greater then the value to find
    auto it = upper_bound(ar.begin(),ar.end(),3);
    cout<<it-ar.begin()<<endl; 