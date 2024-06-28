#ifndef VAR1
void FUN1(char * * VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = new char[100];
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 FUN1(&VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
