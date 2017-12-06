# robort 运输问题证明

### 1.定义各种变量，基本公式以及不变常量的值



```c++
int arm,engine,bat;//机械臂个数，发动机个数，电池个数，
    float t,t1,min,getm,Getm;//供电时间，第一次拿货物需要的时间，运输总时间，每次最多可拿的物重/第一次拿到的物重,共计已经拿到的货物；
    float M,m,vm,vM,s,p,tm;//分别：机器人加上货物总重量,机器人的重量，不装货物时的运输速度，装了货物的运输速度，运输总路程，动力总值,最优时间
    int ar,en,ba;//题目最优解对应的三个器件的数量
    tm=27;
    s=10;
```

```c++
// s=10;
// m=arm*1+engine*1+bat*0.5+2;///Users/jiayusong/Documents/robort/main.cpp
//M=arm*(1+2)+engine*1+bat*0.5+2;
//getm=arm*2;
// p=3*engine;
//vm=p-0.5*m;
//vM=p-0.5*M;
// t=bat*3
```

---



###2.需要如下三个for循环

* 以便接下来列出全部*      **729**    *种情况下的配置方案*

​       *依次叠加直至各器械最大值*    **9**

```c++
for( arm=1; arm<=9; arm++)
    {
        for( engine=1; engine<=9; engine++)
        {
            for( bat=1; bat<=9; bat++)
            {
```

---



### 3.分类计算



**在保证运输全过程中速度始终大于0对情况下，分为两种情况***

##### 3.1[供电时间不足]

*则输出如下*

```c++
{
                        cout << "Testing robot:" << ' ';
                        cout << arm << ' ' << "arm,";
                        cout << engine << ' ' << "engine,";
                        cout << bat << ' ' << "battery,";
                        cout << ' ' << "can't finish" << endl;
                    }
```

##### 3.2  [供电时间充足]

* 以下为将第一次运输的时间赋给总时间

  ```c++
   t1=2+s/vm+s/ vM;//第一次的来回所用时间
   min=t1;
  ```

  ​

* 则在本次循环中计算出每种符合vM>0情况下完成任务总时间

```c++
for(;Getm<=20;)//计算完成任务总时间
                    {
                        min=t1+min;
                        Getm=getm+Getm;//第一次的来回所获得的货重加入总时间，累加
                        
                    }
```

---



#####4.else

*当不符合if条件时[即vM<=0 or min>t]，则输出“can't finish”如下*

```c++
 else //否则输出无法完成任务
                    {
                        cout << "Testing robot:" << ' ';
                        cout << arm << ' ' << "arm,";
                        cout << engine << ' ' << "engine,";
                        cout << bat << ' ' << "battery,";
                        cout << ' ' << "can't finish" << endl;
                    }
```

 

---



#####5.最优解

* 时间小于之前的最小值，这个最小值的变量设置一个很大的初值，然后小于以后，不断更替这个变量单独设置一组参数，不断比较，然后存储最优解，最后输出最优解ar, en, ba, tm.   







#                                                        			完



