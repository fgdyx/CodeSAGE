#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR3;
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 const VAR4& VAR5 = FUN3();
 VAR5.FUN4(VAR2);
}
void FUN5()
{
 FUN1();
}
#endif
