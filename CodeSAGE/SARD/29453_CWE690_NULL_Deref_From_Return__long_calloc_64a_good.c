#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 VAR3 = (long *)calloc(1, sizeof(long));
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
