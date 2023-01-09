#include<iostream>
using namespace std;

int main() {
  
  string s;
  cin >> s;
  int lon = s.length(), a = 0;

  for(int i = 0; i < lon; i++){
    if(s[i] == '(') a++;
    else{
      if(a <= 0){
        cout << "NO";
        return 0;
      }else a--;
    }
  }

  if(a != 0){
    cout <<"NO";
    return 0;
  }

  cout << "SI";

  return 0;
}
