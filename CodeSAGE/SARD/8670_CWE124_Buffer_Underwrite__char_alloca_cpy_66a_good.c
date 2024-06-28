#ifndef VAR1
void FUN1(char * VAR2[]);
static void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 char * VAR4 = (char *)FUN3(100*sizeof(char));
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR3 = VAR4;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
