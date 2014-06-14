#include<iostream>

using namespace std;

int main(){

int N;

cin >> N;

int array[N];

for(int i=0; i < N; i++){
	cin >> array[i];
}

double sum = 0;

for(int i=0; i < N; i++){
	sum += array[i];
}

double mean = sum/N;

int max = 0;

for(int i=0; i<N; i++){
	if (array[i] > max) max = array[i];
}

int min = 99999;

for(int i=0; i<N; i++){
	if (array[i] < min) min = array[i];
}

int range = max -min;


cout << "Mean: " << mean << endl;
cout << "Max: " << max << endl;
cout << "Min: " << min << endl;
cout << "Range: " << range << endl;

return 0;

}
