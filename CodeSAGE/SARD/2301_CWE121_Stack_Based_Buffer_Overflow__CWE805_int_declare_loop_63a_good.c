#ifndef VAR1
void FUN1(int * * VAR2);
static void FUN2()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 VAR2 = VAR4;
 FUN1(&VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
