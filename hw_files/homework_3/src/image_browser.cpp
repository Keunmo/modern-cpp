#include "image_browser.hpp"

namespace image_browser {
    void AddFullRow(const ImageRow& row, bool first_row) {
        html_writer::OpenRow();
        for (const auto& [img_path, score] : row) {
            html_writer::AddImage(img_path, score, first_row);
            first_row = false;
        }
        html_writer::CloseRow();
    }
    void CreateImageBrowser(const std::string& title, const std::string& stylesheet,
                            const std::vector<ImageRow>& rows) {
        html_writer::OpenDocument();
        html_writer::AddTitle(title);
        html_writer::AddCSSStyle(stylesheet);
        html_writer::OpenBody();
        bool first_row = true;
        for (const auto& row : rows) {
            AddFullRow(row, first_row);
            first_row = false;
        }
        html_writer::CloseBody();
        html_writer::CloseDocument();
    }
} // namespace image_browser
