#include<bits/stdc++.h>

using namespace std;

#define loi long long;

int main()
{

ios_base::sync_with_stdio(false)

cin.tie(NULL);


loi num;

cin >> num;

if(num & 1)
  cout << "Odd\n";
  
else 
  cout << "Even\n";
  
return 0;

}
