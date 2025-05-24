#include <stdio.h>
#include <math.h>

#define INTERSECT 1
#define NOT_INTERSECT 0
#define EPS 1e-7
#define ERROR 1
#define INF 0

// Функция для проверки валидности данных
int valid_data(double *x)
{
    int rc;
    char tmp;
    rc = scanf("%lf%c", x, &tmp);
    if (rc == 2)
    {
        if (tmp != '\n' && tmp != ' ')
        {
            return ERROR;
        }
        return 0;
    }
    else if (rc == 1)
    {
        return 0;
    }
    return ERROR;
}
// Функция для нахождения уравнения прямой
void line_equation(double x1, double y1, double x2, double y2, double *a, double *b, double *c)
{
    *a = y1 - y2;
    *b = x2 - x1;
    *c = (y2 - y1) * x1 + (x1 - x2) * y1;
}

// Функция для нахождения точки пересечения прямых
int intersect_point(double a1, double b1, double c1, double a2, double b2, double c2, double *x, double *y)
{
  *x = (c2*b1 - c1*b2) / (a1*b2 - a2*b1);
  *y = (a2*c1 - a1*c2) / (a1*b2 - a2*b1);
  return INTERSECT;
}

// Функция для проверки, принадлежит ли точка отрезку
int on_otr(double x1, double y1, double x2, double y2, double x, double y)
{
  if ((x > fmin(x1, x2) - EPS && x < fmax(x1, x2) + EPS) &&
      (y > fmin(y1, y2) - EPS && y < fmax(y1, y2) + EPS)) {
    return INTERSECT;
  }
  return NOT_INTERSECT;
}

// Функция для проверки, пересекаются ли отрезки на одной прямой
int line_intersect(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
    if (on_otr(x1, y1, x2, y2, x3, y3) || on_otr(x1, y1, x2, y2, x4, y4) || on_otr(x3, y3, x4, y4, x1, y1) || on_otr(x3, y3, x4, y4, x2, y2))
    {
        return INTERSECT;
    }
    if (fabs(fmin(x1, x2) - fmin(x3, x4)) < EPS &&
        fabs(fmax(x1, x2) - fmax(x3, x4)) < EPS &&
        fabs(fmin(y1, y2) - fmin(y3, y4)) < EPS &&
        fabs(fmax(y1, y2) - fmax(y3, y4)) < EPS) {
      return INTERSECT;
    }
    return NOT_INTERSECT;
}

int main(void)
{
    double x1, y1, x2, y2;
    double x3, y3, x4, y4;

    scanf("%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4);
    int ok = valid_data(&y4);
    if (ok != 0) {
      return 1;
    }

    double a1, b1, c1;
    double a2, b2, c2;

    line_equation(x1, y1, x2, y2, &a1, &b1, &c1);
    line_equation(x3, y3, x4, y4, &a2, &b2, &c2);

    double x_intersect = 0;
    double y_intersect = 0;

    if (fabs(a1 * b2 - a2 * b1) < EPS) {
      if (fabs((c2 * b1 - c1 * b2) - (a2 * c1 - a1 * c2)) < EPS) {
        if (line_intersect(x1, y1, x2, y2, x3, y3, x4, y4)) {
          printf("Yes\n");
          return 0;
        }
        printf("No\n");
        return 0;
      }

      printf("No\n");
      return 0;
    }

    int intersect =
        intersect_point(a1, b1, c1, a2, b2, c2, &x_intersect, &y_intersect);

    if (!intersect)
    {
        printf("No\n");
        return 0;
    }
    int on_otr1 = on_otr(x1, y1, x2, y2, x_intersect, y_intersect);
    int on_otr2 = on_otr(x3, y3, x4, y4, x_intersect, y_intersect);
    if (on_otr1 && on_otr2) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
    return 0;
}
