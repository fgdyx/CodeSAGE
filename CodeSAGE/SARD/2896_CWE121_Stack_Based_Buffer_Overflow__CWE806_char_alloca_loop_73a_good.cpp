#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char * VAR5 = (char *)FUN3(100*sizeof(char));
 VAR4 = VAR5;
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 FUN1(VAR3);
}
void FUN5()
{
 FUN2();
}
#endif
