#ifndef VAR1
void FUN1(VAR2<char *> VAR3);
static void FUN2()
{
 char * VAR4;
 VAR2<char *> VAR3;
 VAR4 = NULL;
 VAR4 = (char *)FUN3(100*sizeof(char));
 strcpy(VAR4, "");
 FUN4(VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 FUN1(VAR3);
}
void FUN7(VAR2<char *> VAR3);
static void FUN8()
{
 char * VAR4;
 VAR2<char *> VAR3;
 VAR4 = NULL;
 VAR4 = (char *)realloc(VAR4, 100*sizeof(char));
 strcpy(VAR4, "");
 FUN4(VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 VAR3.FUN5(VAR3.FUN6(), 1, VAR4);
 FUN7(VAR3);
}
void FUN9()
{
 FUN2();
 FUN8();
}
#endif
