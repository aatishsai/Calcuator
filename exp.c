//#include <stdio.h>
//#include <conio.h>
//float exp1(float,int);
//int main(){
//	float ans;
//  ans=exp1(2,5);
//  printf("%0.5f",ans);
//  getch();
//  return 0; 
//
//}
//
float exp1 (float x,int y){
  int i;
  float result=1;
  for (i=1;i<=y;i++){
   result=result*x;
   
  
  }
  return result;


}
