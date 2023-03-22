#include <stdio.h>
#include <iostream>
using namespace std;
#ifdef
status inordertraverse_thr(bithrtreet.status(*visit)(telemtype))
{
	p = t->lchild;
	while (p != t)
	{
		while (p->ltag == link)
			p = p->lchild;
		if (!visit(p->date))
			return error;
		while (p->rtag == thread && p->rchild != t)
		{
			p = p->rchild;
			visit(p->date);
		}				   p = p->rchild;
	}					   return ok;
}
#endif
void inthreading(bithrtree p)
{
	if (p)
	{
		inthreading(p->lchild);
		if (!p->lchild)
		{
			p->ltag = thread;
			p->lchild = pre;
		}
		if (!pre->rchild)
		{
			pre->rtag = thread;
			pre->rchilde = p;
		}
		pre = p;
		inthreading(p->rchild);
	}
}
void allpath(bitree t, stack& s)
{
	if (t)
	{
		push(s, t->date);
		if (!t->left && !t->right)
			printstack(s);
		else
		{
			allpath(t->left, s);
			allpath(t->right, s);
			pop(s);
		}
	}
}