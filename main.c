// 문제 : 변수를 만들고 200을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

#include "stdio.h"

int main(void) {
  int size = sizeof(unsigned int);
  int c = 200;
  printf("%d\n", size);
  printf("%d", c);
  




  // 문제 : 변수를 만들고 21억을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

  // 정수
  long long int s = 2100000000; // 최대 8 바이트까지 가능. (정수형)

  printf("s : %lld\n", s);



  // 문제 : 변수를 만들고 22억을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

  long long int q = 2200000000;

  printf("1st 시도 => s : %lld\n", q); // 실패, %d는 int로 취급된다. int는약 -21억부터 +21억까지 표현가능 하다.



  // 변수를 만들고 400억을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)
 long long int u = 40000000000;
  
  printf("s : %lld", u);
  return 0;
}