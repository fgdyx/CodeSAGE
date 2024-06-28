#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 FUN2(VAR2);
}
static void FUN3()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 strcpy(VAR2, "");
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 char * VAR2 = VAR5;
 FUN2("", VAR2);
}
static void FUN5()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN6(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 VAR5 = VAR2;
 FUN4();
}
void FUN7()
{
 FUN3();
 FUN5();
}
#endif
