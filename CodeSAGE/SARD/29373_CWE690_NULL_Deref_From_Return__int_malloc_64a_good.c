#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = (int *)malloc(1*sizeof(int));
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
