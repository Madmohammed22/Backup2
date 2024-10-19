#include <iostream>
#include <fstream>
using namespace std;

class Solution
{
public:
    void replaceContent(const std::string filePath, std::string s1, std::string s2)
    {
        (void)s1;
        (void)s2;
        // (void)filePath;

        std::ifstream file_in;
        file_in.open(filePath);
        // if (!file_in)
        // {
        //     std::cerr << "Error opening file: " << filePath << std::endl;
        //     return;
        // }

        // std::string content((std::istreambuf_iterator<char>(file_in)), std::istreambuf_iterator<char>());
        // file_in.close();

        // size_t pos = 0;
        // while ((pos = content.find(s1, pos)) != std::string::npos)
        // {
        //     content.replace(pos, s1.length(), s2);
        //     pos += s2.length();
        // }

        // std::ofstream file_out(filePath);
        // if (!file_out)
        // {
        //     std::cerr << "Error writing to file: " << filePath << std::endl;
        //     return;
        // }
        // file_out << content;
        // file_out.close();
    }
};

int main()
{
    std::string s1 = "this is just a test";
    std::string s2 = "replace";
    std::string filename = "test.txt";
    Solution obj;
    obj.replaceContent(filename, s1, s2);
    return 0;
}

// int main () {

//   std::ifstream ifs ("test.txt", std::ifstream::in);

//   char c = ifs.get();

//   while (ifs.good()) {
//     std::cout << c;
//     c = ifs.get();
//   }

//   ifs.close();

//   return 0;
// }