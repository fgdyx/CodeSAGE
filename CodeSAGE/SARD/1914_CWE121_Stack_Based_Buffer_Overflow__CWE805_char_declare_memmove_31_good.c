#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 VAR2 = VAR4;
 VAR2[0] = '';
 {
 char * VAR5 = VAR2;
 char * VAR2 = VAR5;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memmove(VAR2, VAR6, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
