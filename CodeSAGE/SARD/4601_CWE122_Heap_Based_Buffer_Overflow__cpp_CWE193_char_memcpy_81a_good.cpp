#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char[10+1];
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
