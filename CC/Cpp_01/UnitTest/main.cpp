/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Language{
    public : 
        virtual void greet() = 0;
};

class Spanish : public Language{
    // public : void greet(){
    //     std :: cout << "CC Lisami" << std :: endl;
    // }
};

class Arabe : public Language{
    public : void greet(){
        std :: cout << "Asalamo aliykom" << std :: endl;
    }
};

class Solution{
    int number;
    public : Solution(int number){
        this->number = number;
    }
    void FtDisplay(){
        std :: cout << this->number <<  std :: endl;
    }
};

int main()
{
    int *number = new(nothrow)int[100000000000];
    if (!number)
    {
        std :: cout << "BadAlloc" << std :: endl;
     //   delete [] number;
        return -1;
    }
    for (int i = 0; i < 100; i++){
        number[i] = i + 1;
        // std :: cout << number[i] << " " << std :: ends;
    }
    //Solution *solution = new Solution(20);
    //solution->FtDisplay();

    //Language *language1 = new Spanish;
    //Language *language2 = new Arabe;
    //language1->greet();
    //language2->greet();
    // language2->Arabe();
    delete [] number;
    return 0;
}
