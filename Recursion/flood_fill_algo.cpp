//Used in MS Paint

//Given the co-ordinates of screen and the new color, repaint the canvas
#include<iostream>
#include<algorithm>

using namespace std;
void floodFillUtil(int arr[][8],int x,int y,int prevC,int newC)
{
	if(x<0 || x>=8 || y<0 || y>=8)  //Boundary value conditions
		return;
	if(arr[x][y]!=prevC) //To avoid repetitive changes in case it has already been changed to new color
		return;

	arr[x][y]=newC;

	floodFillUtil(arr, x+1, y, prevC, newC); 
    floodFillUtil(arr, x-1, y, prevC, newC); 
    floodFillUtil(arr, x, y+1, prevC, newC); 
    floodFillUtil(arr, x, y-1, prevC, newC); 
}
void floodfill(int arr[][8],int x , int y , int newC)  //Need to put the y value condition in array while passing it
{
	int prevC = arr[x][y];
	floodFillUtil(arr,x,y,prevC,newC);
}
int main()
{
	int arr[8][8]=	 {{1, 1, 1, 1, 1, 1, 1, 1}, 
                      {1, 1, 1, 1, 1, 1, 0, 0}, 
                      {1, 0, 0, 1, 1, 0, 1, 1}, 
                      {1, 2, 2, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 0, 1, 0}, 
                      {1, 1, 1, 2, 2, 2, 2, 0}, 
                      {1, 1, 1, 1, 1, 2, 1, 1}, 
                      {1, 1, 1, 1, 1, 2, 2, 1}, };

	int x = 4, y=4,newC=3;
	floodfill(arr,x,y,newC);
}