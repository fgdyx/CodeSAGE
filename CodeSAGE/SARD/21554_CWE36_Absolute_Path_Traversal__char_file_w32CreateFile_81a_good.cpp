#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
#ifdef VAR5
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 const VAR6& VAR7 = FUN2();
 VAR7.FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
