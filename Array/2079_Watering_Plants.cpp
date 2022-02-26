#include<bits/stdc++.h>

using namespace std;

 int wateringPlants(vector<int>& plants, int capacity) {
        int i=-1,ns=0,size=plants.size();
        int left=capacity;
        while(i<size){
            i++;
            if(left>=plants[i]){
                ns++;
                left-=plants[i];
            }
            else{
                left=capacity-plants[i];
                ns+=2*i+2;
            }
        }
        return ns;
    }

int main()
{
 vector<int> plants = {2,2,3,3};
 cout<<wateringPlants(plants,5);
}

