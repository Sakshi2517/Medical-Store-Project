//count space tab line
#include<stdio.h>
int main()
{
    int ch,space=0,character=0,tab=0,number=0,line=0;
    FILE *file;
    file = fopen("file.txt","r");
    if(file==NULL){
        printf("File cannot be open");
    }
    else{
        while((ch=fgetc(file))!=EOF){
            character++;
            if(ch==' '){
                space++;
            }
            if(ch=='\n'){
                line++;
            }
            if(ch=='\t'){
                tab++;
            }
        }
    }
    printf("space =%d, words =%d,line =%d, tab =%d",space,character,line,tab);
    return 0;
}