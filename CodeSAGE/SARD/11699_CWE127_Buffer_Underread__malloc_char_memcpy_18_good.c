#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 {
 char * VAR4 = (char *)malloc(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memcpy(VAR5, VAR2, 100*sizeof(char));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
void FUN3()
{
 FUN1();
}
#endif
