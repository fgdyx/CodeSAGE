#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 char * VAR5 = (char *)FUN3(100*sizeof(char));
 VAR4 = VAR5;
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
