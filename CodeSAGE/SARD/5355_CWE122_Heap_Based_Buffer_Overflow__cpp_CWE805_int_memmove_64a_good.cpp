#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = new int[100];
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
