#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public : std :: vector <int> returnVector(int arr[], size_t size){
        std :: vector <int> placeholder;
        for (size_t i = 0; i < size; i++)
            placeholder.push_back(arr[i]);
        
        return (placeholder);
    }
};

int main() {
    int arr[] = {2, 1, 1, 1, 44};
    Solution obj;
    std :: vector <int> placeholder;
    placeholder =  obj.returnVector(arr, 5);
    for (size_t i = 0; i < placeholder.size(); i++)
        std :: cout << placeholder[i] << std :: endl;   
    return 0;
}
