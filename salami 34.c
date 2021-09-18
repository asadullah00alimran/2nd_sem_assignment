int main(){

  int no;
  int totalDigits = 0;

  printf("Enter a number : ");
  scanf("%d",&no);

  while(no!=0){

    no = no/10;
    totalDigits ++;
  }

  printf("Total digits in the number is %d\n",totalDigits);
}
