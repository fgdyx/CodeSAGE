#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int VAR3;
 VAR3 = 0;
 VAR3 = 2;
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 int VAR3;
 VAR3 = 0;
 VAR3 = FUN5();
 FUN3(&VAR3);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
