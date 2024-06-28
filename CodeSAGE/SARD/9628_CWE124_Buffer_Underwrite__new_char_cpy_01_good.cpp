#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strcpy(VAR2, VAR4);
 FUN2(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
