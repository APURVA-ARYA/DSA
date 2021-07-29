#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;


class Pair{
  public:
    int first, second;
    Pair(int x, int y){
      first = x;
      second = y; 
    }
};

vector<Pair> merge_intervals(vector<Pair>& v) {

  if(v.size() == 0) {
    return v;
  }

  vector<Pair> result;
  result.push_back(Pair(v[0].first, v[0].second));

  for(int i = 1 ; i < v.size(); i++){
    int x1 = v[i].first;
    int y1 = v[i].second;
    int x2 = result[result.size() - 1].first;
    int y2 = result[result.size() - 1].second;

    if(y2 >= x1){
      result[result.size() - 1].second = max(y1, y2);
    }
    else{
      result.push_back(Pair(x1, y1));
    }
  }
  return result;
}

int main() {
  vector<Pair> v {
                  Pair(1, 5),
                  Pair(3, 7),
                  Pair(4, 6),
                  Pair(6, 8),
                  Pair(10, 12),
                  Pair(11, 15)
                  };

  vector<Pair> result = merge_intervals(v);
  
  for(int i = 0; i < result.size(); i++){
    cout << "[" << result[i].first << ", " << result[i].second << "] ";
  }
}