#include<iostream>
using namespace std;

int main()
{   
  
   int arm , engine , battery , numble , pedestal = 2 , pathlength = 10 ;                         //����һ������ 0~9 ��ֻ��1~9  ����1000-729���� Ĭ��Ϊ�㣬 
   double velocity_1 , velocity_2 ,  mass_1 , mass_2 , time_1 , time_2 , time[10][10][10] ={0};  //���������±�Ͳ��ô�0��ʼ�� �����±꼴��arm ,engine, battery. 
   for(arm = 1 ; arm <= 9 ; arm++ )
    {
		if(20%(arm * 2) == 0)
		 numble = 20 / (arm * 2);
		 else numble = 20 / (arm * 2) + 1;
		for(engine = 1 ; engine <= 9 ; engine++ ) 
			for( battery = 1 ; battery <= 9 ; battery++)
			{ 
			  cout<<"arm="<<arm<<"  "<<"engine="<<engine<<"  "<<"battery="<<battery<<"  ";
			  mass_1 = pedestal + arm + engine + 0.5*battery  ;                                                       // ������ȥ�û���·�ϵ����� 
			  mass_2 = pedestal + arm + engine + 0.5*battery  + 2*arm ;                                               //  �����˻�����·�ϵ�������
			  velocity_1 = 3*engine - 0.5*mass_1;                                                                    // ������ȥ�û���·�ϵ��ٶ� 
			  velocity_2 = 3*engine - 0.5*mass_2;                                                                   //�������ڻ�����·�ϵ��ٶ�
			if(velocity_1>0&&velocity_2>0){
			  	 time_1 = numble * (pathlength/velocity_1 + 2) ;                                                   //��������ȥ�û�·�Ϻ��û���ʱ�� 
			  	 time_2 = numble * (pathlength/velocity_2);                                                       // �����˻�����·�ϵ�ʱ�� 
			  	 if(3 * battery >= time_1+time_2){
			  		time[arm][engine][battery] = time_1 + time_2;
			  		 if(time[arm][engine][battery]>0){
			  		 	cout<<"time="<<time[arm][engine][battery]<<endl;
					   }
			  			
					  
			  		
			  	}
			  	else
			    	cout<<"\n";
			    }
			else 
				 cout<<"\n";
		
			
		    }
     }
  //�������ô��޷����бȽ� ѡ����Сֵ 
    int  a , b , c;
     for(arm = 1 ; arm <= 9 ; arm++ ) 
       	for(engine = 1 ; engine <= 9 ; engine++ )
       		for( battery = 1 ; battery <= 9 ; battery++)
       			 if(time[arm][engine][battery]>0)
					{                                                                                //�˹���Ϊѡȡ��һ������0��time���ں���ıȽ� 
       			 	  a = arm ; b = engine  ; c =  battery  ;
       			 	  
					}
					
     for(arm = 1 ; arm <= 9 ; arm++ ) 
       	for(engine = 1 ; engine <= 9 ; engine++ )
       		for( battery = 1 ; battery <= 9 ; battery++)                                             
			   if(time[arm][engine][battery]>0&&time[a][b][c]>time[arm][engine][battery])
			   {                                                                                     //�˹���Ϊѭ��ɸѡ����Сֵ 
			   	  	a = arm ; b = engine  ; c = battery  ;		   	  	 
					  
			   }  			 
			   
      cout<<"Best robot��"<<"arm="<<a<<"  "<<"engine="<<b<<"  "<<"battery="<<c<<"  "<<"finished at time="<<time[a][b][c]<<endl; 
     system("pause");
    return 0;
 } 
