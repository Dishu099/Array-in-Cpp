

/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    
    int temp;
    int sum=0;
    while(n!=0){
        temp=n%10;
        if(temp==0){
            temp=5;
        }
        sum=sum*10+temp;
        n=n/10;
    }
    int temp1;
    int num=0;
    while(sum!=0){
       temp1=sum%10;
        num=num*10+temp1;
        sum=sum/10; 
    }
    return num;
}
