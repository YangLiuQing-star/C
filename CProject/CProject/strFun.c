//#include <stdio.h>
//#include <string.h> // ͷ�ļ��������ַ�����ص�ϵͳ����
//
//void main() {
//
//	char src[50] = "abcdefg", dest[50]; //ʹ���ַ������ʾ�����ַ�����(�ַ���) , ��СΪ50
//	char *str = "abcdff";//�ַ����͵�ָ������ʾ�ַ���
//	printf("str.len=%d", strlen(str)); //ͳ���ַ����Ĵ�С3
//	
//	//��ʾ�� "hello" ������ src
//	//ע�⣬�����ַ����Ὣԭ�������ݸ���
//	strcpy(src,"hello");//str = "hello"
//	printf("\nsrc=%s\n", src); //hello 
//
//	strcpy(dest, "�й��");//dest = "�й��"
//	//strcat �ǽ� src �ַ������������ӵ� dest ,���ǲ��Ḳ��destԭ�������ݣ���������!! 
//	strcat(dest, src); // "hello�� ���"
//	printf("���յ�Ŀ���ַ����� dest=%s", dest);
//	getchar();
//
//}