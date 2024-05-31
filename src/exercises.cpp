
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
    for(int i = 0; i <= s1.size(); ++i) {
        if(s1[i] == ' '){
            cout << i << endl;
        }
    }
    cout << s1.size() << endl;
    }

void exercise_2(string s1) {
    string aux;
  for(int i = 0; i < s1.size(); ++i){
    if(i == s1.size() - 1){
        aux += s1[i];
        cout << "[" << aux << "]" << endl;
    }
    else if(s1[i] != ' '){
        aux += s1[i];
    }
    else if(s1[i] == ' '){
        cout << "[" << aux << "]" << endl;
        aux.clear();
    }
  }
}

void exercise_3(string s1) {
    if(s1 == ""){
        cout << "";
    }
    else{
    string aux;
    for(int j = 0; j <= s1.size() -1; ++j){
        if(s1[j] == '1' || s1[j] == '0'){
            aux += s1[j];
        }
    }
    aux.resize(10);
    for(int i = 0; i <= aux.size() -1; i++){
        if(aux[i] == '0'){
            cout << "No cake :(" << endl;
            break;
        }
    else if(aux[i] == '1'){
        cout << "Om-nom-nom :P" << endl;
    }
    }
    }
}

void exercise_4(int n) {
  int auxiliar = 1;
  if(n<0){
      cout << "El numero es negativo. Intentelo de nuevo" << endl;
  }
  else if(n>14){
      cout << "El numero es muy grande. Intentelo de nuevo" << endl;
  } else{
  for(int i = 1; i<=n; i++){
      auxiliar *= i;
  }
  cout << auxiliar << endl;
  }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  if(n <= 0){
      return 0;
  }
  else{
      float aux;
      int suma = 0;
      string n3;
      string n2 = to_string(n);
      for(int i = 0; i <= n2.size() -1; i++){
        string aux = n2[i];
          n3 += aux;
          aux = stod(n3);
          suma += aux;
      }
      cout << suma << endl;
      return suma;
  }
  return 0;
}

void exercise_7(int n) {
  double suma = 0;
   for(int i = 1; i <= n; ++i) {
       double potencia = pow (-1, (i + 1) );
       double auxiliar = ( potencia / i);
       suma += auxiliar;
   }
   if (suma<0){
    cout << 0;
   }
   else{
    cout << suma << endl;
}
}

void exercise_8(string s) {
  string word;
  string reverse;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
    }
    for(int j = word.size() - 1 ; j >= 0; j--){
        reverse += word[j];
    }
    if(word == reverse){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
} 

void exercise_9(string s) {
    if(s == ""){
        cout << -2 << endl;
    }
    else{
    int f0 = 0;
  int f1 = 0;
  int f2 = 0;
  string contador;
  for(int i = 0; i <= s.size() -1; i++){
      if(s[i] == 'f'){
          contador += s[i];
      }
  }
  if(contador.size() == 2){
              cout << 3 << endl;
          }
          else if(contador.size() == 1){
              cout << -1 << endl;
          }
          else{
              cout << -2 << endl;
          }
    }
}

int exercise_10(int a, int b) {
  int divisor;
  int result;
  if(a == b){
      return a;
  }
  else if(a > b){
      divisor = a;
      for(int i = divisor; i > 0; i--){
          if(a%i == 0 && b%i == 0){
              result = i;
                break;
          }
      }
  }
  else if(b > a){
      divisor = b;
      for(int j = divisor; j > 0; j--){
          if(a%j == 0 && b%j == 0){
              result = j;
              break;
  }
     }
        }
    cout << result;
    return result;
          }

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  int suma = 0;
  for(int i = 0; i <= n; i++) {
      int auxiliar = pow (i, k);
      suma += auxiliar;
  }
  return suma;
}

string exercise_14(int n) {
  string x = to_string(n);
  string reverse;
  for(int i = 0; i <= x.size() -1; i++){
      reverse += x[i];
  }
  if(reverse == x){
      return "Es palindrome";
  }
  else if(reverse != x){
      return "No es palindrome";
  }
}

void exercise_15(int decimal) {
    
}

void exercise_16(int divident, int divider) {

}

void exercise_17(int n) {
  cout << 2 << endl;
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}