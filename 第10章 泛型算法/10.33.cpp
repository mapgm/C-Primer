#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	ifstream ifs("integer.txt");
	ofstream ofs_odd("oddResult.txt"), ofs_even("evenResult.txt");
	
	istream_iterator<int> in(ifs), in_eof;
	ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");
	
	for_each(in, in_eof, [&out_odd, &out_even](const int i){
		*(i & 1 ? out_odd : out_even)++ = i;
	});
	
	return 0;
}
