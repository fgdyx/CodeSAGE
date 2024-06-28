#ifndef VAR1
void FUN1(int * VAR2);
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
