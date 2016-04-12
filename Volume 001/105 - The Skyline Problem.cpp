#include<iostream>
#include<vector>

using namespace std;
 
class Point
{
    public:
        int right, left, height;
        Point(int l, int h, int r) 
            :left(l), height(h), right(r) {}
        Point() {}
};
 
int main()
{
    vector<Point> p;
    int height[10005] = {0};
    int r, h, l;
    int end = 0;
 
    while (scanf("%d%d%d", &l, &h, &r) != EOF)
    {
        p.push_back(Point(l, h, r));
    }
 
    for (int i = 0; i < p.size(); i++)
    {
        for (int j = p[i].left; j < p[i].right; j++)
        {
            if (height[j] < p[i].height)
                height[j] = p[i].height;
        }
        if (end < p[i].right)
            end = p[i].right;
    }
 
    //output
    int temp = 0;
    for (int i = 1; i < end; i++)
    {
        if (temp != height[i])
            printf("%d %d ", i, height[i]);
        temp = height[i];
    }
    printf("%d 0\n", end);
 
    return 0;
}