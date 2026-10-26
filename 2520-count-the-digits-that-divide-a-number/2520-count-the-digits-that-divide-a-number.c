int countDigits(int num) {
    int digit=0;
   int count=0;
   int number=num;
   while(num!=0) {
   digit=num%10;
    num=num/10;
   if(number%digit==0)
   count++;
   }
   return count;
}