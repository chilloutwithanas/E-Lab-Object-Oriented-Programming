#include <iostream>
using namespace std;

class Olympic {
  int D1,D2,D3,D4,D5;
  public:
  int distance(int D1,int D2){
  return D1+D2;
  }
  int distance(int D3,int D4,int D5){
  return D3+D4+D5;
  }
};

int main() {
  Olympic ob;
  int D1,D2,D3,D4,D5;
  cin>>D1>>D2>>D3>>D4>>D5;
  cout<<ob.distance(D1,D2)<<" meters"<<endl;
  cout<<ob.distance(D3,D4,D5)<<" meters"<<endl;
  return 0;
}
