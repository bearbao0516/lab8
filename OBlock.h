#ifndef O_BLOCK_H
#define O_BLOCK_H
#include <iostream>
using namespace std;
char O_arr[1][4][4] = { { { '0', '0', '0', '0' },
{'0', '1', '1', '0'},
{'0', '1', '1', '0'},
{'0', '0', '0', '0'} }
 };
class O_Block{
 public:
	 O_Block() :x(0), y(0), rotate_index(0) {}
	 O_Block& rotate(){
 rotate_index = (rotate_index>0) ?0 : rotate_index + 1;
 return *this;

		}
	 O_Block& left() {
			x = (x>0) ? (x - 1) : 10;
			return *this;
		}
	 O_Block& right() {
			x = (x>10) ? 0 : x + 1;
			return *this;
		}
 void paint() {
 for (int i = 0; i<4; ++i)
 {
 for (int j = 0; j<x; ++j) cout << ' ';
 for (int j = 0; j<4; ++j)
	 cout << O_arr[rotate_index][i][j];
 cout << endl;
 }
 cout << endl;
		}
 public:
 int x, y;
 int rotate_index;

};
#endif