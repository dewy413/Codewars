int solution(int number)  {
  int counter = 0;
  for(int i = 0; i < number; i++) {
    if(i % 3 == 0 || i % 5 == 0) {
      counter += i;
      } 
  }
  return counter;
}
