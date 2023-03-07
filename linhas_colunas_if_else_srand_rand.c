// linhas_colunas_if_else_srand_rand.c
#include <stdio.h>
#include <time.h>

int main(){

    int i,j,x[5][7];
    int coluna1=0,coluna2=0,coluna3=0;
    int coluna4=0,coluna5=0,coluna6=0;
    int coluna7=0;
    int linha1=0,linha2=0,linha3=0;
    int linha4=0,linha5=0;
    
    srand(time(NULL));
    
    for(i=0;i<5;i++){
        for(j=0;j<7;j++){
            x[i][j]=rand()%1000;
            printf("%3d  ",x[i][j]);
            
            if(i==0)
                linha1+=x[0][j];
            else if(i==1)
                linha2+=x[1][j];
            else if(i==2)
                linha3+=x[2][j];
            else if(i==3)
                linha4+=x[3][j];
            else 
                linha5+=x[4][j];
            
            if(j==0)
                coluna1+=x[i][0];
            else if(j==1)
                coluna2+=x[i][1];
            else if(j==2)
                coluna3+=x[i][2];
            else if(j==3)
                coluna4+=x[i][3];
            else if(j==4)
                coluna5+=x[i][4];
            else if(j==5)
                coluna6+=x[i][5];
            else
                coluna7+=x[i][6];
            
        }
        printf("\n");
    }
    
    printf("\n\nLinha 1: %d\n",linha1);
    printf("\nLinha 2: %d\n",linha2);
    printf("\nLinha 3: %d\n",linha3);
    printf("\nLinha 4: %d\n",linha4);
    printf("\nLinha 5: %d\n",linha5);
    
    printf("\n\nColuna 1: %d\n",coluna1);
    printf("\nColuna 2: %d\n",coluna2);
    printf("\nColuna 3: %d\n",coluna3);
    printf("\nColuna 4: %d\n",coluna4);
    printf("\nColuna 5: %d\n",coluna5);
    printf("\nColuna 6: %d\n",coluna6);
    printf("\nColuna 7: %d\n",coluna7);
    
    return 0;
}