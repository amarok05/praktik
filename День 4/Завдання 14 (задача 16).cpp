#include <iostream>
using namespace std;
int main(){
int a[50],k=0,i,j;
for (j=2; j<=10; ++j){         //����� ������� ����� �� 10
if (!(j>3 && (j%2==0 || j%3==0))){
a[k]=j;
k++;
}
}
for (i=10; i<=200; ++i){        //����� ������� ����� ����� 10
if (!(i%2==0 || i%3==0 || i%5==0 || i%7==0)){
a[k]=i;
k++;
}
}
for (i=0; i<50; ++i){           //�������� ������� �����
if(a[i+1]-a[i]==2) 
cout<<a[i]<<" "<<a[i+1]<<" ; "; //���� ��,�������
}
cout<<"\n";
system("pause");
return 0;
}

