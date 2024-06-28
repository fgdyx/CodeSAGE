#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 char * VAR4 = new char[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memmove(VAR2, VAR3, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
