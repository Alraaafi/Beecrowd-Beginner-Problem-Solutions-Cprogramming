int main()
{
    int i,x,n1,n2,n3;
   scanf("%d",&x);
   for(i=1;   i<=x;   i++){
        n1 = i;
        n2 = i*i;
        n3 = i*i*i;
     printf("%d %d %d\n",n1,n2,n3);
     printf("%d %d %d\n",n1,n2+1,n3+1);
}
 return 0;
}
