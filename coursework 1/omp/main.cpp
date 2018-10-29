#include <iostream>
#include <string>
#include "block_chain.h"

using namespace std;

int main()
{
	cout << "# Format: hash, time\n\n";

	// loop for difficulties 3 to 6
	for (size_t difficulty = 3; difficulty < 6; ++difficulty) {
		block_chain bchain(difficulty);
		for (uint32_t i = 1; i < 11u; ++i) {
			// cout << "Mining block " << i << "..." << endl;
			bchain.add_block(block(i, string("Block ") + to_string(i) + string(" Data")));
		}
	}

	getchar();
	return 0;
}