
#include <stdio.h>
#include <string.h>
//int main(int argc, const char * argv[]) {
//    �������ĺ�
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    scanf("%d%d",&num1,&num2);
//    sum = num1 + num2;
//    printf("sum = %d\n",sum);
//    return 0;
//}

//int main(){
//    const int num = 4;
//    //��ʱ��num��const���εĳ�����
//    printf("%d\n", num);
//    return 0;
//}

//enum Sex{
//    male,
//    female,
//    secret
//};
//male��female��secret-ö�ٳ���
//int main(){
//    enum Sex s = female;
//    s = male; //s = 6; //error,
//    printf("%d\n",s);
//    printf("%d\n", male);  //0
//    printf("%d\n",female); //1
//    printf("%d\n",secret); //2
//    return 0;
//}

//�ַ�������
//int main(){
//    "abcdefg";
//    "holle world";
//    "";//���ַ���
//    return 0;
//}

//�öδ���ʵ�ִ���
//int main()
//{
//    char arr1[] = "abc";//���顣 ��abc��-'a', 'b', 'c', '0\'---��\0���ַ����Ľ�����־
//    char arr2[] = {'a', 'b', 'c'};//����0���ߡ�\0����Ľ����arr1һ��
//    printf("%s\n",arr1);//%c���ַ���%s���ַ���
//    printf("%s\n", arr2);//��%s�ַ������ʹ�ӡ��ĩβû�С�\0������˻�������ֵ
//    printf("%d\n", strlen(arr1));//strlen--string length-���ڼ����ַ������ȵ�
//    printf("%d\n", strlen(arr2));
//    return 0;
//}

//int main(){
//    printf("c:\\test\\test.c\n");//����\����ת�壬��ֹ����Ϊ\t��ˮƽ�Ʊ��
//    printf("%c\n", '\'');//��������м�ġ�����ת�壬ǰ��һ�Ե����Żᱻ��Ϊ������ַ������һ���������䵥����˻ᱨ��
//    printf("%s\n","\"");
//    return 0;
//}

//int main(){
//    printf("%d\n",strlen("c:\test\32\test.c"));
//    printf("%c\n",'\x61');//ʮ����97��ASCII��ֵΪ'a'
//    return 0;
//}

//ѡ�����
//int main(){
//    int input = 0;
//    printf("���ȥ�ô����𣿣�ѡ��0����1����>");
//    scanf("%d", &input);//���ʣ�Ϊʲôû��\n���У����ǽ��ȴ����һ�п�ʼ
//    if (input == 0) {
//        printf("��֣�����к�offer\n");
//    }
//    else{
//        printf("�������ؼ�������\n");
//    }
//    return 0;
//}

//whileѭ�����
//int main(){
//    printf("�������\n");
//    int line = 0;
//    while (line<=20000) {
//        printf("��Ҫ����Ŭ����line��%d\n", line);
//        line++;
//    }
//    if (line>=20000) {
//        printf("��offer\n");
//    }
//    return 0;
//}

//�������Զ��庯�����⺯��
//int Add(int x, int y){
//    int z = x + y;
//    return z;
//}
//int main(int argc, const char * argv[]) {
////    �������ĺ�
//    int num1 = 11;
//    int num2 = 24;
//    int sum = 0;
//    //sum = num1 + num2;
//    sum = Add(num1, num2);//���Զ��庯���滻�����һ��
//    printf("sum = %d\n",sum);
//    return 0;
//}

//����
//int main(){
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n", arr[4]);//�±����Ԫ��
//    int i = 0;
//    while (i<10) {
//        printf("%d\n", arr[i]);
//        i++;//�Ӷϵ�
//    }
//    return 0;
//}

//���������� + - * / %
//int main(){
//    int a = 5/2;//����
//    int b = 5%2;//ȡģ
//    printf("%d %d\n",a,b);
//    return 0;
//}

//�ƣ������ƣ�λ������
//int main(){
//    int a = 1;
//    int b = a<<1;
//    int c = a<<2;
//    printf("%d\n",a);
//    printf("%d\n",b);
//    printf("%d\n",c);
//    return 0;
//}

//�������ƣ�λ������
//int main(){
//    int a = 3;
//    int b = 5;
//    int c = a&b;
//    int d = a|b;
//    int e = a^b;
//    printf("%d\n%d\n%d\n", c, d, e);
//    return 0;
//}

