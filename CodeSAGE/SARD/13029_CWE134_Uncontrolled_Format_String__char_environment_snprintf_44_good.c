#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 char VAR3[100] = "";
 FUN2(VAR3, 100-1, VAR2);
 FUN3(VAR3);
 }
}
static void FUN4()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char VAR6[100] = "";
 VAR2 = VAR6;
 strcpy(VAR2, "");
 FUN5(VAR2);
}
static void FUN6(char * VAR2)
{
 {
 char VAR3[100] = "";
 FUN2(VAR3, 100-1, "", VAR2);
 FUN3(VAR3);
 }
}
static void FUN7()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR7;
 char VAR6[100] = "";
 VAR2 = VAR6;
 {
 size_t VAR8 = strlen(VAR2);
 char * VAR9 = FUN8(VAR10);
 if (VAR9 != NULL)
 {
 strncat(VAR2+VAR8, VAR9, 100-VAR8-1);
 }
 }
 FUN5(VAR2);
}
void FUN9()
{
 FUN4();
 FUN7();
}
#endif
