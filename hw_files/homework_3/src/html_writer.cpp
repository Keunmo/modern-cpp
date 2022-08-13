#include "html_writer.hpp"
using std::cout;
using std::endl;
namespace fs = std::filesystem;

// inline std::string lastElemSpliter(const std::string& str_in, const char sep) {
//     std::string s_out = str_in;
//     for (auto& i : s_out) {
//         if (i == sep)
//             i = ' ';
//     }
//     std::stringstream stream;
//     stream.str(s_out);
//     while (stream >> s_out); // do nothing, just push elems of stream to s_out till end.
//     return s_out;
// }

namespace html_writer {
    void OpenDocument() {
        cout << "<DOCTYPE html>" << endl;
        cout << "<html>" << endl;
    }
    void CloseDocument() {
        cout << "</html>" << endl;
    }
    void AddCSSStyle(const std::string& stylesheet) {
        cout << "  <head>" << endl;
        fmt::print("    <link rel=\"stylesheet\" type=\"text/css\" href=\"{}\" />\n", stylesheet);
        cout << "  </head>" << endl;
    }
    void AddTitle(const std::string& title) {
        fmt::print("  <title>{}</title>\n", title);
    }
    void OpenBody() {
        cout << "  <body>" << endl;
    }
    void CloseBody() {
        cout << "  </body>" << endl;
    }
    void OpenRow() {
        cout << "    <div class=\"row\">" << endl;
    }
    void CloseRow() {
        cout << "    </div>" << endl;
    }
    void AddImage(const std::string& img_path, float score, bool highlight) {
        if (highlight)
            cout << "      <div class=\"column\" style=\"border: 5px solid green;\">" << endl;
        else
            cout << "      <div class=\"column\">" << endl;
        // std::string img_name = lastElemSpliter(img_path, '/');
        // std::string extension = lastElemSpliter(img_name, '.');
        std::string extension = fs::path(img_path).extension();
        if ((extension != "png") && (extension != "jpg")) {
            std::cerr << "[ERROR] : This library only process png or jpg files." << endl;
        }
        std::string img_name = fs::path(img_path).filename();
        fmt::print("        <h2>{}<h2>\n", img_name);
        fmt::print("        <img src=\"{}\" />\n", img_path);
        fmt::print("        <p>{:.2f}<p>\n", score);
    }
} // namespace html_writer