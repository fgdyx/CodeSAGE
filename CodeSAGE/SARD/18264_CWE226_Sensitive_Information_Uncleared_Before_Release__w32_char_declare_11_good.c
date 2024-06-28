#ifndef VAR1
static void FUN1()
{
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 {
 char VAR2[100] = "";
 size_t VAR3 = 0;
 HANDLE VAR4;
 char * VAR5 = "";
 char * VAR6 = "";
 if (fgets(VAR2, 100, stdin) == NULL)
 {
 FUN3("");
 VAR2[0] = '';
 }
 VAR3 = strlen(VAR2);
 if (VAR3 > 0)
 {
 VAR2[VAR3-1] = '';
 }
 if (FUN4(
 VAR5,
 VAR6,
 VAR2,
 VAR7,
 VAR8,
 &VAR4) != 0)
 {
 FUN3("");
 FUN5(VAR4);
 }
 else
 {
 FUN3("");
 }
 VAR3 = strlen(VAR2);
 FUN6(VAR2, VAR3 * sizeof(char));
 }
 }
}
static void FUN7()
{
 if(FUN8())
 {
 {
 char VAR2[100] = "";
 size_t VAR3 = 0;
 HANDLE VAR4;
 char * VAR5 = "";
 char * VAR6 = "";
 if (fgets(VAR2, 100, stdin) == NULL)
 {
 FUN3("");
 VAR2[0] = '';
 }
 VAR3 = strlen(VAR2);
 if (VAR3 > 0)
 {
 VAR2[VAR3-1] = '';
 }
 if (FUN4(
 VAR5,
 VAR6,
 VAR2,
 VAR7,
 VAR8,
 &VAR4) != 0)
 {
 FUN3("");
 FUN5(VAR4);
 }
 else
 {
 FUN3("");
 }
 VAR3 = strlen(VAR2);
 FUN6(VAR2, VAR3 * sizeof(char));
 }
 }
}
void FUN9()
{
 FUN1();
 FUN7();
}
#endif
