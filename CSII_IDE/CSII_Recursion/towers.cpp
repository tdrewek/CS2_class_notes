#include <iostream>

class pole{
    public:
        pole(){};

    private:
        poleName p;
};

void move(int n, pole src, pole temp, pole dest){
    if (n == 1){
        std::cout << "Move disk from " << src << " to " << dest << std::endl;
    }
    else {
        move(n-1, src, dest, temp);
        std::cout << "Move disk from " << src << " to " << dest << std::endl;
        move (n-1, temp, src, dest);
    }
}



int main(){
    int n = 1;
    std::cout << "Towers of Hanoi" << std::endl;
    std::cout << "How many disks? " << std::endl;
    std::cin >> n;
    std::cout << std::endl;
    

}