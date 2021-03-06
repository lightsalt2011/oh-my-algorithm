/*
  oh-my-algorithm sort
  copyright by bokenshonen(kidd.dawny.lu@gmail.com)
*/

/* make sure that there is no function call when sorting */

#if 0
int bubble_sort(int array[], int len)
{
  int i, j;
  int tmp;

  //position
  int start=0;
  int end=len - 1;


//  if (array==NULL || len < 1) {
//    printf("error\n");
//    return -1;
//  } else if (len == 1) {
//    return 0;
//  }


  for(i=start; i<end; i++) {
    for(j=start; j<end-i; j++) {
      if(array[j] > array[j+1]) {
        tmp = array[j];
        array[j] = array[j+1];
        array[j+1]= tmp;
      }
    }
  }
}

int selection_sort(int array[], int len)
{
  int i, j;
  int tmp;

  //position
  int start=0;
  int end=len - 1;

  for(i=start; i<=end; i++)
    for(j=i+1; j<=end; j++)
    {
      if(array[i] > array[j]) {
        tmp = array[i];
        array[i] = array[j];
        array[j]= tmp;
      }
    }
}


int insertion_sort(int array[], int len)
{
  int i, j;
  int tmp;

  //position
  int start=0;
  int end=len - 1;

  //every time insert one member to a sorted array
  for(i=start + 1; i<=end; i++) {
    for(j=i; j > start;j--) {
      if(array[j] < array[j-1]) {
        tmp = array[j];
        array[j] = array[j-1];
        array[j-1] = tmp;
      } else {
        break;
      }
    }
  }
}

#else
int bubble_sort(int array[], int len)
{}

int selection_sort(int array[], int len)
{}

int insertion_sort(int array[], int len)
{}
#endif
