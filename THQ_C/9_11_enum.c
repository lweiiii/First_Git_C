//�����ܣ��ڴ�����5����ɫ�������ɣ���ÿ��ȡ�����ǲ�ͬ��ɫ��ȡ��

#include <stdio.h>
main()
{
    enum color {red,yellow,blue,white,black};
    enum color i,j,k,pri;int n,loop;
    n=0;

    for(i=red;i<=black;i++)
        for(j=red;j<=black;j++)
        if(i!=j)
        {
            for(k=red;k<=black;k++)
            {
                if((k!=i)&&(k!=j))
                {
                    n=n+1;
                    printf("%-4d",n);
                    for(loop=1;loop<=3;loop++)
                    {
                        switch(loop)
                            {
                                case 1:pri=i;break;
                                case 2:pri=j;break;
                                case 3:pri=k;break;
                                default:break;
                            }
                        switch(pri)
                            {
                                case red:printf("%-10s","red");break;
                                case yellow:printf("%-10s","yellow");break;
                                case blue:printf("%-10s","blue");break;
                                case white:printf("%-10s","white");break;
                                case black:printf("%-10s","black");break;
                            }
                    }
                }
            printf("\n");
            }
        }
        printf("\ntotal:% 5d\n",n);
}

/*
֪ʶ�عˣ�
 ��ʵ��Ӧ���У��еı���ֻ�м��ֿ���ȡֵ�����˵��Ա�ֻ�����ֿ���ȡֵ������ֻ�����ֿ���ȡֵ���� C �����ж�����ȡֵ�Ƚ�����ı������Զ���Ϊö�����͡���νö����ָ��������ֵһһ�оٳ���������ֻ�����оٳ�����ֵ�ķ�Χ��ȡֵ��
����һ��������ö�����ͣ������ȶ���һ��ö����������Ȼ����˵����������Ǹ�ö�����͡�

���磺
enum weekday{sun,mon,tue,wed,thu,fri,sat}��
������һ��ö�������� enum weekday��Ȼ�������Ϊ��ö�����͡����磺
enum weekday day��
��Ȼ��Ҳ����ֱ�Ӷ���ö�����ͱ��������磺
enum weekday{sun,mon,tue,wed,thu,fri,sat} day��
���У�sum,mon,��,sat �ȳ�Ϊö��Ԫ�ػ�ö�ٳ������������û�����ı�ʶ����
��Ҫ˵���������¼��㡣
�� ö��Ԫ�ز��Ǳ��������ǳ��������ö��Ԫ���ֳ�Ϊö�ٳ�������Ϊ�ǳ��������Բ��ܶ�ö��Ԫ�ؽ��и�ֵ��
�� ö��Ԫ����Ϊ��������������ֵ�ģ�C �����ڱ���ʱ�������˳��ʹ���ǵ�ֵΪ,1,2,����
�������˵���У�sun ��ֵΪ 0��mon ��ֵΪ 1����sat ��ֵΪ 6������и�ֵ���
day=mon��
�� day ������ֵΪ 1����Ȼ���������ֵ�ǿ�������ġ����磺
printf ("%d",day)��
��������� 1��
����ڶ���ö������ʱָ��Ԫ�ص�ֵ��Ҳ���Ըı�ö��Ԫ�ص�ֵ�����磺
enum weekday{sun=7,mon=1,tue,wed,thu,fri,sat}day��
��ʱ��sun Ϊ 7��mon Ϊ 1���Ժ�Ԫ��˳�μ� 1������ sat ���� 6 �ˡ�
�� ö��ֵ�����������жϡ����磺
if (day==mon) {��}
if (day>mon) {��}
ö��ֵ�ıȽϹ����ǣ�������˵��ʱ��˳��űȽϣ����˵��ʱû����Ϊָ�������һ��ö��Ԫ�ص�ֵ���� 0�����磬mon>sun��sat>fri��
�� һ����������ֱ�Ӹ���һ��ö�ٱ���������ǿ�ƽ�������ת�����ܸ�ֵ�����磺
day=(enum weekday)2��
�����ֵ����˼�ǣ���˳���Ϊ 2 ��ö��Ԫ�ظ��� day���൱��workday=tue��
*/
