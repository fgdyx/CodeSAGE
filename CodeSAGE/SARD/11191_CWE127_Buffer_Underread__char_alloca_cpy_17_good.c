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
 char VAR5[100*2];
 memset(VAR5, '', 100*2-1);
 VAR5[100*2-1] = '';
 strcpy(VAR5, VAR3);
 FUN3(VAR5);
 }
}
void FUN4()
{
 FUN1();
}
#endif
