#include<iostream>
#define base 1
using namespace std;
int main()
{
    int arm, eng ,bat;                                                  //��е�� ��� �������ĸ���
    float mas, Mass, power, v1, v, s;                                   //������������ ���ϻ��������   ���� �������ٶ�   ���ϻ����ٶ�  ����
    float t1, t, M1, M ;                                                //�ֶ�ʱ�� ��ʱ��    ���ߵĻ�������     ���ߵ�����
    int mini;                                                           //����ʱ��
    float a, e, b ,n;                                                   //�洢���
    s = 10;                                                             //����
    n = 81;                                                             //ȡһ������ʱ�����ֵΪ����
    for(arm = 1;arm <= 9;arm ++)
    {
        for(eng = 1; eng <= 9; eng++)
        {
            for(bat = 1; bat <= 9; bat++)
            {
                mas = base*2 + arm*1 + eng*0.5 + bat*1;                 //�����˱��������
                Mass = base*2 + arm*3 + eng*0.5 + bat*1;                //�����˱�����ϻ��������
                M1 = arm*2;                                             //ÿ���û��������
                M = M1;                                                 //��һ���û��������
                power = bat*3;                                          //����
                mini = eng*3;                                           //�ܹ�����ʱ��
                v1 = power - 0.5*mas;                                   //ǰ���û�����ٶ�
                v = power - 0.5*Mass;                                   //�û����ȥ���ٶ�
                if(v > 0)                                               //���ٶȴ�����ʱ�ſ�������
                {
                  t1 = s/v + s/v1 + 2;                                  //����һ�ε�ʱ��
                  t = t1;                                               //��һ��������ʱ��
                  for(; M < 20;)                                        //����������С��20ʱ��ֹͣ����
                  {
                      t = t + t1;                                       //�ܹ����ѵ�ʱ��
                      M = M + M1;                                       //���ͻ����������
                  }
                  if(t <= mini)                                         //����ʱ�����С���ܹ�����ʱ��
                    {
                    cout<<"Testing robot:"<<' ';
                    cout<<arm<<' '<<"arm,";
                    cout<<eng<<' '<<"engine,";
                    cout<<bat<<' '<<"battery,"<<' ';
                    cout<<"finished at time :"<<t<<endl;
                    }
                    else
                    {
                       cout<<"Testing robot:"<<' ';
                       cout<<arm<<' '<<"arm,";
                       cout<<eng<<' '<<"engine,";
                       cout<<bat<<' '<<"battery,";
                       cout<<' '<<"can't finish"<<endl;                //�����־
                    }
                  if(t < n&&t <= mini)                                 //�洢��Сʱ���Լ�����Ĳ���
                  {
                      n = t;
                      a = arm;
                      e = eng;
                      b = bat;
                  }
                }
                else
                {
                       cout<<"Testing robot:"<<' ';
                       cout<<arm<<' '<<"arm,";
                       cout<<eng<<' '<<"engine,";
                       cout<<bat<<' '<<"battery,";
                       cout<<' '<<"can't finish"<<endl;                //���ٶ�С����ʱ����־���
                 }
           }
        }
    }
    cout<<"Best robot:"<<a<<' '<<"arm,";                               //������
    cout<<e<<' '<<"engine,";
    cout<<b<<' '<<"battery,";
    cout<<"finished at time :"<<n<<endl;
    return 0;
}
