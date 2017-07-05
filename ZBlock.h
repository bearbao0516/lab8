#ifndef Z_BLOCK_H
#define Z_BLOCK_H
#include <iostream>
#include "Oblock.h"
using namespace std;
char Z_arr[2][4][4] = { { { '0', '0', '0', '0' },
{'0', '0', '0', '0'},
{'1', '1', '0', '0'},
{'0', '1', '1', '0'} },
{{ '0', '0', '0', '0' },
{'0', '0', '1', '0'},
{'0', '1', '1', '0'},
{'0', '1', '0', '0'}} };
class Z_Block : public O_Block{
public:
void paint() {
for (int i = 0; i<4; ++i)
{
 for (int j = 0; j<x; ++j) cout << ' ';
for (int j = 0; j<4; ++j)
 cout << Z_arr[rotate_index][i][j];
cout << endl;
 }
 cout << endl;
		}
};
 #endif