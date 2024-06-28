#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char VAR5[50];
 char VAR6[100];
 VAR4 = VAR6;
 VAR4[0] = '';
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN1(VAR3);
}
void FUN5()
{
 FUN2();
}
#endif
