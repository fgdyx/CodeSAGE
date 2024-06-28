#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 VAR4 FUN2(VAR2);
}
void FUN3()
{
 FUN1();
}
#endif
