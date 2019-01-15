#include <stdio.h>
#include <stdbool.h> 

struct Circle{
  int x_centre;
  int y_centre;
  int r;
};
struct Point{
  int x;
  int y;
};

bool point_in_circle(struct Point *p, struct Circle *c){
  return (((c->x_centre - p->x)*(c->x_centre - p->x)+
           (c->y_centre - p->y)*(c->y_centre - p->y)) < (c->r * c->r));
}

bool compare_circles(struct Circle c1, struct Circle c2){
  return ((c1.x_centre == c2.x_centre) && 
          (c1.y_centre == c2.y_centre) &&
          (c1.r == c2.r));
}

bool compare_points(struct Point *p1, struct Point *p2){
  return (p1->x == p2->x) && (p1->y == p2->y);
}

void update_r(struct Circle * c, int new_r){
  c->r = new_r;
}

int main(void){
  struct Circle c1={0,0,10};
  struct Circle c2={0,10,10};
  struct Circle c3={0,10,20};
  struct Point p1={2,2};
  struct Point p2={12,23};
  printf("%d\n", point_in_circle(&p1, &c1));
  printf("%d\n", compare_circles(c1, c2));
  printf("%d\n", compare_points(&p1, &p2));
  p2.x = 2;
  p2.y = 2;
  printf("%d",compare_points(&p1, &p2));
  update_r(&c2, 20);
  printf("%d\n", compare_circles(c2, c3));
}