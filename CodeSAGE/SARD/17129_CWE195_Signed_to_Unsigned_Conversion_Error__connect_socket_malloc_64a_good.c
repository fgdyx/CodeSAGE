#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int VAR3;
 VAR3 = -1;
 VAR3 = 100-1;
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
