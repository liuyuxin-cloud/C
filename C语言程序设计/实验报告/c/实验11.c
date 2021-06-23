#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* matProduct(int *a,int *b,int rowa,int cola,int rowb,int colb)
{  //p表示矩阵乘法结果的一维结构，arow表示矩阵a的一行，bcol表示矩阵b的一列
    int *p, *arow, *bcol;
	int k,i,j; 
	int temp = 0;
       //1）判断输入数据的合法性（2个矩阵是否能够相乘？）
       //2）分别给p、 arow和bcol动态分配相应的内存空间
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
         //       3）将矩阵a的第i行存入arow中
        for(k=0 ; k<cola ; k++){
        	*(arow+k) = *(a+i*cola+k);
		}
		for(j=0 ; j<colb ; j++){
			temp = 0;
			for(k=0 ; k< rowb ; k++){
				*(bcol+k) = *(b+k*colb+j);
			}
           //          4）将矩阵b的第j列存入bcol中
             //        5）arow和bcol点乘存入p的相应位置中
            for(k = 0 ; k < cola ; k++){
            	temp += *(arow+k) * *(bcol+k);
			}
            *(p+i*colb+j) = temp;
        }
    }
    free(arow);
    free(bcol);
	    //6）释放arow和bcol
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

