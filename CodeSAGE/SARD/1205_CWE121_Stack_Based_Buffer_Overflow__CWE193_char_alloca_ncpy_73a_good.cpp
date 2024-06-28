#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char * VAR5 = (char *)FUN3((10)*sizeof(char));
 char * VAR6 = (char *)FUN3((10+1)*sizeof(char));
 VAR4 = VAR6;
 VAR4[0] = '';
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
