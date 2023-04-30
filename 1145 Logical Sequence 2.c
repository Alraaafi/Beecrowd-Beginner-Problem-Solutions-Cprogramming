int main()
{
    int n,i;

   while(1){
    scanf("%d",&n);
   if(n==0)
   {
       break;
   }
   else{

    for(i=1; i<=n; i++){
        if(i==n) {
                printf("%d\n",i);
                break;
        }
        printf("%d ",i);

    }
   }
}
 return 0;

}
