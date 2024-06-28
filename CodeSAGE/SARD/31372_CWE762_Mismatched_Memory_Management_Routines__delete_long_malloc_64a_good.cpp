#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 VAR3 = new long;
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 long * VAR3;
 VAR3 = NULL;
 VAR3 = (long *)malloc(100*sizeof(long));
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
