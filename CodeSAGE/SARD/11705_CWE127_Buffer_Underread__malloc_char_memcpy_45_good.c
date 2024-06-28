#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 memcpy(VAR4, VAR2, 100*sizeof(char));
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 {
 char * VAR5 = (char *)malloc(100*sizeof(char));
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 VAR2 = VAR5;
 }
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
