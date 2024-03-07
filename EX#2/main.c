#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*fp;
    int i=0;
    int a[3]={0,1,2};
    int arr_read1[3];
    char b[3]="ABC";
    char arr_read2[3];
    float c[3]={1.1,1.2,1.3};
    float arr_read3[3];
    fp=fopen("a.bin","wb+");
    fwrite(a,sizeof(a),1,fp);
    fwrite(b,sizeof(b),1,fp);
    fwrite(c,sizeof(c),1,fp);
    fseek(fp,0,SEEK_SET);
    for(i=0;i<3;i++){
        fread(arr_read1,sizeof(a),1,fp);
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=0;i<3;i++){
        fread(arr_read2,sizeof(b),1,fp);
        printf("%c",b[i]);
    }
    printf("\n");
    for(i=0;i<3;i++){
        fread(arr_read3,sizeof(c),1,fp);
        printf("%f ",c[i]);
    }
    
    return 0;
}
