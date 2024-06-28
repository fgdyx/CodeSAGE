#ifndef VAR1
void FUN1(char * VAR2);
void FUN2(char * VAR2);
static void FUN3()
{
 char * VAR2;
 char * VAR3 = (char *)FUN4(sizeof(VAR4));
 char * VAR5 = (char *)FUN4(sizeof(VAR6));
 VAR2 = VAR5;
 FUN1(VAR2);
}
static void FUN5()
{
 char * VAR2;
 char * VAR3 = (char *)FUN4(sizeof(VAR4));
 char * VAR5 = (char *)FUN4(sizeof(VAR6));
 VAR2 = VAR3;
 FUN2(VAR2);
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
