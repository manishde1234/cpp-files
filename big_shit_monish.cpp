#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map <int,int> mp;
        for(int i =0;i<n ;i++){
            int a, b;
            cin>>a>>b;
            mp[a] = b;
        }
        cin>>n;
        for(int i =0;i<n ;i++){
            int a, b;
            cin>>a>>b;
            mp[a] = b;
        }

        queue <pair <int,int>> que;
        que.push({1,0});


        vector <int> moves(101 , 0);

        while(!que.empty()){
            int curr = que.front().first;
            int move = que.front().second;
            if(moves[curr] != 0 || curr > 100)
                continue;
            moves[curr] = move;
            if(curr == 100)
                break;
            for(int i = 1 ; i<= 6 ;i++)
                que.push({curr+i, move+1});
        }
        cout<<moves[100]<<endl;
    }
    return 0;
}
