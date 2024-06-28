#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 goto VAR4;
VAR4:
 VAR2 = VAR3;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memmove(VAR5, VAR2, 100*sizeof(char));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
void FUN3()
{
 FUN1();
}
#endif
