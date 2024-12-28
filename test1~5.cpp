#include <iostream>
using namespace std;

// test1
int test1(int n1) {
	if (n1 > 0) {
		cout << "Negative!";
	}
	return n1;
}

// test2
int test2(int n2) {
	if (n2 < 0) {
		cout << "Negative!";
	} else {
		cout << "Natural!";
	}
	return n2;
}

// test3
int test3(int n3) {
	if (n3 > 0 && n3 < 100) {
		cout << "Good!";
	}
	return n3;
}

// test4
int test4(int tn[3], int sn[3], int score = 0) {
	for (int i = 0; i < 3; i++) {
		if (tn[i] == sn[i] && i != 2) {
			score += 30;
		} else if (tn[2] == sn[2] && i == 2) {
			score += 40;
		}
	}
	return score;
}

// test5
int test5(int num[3], int max = 0) {
	for (int i = 0; i < 3; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}
	return max;
}

// main
int main() {
	// test1
	cout << "test1" << endl;
	int n1;
	cout << "請輸入一個整數：";
	cin >> n1;
	cout << test1(n1) << endl;

	// test2
	cout << "test2" << endl;
	int n2;
	cout << "請輸入一個整數：";
	cin >> n2;
	cout << test2(n2) << endl;

	// test3
	cout << "test3" << endl;
	int n3;
	cout << "請輸入一個整數：";
	cin >> n3;
	cout << test3(n3) << endl;

	// test4
	cout << "test4" << endl;
	int tn[3], sn[3];
	cout << "請輸入分別輸入三題正確答案：";
	cin >> tn[0] >> tn[1] >> tn[2];
	cout << "請輸入三個學生答案：";
	cin >> sn[0] >> sn[1] >> sn[2];
	cout << "分數" << test4(tn, sn) << endl;

	// test5
	cout << "test5" << endl;
	int num[3];
	cout << "請輸入三個數字：";
	cin >> num[0] >> num[1] >> num[2];
	cout << "最大值" << test5(num) << endl;

	return 0;
}