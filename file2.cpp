#include <iostream>
#include <vector>
#define BETWEEN(v, a,b)(v >= a && v <= b)
using namespace std;
int main(){
  int n, m, x;
  while(true){
    cin >> n >> m >> x;
    if (BETWEEN(n, 1, 100) && BETWEEN(m, 1, 100) && BETWEEN(x, 1, 100)) break;
  }

  vector<vector<int>> vec;
  for (int i = 0; i < n; i++){
    vector<int> row;
    for(int j = 0; j<m; j++){
      int val;
      while(true){
        cin >> val;
        if (BETWEEN(val, 1, 100)){
          row.push_back(val);
          break;
      }
    }
  }
    vec.push_back(row);
  }

  string reflex;
  int degree;
  cin >> reflex >> degree;


}