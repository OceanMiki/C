#include<stdio.h>
	typedef struct{
		char szName[20];
		double dScore[5];
	}STUDENT;
	STUDENT stus[3];
	double aver(STUDENT *q){
		int j;
		double sum;
		for(j=0;j<5;j++){
			sum=sum+q->dScore[j];}
		return sum/5.0;
	}
	double avegs(STUDENT *h,int j){
		double sum;
		 for(h=stus;h<stus+3;h++){
			 sum=sum+h->dScore[j];
		 }
		 return sum/3;
	}
	void dalao(STUDENT *k){
		int a;
		double max;
		STUDENT *m;
		max=k->dScore[0];
		for(k=stus;k<stus+3;k++){
			for(a=0;a<5;a++){
				if(max<k->dScore[a]){
					max=k->dScore[a];
					m=k;
				}
			}
		}
			printf("%s\n",m->szName);
	}
	int main(void)
	{
		STUDENT *p;
		int i,j;
		p=stus;
		for(i=0;i<3;i++){
			scanf("%s %lf %lf %lf %lf %lf",&stus[i].szName,&stus[i].dScore[0],&stus[i].dScore[1],&stus[i].dScore[2],&stus[i].dScore[3],&stus[i].dScore[4]);}
		for(p=stus;p<stus+3;p++){
			printf("%s:%.1f\n",p->szName,aver(p));
		}
		for(j=0;j<5;j++){
			printf("subject%d:%.1f\n",j+1,avegs(p,j));
		}
		dalao(p);
		return 0;
	}
