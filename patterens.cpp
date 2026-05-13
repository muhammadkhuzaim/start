#include<iostream>
using namespace std;

//Mountain Patteren
void print(int n) {
	for (int i = 0; i < n; i++) {

		for (int l = 1; l <= n-i-1; l++) {
			cout << " ";
		}
		for (int j = 0; j <(2*i+1); j++) {
			cout << "*";
		}
		

		for (int p = 1; p < 5 - i; p++) {
			cout << " ";
		}
		cout << endl;
	}
}

//Flip the mountain Patteren:
void print1(int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int r = 0; r < 5 - i; r++) {
			cout << "*";
		}

		for (int q = 0; q < 5 - i - 1; q++) {
			cout << "*";
		}
		for (int e = 0; e < 0; e++) {
			cout << " ";
		}cout << endl;
	}
}

void print2(int n) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			cout << " ";
		}
		for (int q = 0; q < i; q++) {
				cout << "*";
		}

		for (int u = 0; u <= i; u++) {
				cout << "*";
		}

		for (int w = 0; w < 4 - i; w++) {
			cout << " ";
		}cout << endl;

	}


}

 void print3(int n) {
 	for (int i = 0; i < 5; i++) {
 		for (int j = 0; j <= i; j++) {
 			cout << i + 1;
 		}
 	}
 }

void print4(int n) {
	int stars;
	for (int i = 1; i <=2 * n - 1; i++) {
		stars = i;
		if (i > n)
			stars = (2 * n - i);
		for (int j = 1; j <= stars; j++) {
			cout << "*";
		}cout << endl;

	}
}

void print5(int n) {
	int start = 1;                                             
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)start = 1;
		else start = 0;

		for (int j = 0; j <= i; j++) {
			cout << start;
			start = 1 - start;
		}cout << endl;
	}
}

void print12(int n) {
	for (int i = 0; i < n; i++) {
		
		for (int j = 0; j <= i; j++) {
			cout << j + 1;
		}
		for (int k = i; k < n - 1; k++) {
			cout << " ";
		}

		for (int l = i; l < n - 1; l++) {
			cout << " ";
		}
		for (int u = i + 1; u >= 1; u--) {
			cout << u;
		}cout << endl;
	}
}

Patteren 12 Optimized Version:
There is some better approach: 2*(n-i-1)  or  2*(n-1) and then decrement 2 for every loop

void print12op(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << j+1;
		}

		for (int l = 0; l < 2*(n-1-i); l++) {
			cout << " ";
		}

		for (int k = i+1; k >= 1; k--) {
			cout << k;
		}

		cout << endl;
	}
}

Patteren 13:

void print13(int n) {
	int start = 1;
	for (int i = 1; i <=n; i++) {
		
		for (int j = 1; j <= i; j++) {
			cout << start << " ";
			start++;
		}cout << endl;

	}
}

Patteren 14:

void print14(int n) {
	char ch = 'A';
	for (int i = 1; i <= n; i++) {
		ch = 'A';
		for (int j = 1; j <= i; j++) {
			cout << ch;
			ch++;
		}cout << endl;

	}
}


void print15(int n) {
	char ch = 'A';
	for(int i=n; i>=1; i--){
		ch = 'A';
		for (int j = 1; j <= i; j++) {
			cout << ch;
			ch++;
	    }
		cout << endl;
	
	}
}

void print16(int n) {
	char ch = 'A';

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << ch;
		}
		cout << endl;
		ch++;
	}
}

void print17(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i-1; j++) {
			cout << " ";
		}

		char ch = 'A';
		int breakpoint = (2 * i + 1) / 2;

		for (int j = 1; j <= 2 * i + 1; j++) {
			cout << ch;

			if (j <= breakpoint)ch++;
			else ch--;

		}

		for (int k = 0; k < n - i-1; k++) {
			cout << " ";
		}
		cout << endl;
	}
}

void print18(int n) {
	for (int i = 0; i < n; i++) {
		for (char ch = 'E' - i; ch <= 'E'; ch++) {
			cout << ch << " ";
		}cout << endl;

	}
}

void print19(int n) {
	int inS = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			cout << "*";
		}

		for (int t = 0; t < inS; t++) {
			cout << " ";
		}
	
		for (int j = 0; j < n - i; j++) {
			cout << "*";
		}cout << endl;

		inS += 2;

	}

	inS = 8;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}

		for (int k = 0; k < inS; k++) {
			cout << " ";
		}
		for (int p = 0; p <= i; p++) {
			cout << "*";
	   }
		cout << endl;
		inS -= 2;

	}

	
}

void print20(int n) {
	int inS = 8;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		for (int k = 0; k < inS; k++) {
			cout << "-";
		}
		for (int p = 0; p <= i; p++) {
			cout << "*";
		}cout << endl;
		inS -= 2;
	}
	inS = 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (n - i - 1); j++) {
			cout << "*";
		}
		for (int k = 0; k < inS; k++) {
			cout << "-";
		}

		for (int p = 0; p < (n - i - 1); p++) {
			cout << "*";
		}
		cout << endl;

		inS += 2;

	}

}
void print21(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}cout << endl;
	}
}

int main() {
	int n;
	cin >> n;


	

	


	


}