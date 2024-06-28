#ifndef VAR1
void FUN1();
static void FUN2()
{
 int * VAR2;
 int VAR3[50];
 int VAR4[100];
 VAR2 = VAR4;
 VAR5 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