//��Ŀ������
//int main(){
//    int a = 10;
//    printf("%d\n",!a);
//    int b = 0;
//    printf("%d\n", !b);//�߼�������
//    //������������ʹ�С
//    int arr[10] = {0};//10������Ԫ�ص�����
//    printf("%d\n",sizeof(arr));//10*sizeof��int��=40
//    //����Ԫ������ĸ���
//    int sz = 0;
//    sz = sizeof(arr)/sizeof(arr[0]);
//    printf("sz = %d\n",sz);
//    return 0;
//}

//дһ�����������������Ľϴ�ֵ
//int MAX(int x, int y) {
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//int main() {
//    int num1 = 10;
//    int num2 = 20;
//    int max = MAX(num1, num2);
//    printf("�ϴ�ֵ�ǣ�%d\n", max);
//    return  0;
//}

//int main() {
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//���sizeof����Ǳ����Ĵ�Сʱ������ʡ������
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//����������ĵ�λ����
//	return 0;
//}

//int main() {
//	int a = 0;
//	int b = ~a;//~�ǰ��������ƣ�λȡ����b���з��ŵ����ͣ��洢�з��ŵ����ǣ���һλ�Ƿ���λ
//	//ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//0000000000000000000
//	//1111111111111111111
//	//1111111111111111110
//	//1000000000000000001
//	printf("%d\n", b);//ʹ�õģ���ӡ����b��ԭ��
//	return 0;
//}

//int main() {
//	int a = 10;
//	//int b = a++;//����++����ʹ��a���ٽ���++ 10��11
//	//int b = ++a;//ǰ��++����++����ʹ�� 11��11
//	//int b = a--;//����--����ʹ��a����-- 9��10
//	//int b = --a;//ǰ��--����--����ʹ�� 9��9
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//�����ͣ� ǿ������ת��
//int main() {
//	int a = (int)3.14;
//	return 0;
//}

//�߼�������&&��||
//int main() {
//	//��--��0
//	//��--0
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}

//������������exp1 �� exp2 ��exp3�����exp1Ϊ�棬���exp2�����exp1Ϊ�٣����exp3
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}

//static��̬����
//void test() {
//	static int a = 1;//��̬�ľֲ�������ÿ���˳�test����������a������ʧ���ǻ��ۼ�
//	a++;
//	printf("%d\n", a);
//}
//int main() {
//	int i = 0;
//	while (i < 5) {
//		test();//�������a����static��ÿ���˳�testʱ��a����ʧ
//		i++;
//	}
//	return 0;
//}
//static����ȫ�ֱ������ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ����
//int main() {
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//static���κ����ı��˺������������ԣ��ⲿ��������->�ڲ���������
//extern int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//define�����--������
//#define MAX(X, Y) (X>Y?X:Y)
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main() {
//	int a = 10;
//	int* p = &a;//ȡ��ַ
//	printf("%p\n", p);//%p���ڴ�ӡ��ַ
//	printf("%p\n", &a);
//	//int*���ֱ�����������ŵ�ַ��--ָ�����
//	return 0;
//}

//int main() {
//	char ch = 'w';
//	char* p = &ch;//p��һ������-ָ�����
//	*p = 'a';//*-�����ò�����/��ӷ��ʲ�����
//	printf("%c\n", ch);
//	printf("%c\n", *p);//�����*p����ch
//	printf("%d\n", sizeof(p));//��ַp��ռ�ռ���4���ֽ�
//	return 0;
//}

//�ṹ��-�����������Ӷ���-��һ�������Լ��������������
struct Book {
	char name[20];//C���Գ������
	short price;//55
};
int main() {
	struct Book b1 = { "C���Գ������", 55 };
	//���ýṹ������-����һ�������͵Ľṹ�������������Ϊ b1
	//struct Book* pb = &b1;
	strcpy(b1.name, "C++"); //strcpy-string copy-�ַ�������,�ѡ�C++��������Ŀ�ĵ� b1.name
	//strcpy��Ҫ����#include <string.h>
	printf("%s\n", b1.name);
	//b1.name = "C++";//�����У���Ϊname�����飬���鱾������һ���ַ
	b1.price = 15;
	//. �ṹ�����.��Ա
	//printf("%s\n", (*pb).name);//����pb��ӡ�����ͼ۸�
	//printf("%d\n", (*pb).price);
	//-> �ṹ��ָ��->��Ա
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("������%s\n", b1.name);
	//printf("�۸�%dԪ\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	//return 0;
}