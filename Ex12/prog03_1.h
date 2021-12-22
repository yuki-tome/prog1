
typedef struct{
  double x;
  double y;
} Ten;

typedef struct{
  Ten p[3];
} Tri;

void InputShape(Tri *);
int IsTriangle(Tri );
double GetArea(Tri );
Ten GetCentroid(Tri );
