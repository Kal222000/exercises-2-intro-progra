
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
  // TODO: YOUR CODE HERE
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
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
  // TODO: YOUR CODE HERE
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
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
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
  string letter = " ";
  letter = to_string(n);
  string reverse;
  for(string j = n.size; j > 0; j--){
   reverse = n.size[j]
  }
  if (n = reverse){
   return "Es palindrome";
  } else(return "No es palindrome");
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}