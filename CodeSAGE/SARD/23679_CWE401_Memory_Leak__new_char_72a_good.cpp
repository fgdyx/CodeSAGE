#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 VAR4 = NULL;
 char VAR5;
 VAR4 = &VAR5;
 *VAR4 = '';
 FUN3(*VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN1(VAR3);
}
void FUN6(VAR2<char *> VAR3);
static void FUN7()
{
 char * VAR4;
 VAR2<char *> VAR3;
 VAR4 = NULL;
 VAR4 = new char;
 *VAR4 = '';
 FUN3(*VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 VAR3.FUN4(VAR3.FUN5(), 1, VAR4);
 FUN6(VAR3);
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
