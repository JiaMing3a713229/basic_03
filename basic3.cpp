//3a713229 
#include <stdio.h>   //���J���Y�� 
#include <stdlib.h>   
int main(void){
	float h;
	float BMI,height,weight; //�إ��ܼ�BMI,heigth(����),weight(�魫) 
	printf("�п�J����:");
	scanf("%f",&height);
	printf("�п�J�魫:");
	scanf("%f",&weight);
    h=(height/100);
	BMI=(weight/(h*h));  //BMI=�魫�����谣�H���� 
	printf("your BMI is:%f\n",BMI);//���BMI 
	system("pause");
	
}    
