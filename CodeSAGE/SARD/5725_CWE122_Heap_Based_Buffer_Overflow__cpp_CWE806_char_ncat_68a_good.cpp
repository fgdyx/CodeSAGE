#ifndef VAR1
void FUN1();
static void FUN2()
{
 char * VAR2;
 VAR2 = new char[100];
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 VAR3 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
