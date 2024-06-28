#ifndef VAR1
void FUN1();
static void FUN2()
{
 char * VAR2;
 char * VAR3 = (char *)FUN3(100*sizeof(char));
 VAR2 = VAR3;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 VAR4 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN2();
}
#endif
