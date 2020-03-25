#include <iostream>
#include <conio.h>
#include <graphics.h>
using namespace std;
int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 70;
    int y = 70;
    int r = 20;
    int i;
    for(int j=0;j<500;){
        for(i=0;i<300;i+=10,j+=2){
                    cleardevice();
                    if((y+i+r)>400||(x+j+r)>600){
                        break;
                    }
                    rectangle(50,400,600,50);
                    circle(x+j,y+i,r);
                    delay(30);
        }
        for(;i>0;i-=10,j+=2){
                    cleardevice();
                    if((y+i+r)>400||(x+j+r)>600){
                        break;
                    }
                    rectangle(50,400,600,50);
                    circle(x+j,y+i,r);
                    delay(30);
        }
    }
    for(int j=500;j>=0;){
            for(;i>0;i-=10,j-=2){
                    cleardevice();
                    if((y+i-r)<50||(x+j-r)<50){
                        break;
                    }
                    rectangle(50,400,600,50);
                    circle(x+j,y+i,r);
                    floodfill(x+j,y+i,15);
                    delay(30);
        }
        for(;i<300;i+=10,j-=2){
                    cleardevice();
                    if((y+i-r)<50||(x+j-r)<50){
                        break;
                    }
                    rectangle(50,400,600,50);
                    circle(x+j,y+i,r);
                    delay(30);
        }
    }
    getch();
    closegraph();
}
