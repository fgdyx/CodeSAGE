#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 goto VAR6;
VAR6:
 {
 size_t VAR7 = 0;
 VAR8 *VAR9 = NULL;
 const char *VAR10 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 == NULL)
 {
 FUN4(1);
 }
 for (VAR7 = 0; VAR7 < (VAR11)VAR2; VAR7++)
 {
 if (strlen(VAR12) != fwrite(VAR12, sizeof(char), strlen(VAR12), VAR9)) FUN4(1);
 }
 if (VAR9)
 {
 fclose(VAR9);
 }
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 VAR2 = 20;
 goto VAR6;
VAR6:
 {
 size_t VAR7 = 0;
 VAR8 *VAR9 = NULL;
 const char *VAR10 = "";
 VAR9 = fopen(VAR10, "");
 if (VAR9 == NULL)
 {
 FUN4(1);
 }
 for (VAR7 = 0; VAR7 < (VAR11)VAR2; VAR7++)
 {
 if (strlen(VAR12) != fwrite(VAR12, sizeof(char), strlen(VAR12), VAR9))
 {
 FUN4(1);
 }
 }
 if (VAR9)
 {
 fclose(VAR9);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
