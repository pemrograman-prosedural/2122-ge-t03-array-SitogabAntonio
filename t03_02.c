// 12S21015 - Sitogab Antonio Octavianus Girsang
// 12S21049 - Jesika Audina Purba

#include <stdio.h>

int main(int _argc, char **_argv)
{

  int x,y;
  scanf("%d", &y);
  int value[y], low, high;
  float rata;
  for ( x = 0; x < y; x++)
  {
    scanf("%d", &value[x]);
  }
  high = value[0];
  for ( x = 1; x < y; x++)
  {
    if (high < value[x])
    {
      high = value[x];
    } else if (low > value[x])
    {
      low = value[x];
    }
    
  }

  int len = sizeof(value) / sizeof(*value);
    int total = 0;
    for(x = 0; x < len; x++) 
    {
      total += value[x];
    }

  rata = (float)total / (float)len;

  
  printf("%d\n%d\n%.2f\n", low, high, rata);
  

  return 0;
}
