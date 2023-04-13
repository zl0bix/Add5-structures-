#include<iostream>
#include<string>
#include<cmath>
//#include<xpsprint.h>
//#include <windows.h>
/*#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    char ch;
    int code;
    while (1)   {//(true)   
    ch = getch();
        code = static_cast<int>(ch);
        if (ch == 27) // если клавиша esc
            exit(0);
    }
}
*/
struct point {
    int x{};
    int y{};
};
int comp_dist(const point &P1,const point &P2);
int main() {
	setlocale(LC_ALL, "rus");
	//system("cls"); //(fflush)
/*
    struct abc {
        int day{1};
        int month{1};
        int year{2011};
        std::string note;
    } a1;

    a1 = {
        44,13,11,"Delo"
    };

    a1.day = 10;
    std::cout << a1.day << std::endl;

    int next_day = a1.day + 1;
    */
   point p1{ 3,3 }, p2{-2,-2};
   std::cout<<comp_dist(p1, p2);
    
	return 0;
}
int comp_dist(const point&P1,const point&P2) {
    double dis1 = sqrt(pow(P1.x,2)+
        pow(P1.y,2));
    double dis2 = sqrt(pow(P2.x, 2) +
        pow(P2.y, 2));
    if(dis1==dis2)
    return 0;
    if (dis1 > dis2)
        return 1;
    
        return -1;
}