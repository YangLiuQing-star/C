//#include<stdio.h>
//#include<stdlib.h>
//
///*
//	ϡ�����飺����Ԫ�صĸ���ԶС��0�ĸ���
//	ϡ�������ѹ���洢
//	˼·������
//	1.����ϡ�����飬�����г�ʼ��
//	2.��ϡ���������ѹ��
//	3.��ѹ������������
//*/
//
//int arr[6][6];
//
//void main(){
//	int i,j;
//	int sum = 0;//������¼����Ԫ�صĸ���
//	int count = 3;//������¼ϡ��������±꣬��Ϊ�±�Ϊ0,1,2��Ԫ�ؿ�ֱ�Ӹ�ֵ
//	int *sparseArr;
//	FILE * fp;
//	//����ϡ�����������������
//	int row = sizeof(arr)/sizeof(arr[0]);
//	int col = sizeof(arr[0])/sizeof(int);
//	//1.��ʼ��ϡ������
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			arr[i][j] = 0;
//		}
//	}
//	arr[1][2] = 1;
//	arr[2][3] = 2;
//
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	//2.��ϡ���������ѹ������
//	//2.1 �õ�ԭʼ����������������Լ�����Ԫ�صĸ���
//	//2.2 ������ϡ������
//	//2.3 ����ԭʼ���飬������Ԫ�ص��к����Լ�ֵ��ֵ��ϡ������
//	//2.4 ��ϡ���������
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			if(arr[i][j]!=0){
//				sum++;
//			}
//		}
//	}
//
//	sparseArr = (int *) malloc(3*(sum+	1)*sizeof(int));
//	sparseArr[0]=row;
//	sparseArr[1]=col;
//	sparseArr[2]=sum;
//
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			if(arr[i][j]!=0){
//				sparseArr[count] = i;
//				sparseArr[count+1] = j;
//				sparseArr[count+2] = arr[i][j];
//				count += 3;
//			}
//		}
//	}
//
//	for(i=0;i<(sum+1)*3;i++){			
//		if(i%3==0){
//			printf("\n");
//		}
//		printf("%d\t",sparseArr[i]);
//	}
//
//	//����
//	//�����ļ�ָ��
//	fp = NULL;
//	fp = fopen("map.data","w");
//	for(i=0;i<(sum+1)*3;i++){			
//		if(i%3==0&&i!=0){
//			fprintf(fp,"%c",'\n');
//		}
//		fprintf(fp,"%d",sparseArr[i]);
//	}
//	//�ر��ļ�
//	fclose(fp);
//	//�ͷ��ڶ������ٵ��ڴ�ռ�
//	//free(arr);
//
//	printf("\nϡ��������̳ɹ�.........");
//	//printf("sum=%d\n",sum);
//	getchar();
//}