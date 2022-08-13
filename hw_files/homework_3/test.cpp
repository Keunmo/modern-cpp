#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <filesystem>
#include <array>
#include <tuple>
#include <vector>
#include <set>
#include <typeinfo>
namespace fs = std::filesystem;

inline std::string lastElemSpliter(const std::string& str_in, const char sep) {
    std::string s_out = str_in;
    for (auto& i : s_out) {
        if (i == sep)
            i = ' ';
    }
    std::stringstream stream;
    stream.str(s_out);
    while (stream >> s_out); // do nothing, just push elems of stream to s_out till end.
    return s_out;
}

int main() {
	// const std::string s_in{"/Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_3/test.cpp"};
	// std::string file_name = lastElemSpliter(s_in, '/');
	// std::string extension = lastElemSpliter(file_name, '.');
	// std::cout << file_name << std::endl;
	// std::cout << extension << std::endl;
		
	// std::string file_name2 = fs::path(s_in).filename();
	// std::string extension2 = fs::path(s_in).extension();
	// std::cout << file_name2 << std::endl;
	// std::cout << extension2 << std::endl;

	// using ScoredImage = std::tuple<std::string, float>;
	// using ImageRow = std::array<ScoredImage, 3>;
	// ScoredImage im1 = std::make_tuple("/Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_3/web_app/data/000000.png", 0.98);
	// ScoredImage im2 = std::make_tuple("/Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_3/web_app/data/000100.png", 0.96);
	// ScoredImage im3 = std::make_tuple("/Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_3/web_app/data/000200.png", 0.88);
	// ImageRow row1 = {im1, im2, im3};

	const fs::path data_path{"/Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_3/web_app/data"};
	std::set<std::string> sorted_files;
	// std::set<fs::path> sorted_files;
	std::cout << "dir iter" << std::endl;
	for (const auto& dir_elem : fs::directory_iterator{data_path}) {
		// std::cout << dir_elem.path() << std::endl;
		sorted_files.insert(dir_elem.path());
		// sorted_files.insert(dir_elem);
	}
	std::cout << "set size: " << sorted_files.size() << std::endl;
	std::cout << "sorted fnames" << std::endl;
	int idx = 0;
	for (const auto& f_entry : sorted_files) {
		if (idx % 3 == 0)
			std::cout << "it's first elem of row" << f_entry << std::endl;
		else
			std::cout << f_entry << std::endl;
		idx++;
	}
	// std::set<std::string>::iterator iter;
	// for (iter=sorted_files.begin(); iter != sorted_files.end(); iter++) {
	// 	std::cout << *iter << std::endl;
	// }
	return 0;
}
