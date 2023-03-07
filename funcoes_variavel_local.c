// funcoes_variavel_local.c
#include <stdio.h>

/*

// variável global.
// não é necessário colocar variáveis 
//locais.

char x[50];
int y;

    */

void genesis1();

int main(){
    char x[50];
    int y;
    
    printf("Digite o livro: ");
    scanf("%s",&x);
    
    printf("Digite o capítulo: ");
    scanf("%d",&y);
    
    genesis(x,y);
    
    
    /*
    
    "
    \n\n"
    
    */
    return 0;
}



void genesis(char x[50],int y){
    
    if( !strcmp(x,"genesis") ||
        !strcmp(x,"genesi") ||
        !strcmp(x,"genes") ||
        !strcmp(x,"gene") ||
        !strcmp(x,"gen") ||
        !strcmp(x,"ge") ||
        !strcmp(x,"g") ||
        !strcmp(x,toupper("genesis")) ||
        !strcmp(x,toupper("genesi")) ||
        !strcmp(x,toupper("genes")) ||
        !strcmp(x,toupper("gene")) ||
        !strcmp(x,toupper("gen")) ||
        !strcmp(x,toupper("ge")) ||
        !strcmp(x,toupper("g")) ||
        !strcmp(x,"gênesis") ||
        !strcmp(x,"gênesi") ||
        !strcmp(x,"gênes") ||
        !strcmp(x,"gêne") ||
        !strcmp(x,"gên") ||
        !strcmp(x,"gê") ||
        !strcmp(x,"g") ||
        !strcmp(x,toupper("gênesis")) ||
        !strcmp(x,toupper("gênesi")) ||
        !strcmp(x,toupper("gênes")) ||
        !strcmp(x,toupper("gêne")) ||
        !strcmp(x,toupper("gên")) ||
        !strcmp(x,toupper("gê")) ||
        !strcmp(x,toupper("g")) 
        ){
        
            if(y==1){genesis1();}
            
     }
}
        
void genesis1(){

    printf( 
    
    "\n\nGênesis 1\n\n"
    
    "1 No princípio criou Deus o céu e a terra.\n\n"
    "2 E a terra era sem forma e vazia; e havia trevas sobre a face do abismo; e o Espírito de Deus se movia sobre a face das águas.\n\n"
    "3 E disse Deus: Haja luz; e houve luz.\n\n"
    "4 E viu Deus que era boa a luz; e fez Deus separação entre a luz e as trevas.\n\n"
    "5 E Deus chamou à luz Dia; e às trevas chamou Noite. E foi a tarde e a manhã, o dia primeiro.\n\n"
    "6 E disse Deus: Haja uma expansão no meio das águas, e haja separação entre águas e águas.\n\n"
    "7 E fez Deus a expansão, e fez separação entre as águas que estavam debaixo da expansão e as águas que estavam sobre a expansão; e assim foi.\n\n"
    "8 E chamou Deus à expansão Céus, e foi a tarde e a manhã, o dia segundo.\n\n"
    "9 E disse Deus: Ajuntem-se as águas debaixo dos céus num lugar; e apareça a porção seca; e assim foi.\n\n"
    "10 E chamou Deus à porção seca Terra; e ao ajuntamento das águas chamou Mares; e viu Deus que era bom.\n\n"
    "11 E disse Deus: Produza a terra erva verde, erva que dê semente, árvore frutífera que dê fruto segundo a sua espécie, cuja semente está nela sobre a terra; e assim foi.\n\n"
    "12 E a terra produziu erva, erva dando semente conforme a sua espécie, e a árvore frutífera, cuja semente está nela conforme a sua espécie; e viu Deus que era bom.\n\n"
    "13 E foi a tarde e a manhã, o dia terceiro.\n\n"
    "14 E disse Deus: Haja luminares na expansão dos céus, para haver separação entre o dia e a noite; e sejam eles para sinais e para tempos determinados e para dias e anos.\n\n"
    "15 E sejam para luminares na expansão dos céus, para iluminar a terra; e assim foi.\n\n"
    "16 E fez Deus os dois grandes luminares: o luminar maior para governar o dia, e o luminar menor para governar a noite; e fez as estrelas.\n\n"
    "17 E Deus os pôs na expansão dos céus para iluminar a terra,\n\n"
    "18 E para governar o dia e a noite, e para fazer separação entre a luz e as trevas; e viu Deus que era bom.\n\n"
    "19 E foi a tarde e a manhã, o dia quarto.\n\n"
    "20 E disse Deus: Produzam as águas abundantemente répteis de alma vivente; e voem as aves sobre a face da expansão dos céus.\n\n"
    "21 E Deus criou as grandes baleias, e todo o réptil de alma vivente que as águas abundantemente produziram conforme as suas espécies; e toda a ave de asas conforme a sua espécie; e viu Deus que era bom.\n\n"
    "22 E Deus os abençoou, dizendo: Frutificai e multiplicai-vos, e enchei as águas nos mares; e as aves se multipliquem na terra.\n\n"
    "23 E foi a tarde e a manhã, o dia quinto.\n\n"
    "24 E disse Deus: Produza a terra alma vivente conforme a sua espécie; gado, e répteis e feras da terra conforme a sua espécie; e assim foi.\n\n"
    "25 E fez Deus as feras da terra conforme a sua espécie, e o gado conforme a sua espécie, e todo o réptil da terra conforme a sua espécie; e viu Deus que era bom.\n\n"
    "26 E disse Deus: Façamos o homem à nossa imagem, conforme a nossa semelhança; e domine sobre os peixes do mar, e sobre as aves dos céus, e sobre o gado, e sobre toda a terra, e sobre todo o réptil que se move sobre a terra."
    "27 E criou Deus o homem à sua imagem; à imagem de Deus o criou; homem e mulher os criou.\n\n"
    "28 E Deus os abençoou, e Deus lhes disse: Frutificai e multiplicai-vos, e enchei a terra, e sujeitai-a; e dominai sobre os peixes do mar e sobre as aves dos céus, e sobre todo o animal que se move sobre a terra.\n\n"
    "29 E disse Deus: Eis que vos tenho dado toda a erva que dê semente, que está sobre a face de toda a terra; e toda a árvore, em que há fruto que dê semente, ser-vos-á para mantimento.\n\n"
    "30 E a todo o animal da terra, e a toda a ave dos céus, e a todo o réptil da terra, em que há alma vivente, toda a erva verde será para mantimento; e assim foi.\n\n"
    "31 E viu Deus tudo quanto tinha feito, e eis que era muito bom; e foi a tarde e a manhã, o dia sexto.\n\n"
    
    );

}