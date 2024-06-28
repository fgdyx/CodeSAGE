#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 char * VAR5 = (char *)FUN3(sizeof(VAR6));
 char * VAR7 = (char *)FUN3(sizeof(VAR8));
 VAR4 = VAR7;
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
 char * VAR5 = (char *)FUN3(sizeof(VAR6));
 char * VAR7 = (char *)FUN3(sizeof(VAR8));
 VAR4 = VAR5;
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
