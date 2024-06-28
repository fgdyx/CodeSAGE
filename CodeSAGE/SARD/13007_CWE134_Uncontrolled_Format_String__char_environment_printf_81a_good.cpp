#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 strcpy(VAR2, "");
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR2);
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN5(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 const VAR4& VAR5 = FUN6();
 VAR5.FUN3(VAR2);
}
void FUN7()
{
 FUN1();
 FUN4();
}
#endif
