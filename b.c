#include<stdio.h>
struct frac{
	int n,d;
};
void input(struct frac *f1,int i){
	printf("enter the fraction %d:\n",i);
	scanf("%d%d",&f1->n,&f1->d);
}
void display(struct frac f1,struct frac f2,struct frac r)
{
printf("addition is %d/%d + %d/%d = %d/%d  ",f1.n,f1.d,f2.n,f2.d,r.n,r.d);
}

int num(struct frac f1,struct frac f2,struct frac *r)
{
    r->n=(f1.n*f2.d)+(f1.d*f2.n);
    r->d=(f1.d*f2.d);
}
int main()
{
	struct frac f1,f2,r;
	input(&f1,1);
	input(&f2,2);
	num(f1,f2,&r);
	display(f1,f2,r);
	return 0;
}

