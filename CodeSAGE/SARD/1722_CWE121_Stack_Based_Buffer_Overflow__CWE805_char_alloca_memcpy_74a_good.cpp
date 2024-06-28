#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 char * VAR5 = (char *)FUN3(50*sizeof(char));
 char * VAR6 = (char *)FUN3(100*sizeof(char));
 VAR4 = VAR6;
 VAR4[0] = '';
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
