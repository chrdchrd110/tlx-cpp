#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n, m;
  vector<vector<int>> data;
  while(true){
    cin >> n >> m;
    if ((n >=1&&n<=100) && (m >=1&&m<=100))break;
  }
  for(int i = 0; i<n; i++){
    int x;
    vector<int> row;
    for (int j = 0; j<m; j++){
      while(true){
        cin >>x;
        if (x >=1 && x <=100){
          row.push_back(x);
          break;
        }
      }
    }
    data.push_back(row);
  }

  for(int j = 0; j<m; j++){
    for (int i = n-1; i>=0; i--){
      cout << data[i][j];
      cout << " ";
    }
    cout << endl;
  }
  return 0;

  // for (int i = 0; i<n; i++){
  //   for (int j = 0; j<m; j++){
  //     cout << data[i][j];
  //     if (j != m-1) cout << " ";
  //   }
  //   cout << endl;
  // }
}