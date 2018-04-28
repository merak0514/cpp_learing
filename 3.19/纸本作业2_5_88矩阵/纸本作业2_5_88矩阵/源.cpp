#include <iostream>
#include <time.h>
#include<cmath>
using namespace std;
int rand_num(int seed);
int is_prime(int num);
void output(int array[]);
int main(){
	int matrix[8][8];
	int even[64], odd[64], prime[64];
	int count_even=0, count_odd=0, count_prime=0;

	for (int i = 0; i < 8; i++){
		for (int j= 0; j < 8; j++){
			matrix[i][j] = rand_num((i+1)*(j+1));
			if (matrix[i][j]% 2==0){
				even[count_even] = matrix[i][j];
				count_even++;				
			}
			else {
				odd[count_odd] = matrix[i][j];
				count_odd++;
			}
			if (is_prime(matrix[i][j])) {
				prime[count_prime] = matrix[i][j];
				count_prime++;
			}			
			cout << matrix[i][j] << '\t';
		}
		cout << endl;
	}

	cout << "奇数：\n";
	output(odd);
	cout << "共" << count_odd << "个\n";

	cout << "偶数：\n";
	output(even);
	cout << "共" << count_even << "个\n";

	cout << "素数：\n";
	output(prime);
	cout << "共" << count_prime << "个\n";

	return 0;
}
int rand_num(int seed){
	srand(time(NULL)+seed);
	return (rand()%100+1);
}
int is_prime(int num) {
	for (int i = 1; i < sqrt(num); i++)
		if (num%i == 0) return false;
	return true;
}
void output(int array[]) {
	int i = 0;
	while (array[i] > 0) {
		cout << array[i]<<' ';
		i++;
	}
}