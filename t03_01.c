// 12S21015 - Sitogab Antonio Octavianus Girsang
// 12S21049 - Jesika Audina Purba

#include <stdio.h>

int main(int _argc, char **_argv)
{

int x,y;
  scanf("%d", &y);
  int value[y], low, high;
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
  
  printf("%d\n%d\n", low, high);

  
  return 0;
}
