#ifndef VAR1
static void FUN1()
{
 int VAR2;
 char * VAR3;
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR4;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memcpy(VAR3, VAR5, 100*sizeof(char));
 VAR3[100-1] = '';
 FUN3(VAR3);
 }
}
void FUN4()
{
 FUN1();
}
#endif
