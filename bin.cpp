#include <iostream>
#include <array>
#include <vector>
using namespace std;

int first_fit ( std::vector<float>  oggetti ){
  int len_oggetti =  oggetti.size();
  float bins [len_oggetti] = {0};
  int last_bin = 0;
  for ( int i = 0; i < len_oggetti; i++ ){
      printf ("%f \n",bins[last_bin] );
    if(bins[last_bin] + oggetti.at(i) <= 1){

      bins[last_bin] = bins[last_bin] + oggetti.at(i);
    } else {
      last_bin = last_bin + 1;
      bins[last_bin] += oggetti[i];
    }

  }
  return last_bin+1;
}

int main() {
  std::vector<float> oggetti = { 0.1, 0.5, 0.5, 0.1, 0.6,0.1, 0.5, 0.5, 0.1, 0.6,0.1, 0.5, 0.5, 0.1, 0.6,0.1, 0.5, 0.5, 0.1, 0.6,0.1, 0.5, 0.5, 0.1, 0.6,0.1, 0.5, 0.5, 0.1, 0.6,0.1, 0.5, 0.5, 0.1, 0.6,0.1, 0.5, 0.5, 0.1, 0.6,0.1, 0.5, 0.5, 0.1, 0.6,0.1, 0.5, 0.5, 0.1, 0.6 };
  int f_f;
  f_f = first_fit(oggetti);
  printf ("\n%i\n", f_f);
  return 1;
}