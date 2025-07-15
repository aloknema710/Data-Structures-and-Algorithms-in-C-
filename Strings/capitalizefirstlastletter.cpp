#include<bits/stdc++.h>
using namespace std;
string Capitalize(string str){
    for(int i = 0; i < str.length(); i++){
        if(i == 0 || i  == str.size() - 1){
            str[i] = toupper(str[i]);
        }
        else if(str[i] == ' '){
            str[i-1] = toupper(str[i-1]);
            str[i+1] = toupper(str[i+1]);
        }
    }
    return str;
}
int main(){
    string str = "take u forward is awesome";
    cout<<Capitalize(str);
  return 0;
}

/*
void Capitalize(string str, int size) {
  for (int i = 0; i < size; i++) {
    if (i == 0 || i == (size - 1) && (int) str[i] >= 97) // Converting first and
    last index character to uppercase
    {
      str[i] = ((char)((int) str[i] - 32));
    } else if (str[i] == ' ') // Converting characters present before and after
     space to uppercase
    {
      if (((int) str[i - 1] - 32) >= 65) // Checking if already not an uppercase
      letter
        str[i - 1] = ((char)((int) str[i - 1] - 32));

      if (((int) str[i + 1] - 32) >= 65) // Checking if already not an uppercase
      letter
        str[i + 1] = ((char)((int) str[i + 1] - 32));
    }
  }

  cout<<"String after capitalizing the first and last letter of each word of the
  string: "<< "\n";
  cout << str << "\n";
}
*/