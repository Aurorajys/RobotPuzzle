# robort运输问题证明

### 1.定义各种变量，基本公式以及不变常量的值

###![屏幕快照 2017-12-05 下午9.25.01](/Users/jiayusong/Desktop/屏幕快照 2017-12-05 下午9.25.01.png)

![屏幕快照 2017-12-05 下午9.26.01](/Users/jiayusong/Desktop/屏幕快照 2017-12-05 下午9.26.01.png)





###2.需要如下三个for循环

*以便接下来列出全部*      **729**    *种情况下的配置方案*

*依次叠加直至各器械最大值*    **9**



![屏幕快照 2017-12-05 下午9.15.37](/Users/jiayusong/Desktop/屏幕快照 2017-12-05 下午9.15.37.png)

## 3.分类计算

*在保证运输全过程中速度始终大于0对情况下，分为两种情况*

#### 3.1 [供电时间不足]

*则输出如下*

![屏幕快照 2017-12-05 下午9.49.46](/Users/jiayusong/Desktop/屏幕快照 2017-12-05 下午9.49.46.png)

### 3.2  [供电时间充足]



以下为将第一次运输的时间赋给总时间

![屏幕快照 2017-12-05 下午10.00.54](/Users/jiayusong/Desktop/屏幕快照 2017-12-05 下午10.00.54.png)

则在本次循环中计算出每种符合vM>0情况下完成任务总时间![屏幕快照 2017-12-05 下午9.57.11](/Users/jiayusong/Desktop/屏幕快照 2017-12-05 下午9.57.11.png)



### 4.else

*当不符合if条件时[vM<=0 or min>t]，则输出“can't finish”如下*

![屏幕快照 2017-12-05 下午10.08.01](/Users/jiayusong/Desktop/屏幕快照 2017-12-05 下午10.08.01.png)

### 5.最优解

时间小于之前的最小值，这个最小值的变量设置一个很大的初值，然后小于以后，不断更替这个变量单独设置一组参数，不断比较，然后存储最优解，最后输出最优解ar, en, ba, tm.





#                                                                        完





