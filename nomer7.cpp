#include <iostream>
#include <string>
#include <vector>


std::string join(const std::vector<std::string>& ctroka, const std::string& sep) {
	std::string ot;
	for (int i = 0; i < ctroka.size(); ++i) {
		ot += ctroka[i];
		if (i != ctroka.size() - 1) {
			ot += sep;
		}
	}
	return ot;
}

int main() {
	std::vector<std::string> arr = { "Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?" };
	std::string str = join(arr, " ");
	std::cout << str << std::endl;
}
