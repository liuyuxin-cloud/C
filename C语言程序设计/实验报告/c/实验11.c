#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* matProduct(int *a,int *b,int rowa,int cola,int rowb,int colb)
{  //p��ʾ����˷������һά�ṹ��arow��ʾ����a��һ�У�bcol��ʾ����b��һ��
    int *p, *arow, *bcol;
	int k,i,j; 
	int temp = 0;
       //1���ж��������ݵĺϷ��ԣ�2�������Ƿ��ܹ���ˣ���
       //2���ֱ��p�� arow��bcol��̬������Ӧ���ڴ�ռ�
	if(cola != rowb){
    	exit(0);     	
    }
    arow = (int*)malloc(sizeof(int)*cola);
    bcol = (int*)malloc(sizeof(int)*rowb);
    p = (int*)malloc(sizeof(int)*rowa*colb);
	memset(arow,0,sizeof(int)*cola);
	memset(bcol,0,sizeof(int)*rowb);
	memset(p,0,sizeof(int)*rowa*colb);	
    for(i=0 ; i<rowa ; i++){
         //       3��������a�ĵ�i�д���arow��
        for(k=0 ; k<cola ; k++){
        	*(arow+k) = *(a+i*cola+k);
		}
		for(j=0 ; j<colb ; j++){
			temp = 0;
			for(k=0 ; k< rowb ; k++){
				*(bcol+k) = *(b+k*colb+j);
			}
           //          4��������b�ĵ�j�д���bcol��
             //        5��arow��bcol��˴���p����Ӧλ����
            for(k = 0 ; k < cola ; k++){
            	temp += *(arow+k) * *(bcol+k);
			}
            *(p+i*colb+j) = temp;
        }
    }
    free(arow);
    free(bcol);
	    //6���ͷ�arow��bcol
    return p;
}


void main(){     
	int a[2][3] = {{1,2,3},{4,5,6}};
	int b[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int (*p)[4] = (int(*)[4])matProduct((int*)a,(int*)b,2,3,3,4);
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("%d ",p[i][j]); 
		}
        printf("\n");
	}
	free(p);
}

