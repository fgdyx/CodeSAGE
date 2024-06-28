#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char * VAR3 = (char *)FUN3(50*sizeof(char));
 char * VAR4 = (char *)FUN3(100*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
