#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//���ļ�test.txt
//	
//	//���·��
//	// .. ��ʾ��һ·��
//	// . ��ʾ��ǰ·��
//	//fopen("test.txt", "r");
//	//fopen("../../text.txt", "r");
//
//	//����·����Ҫ��'\'����ת��
//	//fopen("C:\\MyTest\\c-code\\�ļ�\\�ļ�\\test.txt", "r");
//	
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <string.h>
//#include <errno.h>
//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pfRead));//b
//	printf("%c", fgetc(pfRead));//i
//	printf("%c", fgetc(pfRead));//t
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//}

//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸
//
//���� - ��׼�����豸
//��Ļ - ������豸
//��һ������Ĭ�ϴ򿪵��������豸
//
//����һ���У��ʹ�������
//stdin FILE*
//stdout FILE*
//stderr FILE*

//int main()
//{
//	printf("������һ���ַ�:>");
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


#include <string.h>
#include <errno.h>
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	//fputc('b', pf);
//	//fputc('i', pf);
//	//fputc('t', pf);
//	
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ı���
//	fgets(buf, 1024, pf);//��ȡ��ʱ�������'\n'Ҳ�´����ȥ
//	puts(buf);
//	//printf("%s", buf);
//
//	fgets(buf, 1024, pf);
//	puts(buf);
//	//printf("%s\n", buf);
//
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ı���
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//}

//int main()
//{
//	
//	char buf[1024] = { 0 };
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	//fgets(buf, 1024, stdin);// �ӱ�׼��������ȡ
//	//fputs(buf, stdout);//�������׼������
//
//	//�ȼ�������Ĵ���
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};

//int main()
//{
//	struct S s = { 100, 3.14, "bit" };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	//fprintf(pf, "%d, %f, %s", s.n, s.score, s.arr);
//
//	//��ʽ������������
//	//fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	//printf("%d %f %s", s.n, s.score, s.arr);
//
//	//�Ӽ��̶�ȡ
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d, %f, %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100, 3.14f, "hello" };
//	struct S tmp = { 0 };
//	char buf[1024];
//
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	printf("%s\n", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "����", 20, 55.6 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	//fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//�����Ƶ���ʽ��ȡ�ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, -2, SEEK_END);
//	
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	//printf("%c\n", ch);
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//EOF
//	//feof();//EOF - end of file - �ļ�������־
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n", strerror(errno));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (!pf)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test2.txt", "r");
//	if (!pf)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//���ļ�
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror)
//	{
//		printf("error\n");
//	}
//	else if (feof)
//	{
//		printf("end of file\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

enum 
{
	SIZE = 5
}; 
int main() 
{

	double a[SIZE] = { 1.,2.,3.,4.,5. };
	FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ 
	fwrite(a, sizeof *a, SIZE, fp); // д double ������ fclose(fp);

	double b[SIZE];
	fp = fopen("test.bin", "rb");
	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // �� double ������ 
	if(ret_code == SIZE) 
	{ 
		puts("Array read successfully, contents: ");
		for (int n = 0; n < SIZE; ++n)
		{
			printf("%f ", b[n]);
		}
		putchar('\n');
	}
	 else 
	{ 
		// error handling 
		if (feof(fp))
		{
			printf("Error reading test.bin: unexpected end of file\n");
		}
		else if (ferror(fp)) 
		{
			perror("Error reading test.bin"); 
		}

	}
	fclose(fp);
	fp = NULL;

	return 0;
}

typedef struct
{
	int a;//4
	char b;//1
	short c;//2
	short d;//2
}AA_t;//�ܴ�С��12