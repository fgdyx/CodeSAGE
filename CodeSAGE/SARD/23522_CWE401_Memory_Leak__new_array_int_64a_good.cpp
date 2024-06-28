#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 int VAR4[100];
 VAR3 = VAR4;
 VAR3[0] = 5;
 FUN3(VAR3[0]);
 FUN1(&VAR3);
}
void FUN4(void * VAR2);
static void FUN5()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = new int[100];
 VAR3[0] = 5;
 FUN3(VAR3[0]);
 FUN4(&VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
