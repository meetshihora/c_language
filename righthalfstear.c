void main()
{
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                if(j<=i){
                     printf("*");
                }else{
                    printf(" ");
                }
        }
        printf("\n");
    }

getch();
}
