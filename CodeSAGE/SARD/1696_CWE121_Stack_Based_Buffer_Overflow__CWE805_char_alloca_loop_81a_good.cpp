#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * VAR3 = (char *)FUN2(50*sizeof(char));
 char * VAR4 = (char *)FUN2(100*sizeof(char));
 VAR2 = VAR4;
 VAR2[0] = '';
 const VAR5& VAR6 = FUN3();
 VAR6.FUN4(VAR2);
}
void FUN5()
{
 FUN1();
}
#endif
