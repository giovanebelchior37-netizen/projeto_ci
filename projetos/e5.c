int main(){
    int media;
    int freq;

    printf("Digite sua media");
    scanf('%f', &media);
    
    printf("Digite sua freq");
    scanf('%f', &freq);

    if(media > 6 && freq >= 75){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
}
