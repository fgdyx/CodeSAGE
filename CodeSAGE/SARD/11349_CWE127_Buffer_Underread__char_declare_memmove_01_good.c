#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memmove(VAR4, VAR2, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
