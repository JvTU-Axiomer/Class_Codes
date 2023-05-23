#include <stdio.h>
struct Stu
{
	char name[20];
	int age;
	float score;
};
void print1(struct Stu t)
{
	printf("%s %d %f\n", t.name, t.age, t.score);
}
void print2(struct Stu* ps)
{
	printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
	printf("%s %d %f\n", ps->name, ps->age, ps->score);
}
int main()
{
	struct Stu s = { "zhangsan", 20, 85.5f };
	print1(s);
	print2(&s);
	return 0;
}