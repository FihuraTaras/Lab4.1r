// Lab_04.1.cpp
// < Фігура Тарас >
// Лабораторна робота № 4.1
// Цикли.
// Варіант 12

#include <iostream>
#include <cmath>
using namespace std;

 int main()
 {
  int N, i;
  double S;
	cout << "N = "; cin >> N;
	    S = 0;
	i = N;
  while (i <= N)
	   {
	  S += sqrt((i * i) + (N * N) / i);
		i++;
	   }
	cout << S << endl;
		S = 0;
	i = N;
  do {
		S += sqrt((i * i) + (N * N) / i);
		i++;
	   } 
  while (i <= N);
	cout << S << endl;
	    S = 0;
  for (i = N; i <= N; i++)
	   {
		S += sqrt((i * i) + (N * N) / i);
	   }
	cout << S << endl;
	    S = 0;
  for (i = N; i >= N; i--)
	   {
		S += sqrt((i * i) + (N * N) / i);
	   }
	cout << S << endl;

  return 0;
}