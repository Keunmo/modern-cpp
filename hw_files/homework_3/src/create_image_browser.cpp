#include <set>
#include <random>
#include "image_brower_api.hpp"
namespace fs = std::filesystem;

int main(){
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    std::uniform_real_distribution<float> dist(0.7, 1); // define the range

    const std::string title = "Test Image Browser";
    const fs::path root_dir{"/Users/keunmo/Workspace/projects/lang/modern-cpp/hw_files/homework_3/web_app"};
    const fs::path stylesheet{"style.css"};
    const fs::path data_path{"data"};
    
    std::set<std::string> sorted_path;
    image_browser::ImageRow img_row;
    std::vector<image_browser::ImageRow> img_data;
    
    for (const auto& dir_elem : fs::directory_iterator{root_dir / data_path})
		sorted_path.insert(dir_elem.path().filename());
    int idx = 0;
    for (const auto& file_path : sorted_path) {
        if (idx % 3 == 0)
            img_row.empty();
        image_browser::ScoredImage scored_image = std::make_tuple(fs::path(data_path / file_path), dist(gen));
        img_row[idx%3] = scored_image;
        if (idx % 3 == 2)
            img_data.emplace_back(img_row);
        idx++;
    }

    image_browser::CreateImageBrowser(title, stylesheet, img_data);
    return 0;
}