#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;
int main(){
	vector<int> iv(10,0);
	copy(iv.begin(),iv.end(),ostream_iterator(cout," "));

    cout << "git hub"<<endl;
	return 0;
}
