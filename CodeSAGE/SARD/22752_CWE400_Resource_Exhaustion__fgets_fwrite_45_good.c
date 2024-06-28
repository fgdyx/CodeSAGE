#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 size_t VAR4 = 0;
 VAR5 *VAR6 = NULL;
 const char *VAR7 = "";
 VAR6 = fopen(VAR7, "");
 if (VAR6 == NULL)
 {
 FUN2(1);
 }
 for (VAR4 = 0; VAR4 < (VAR8)VAR2; VAR4++)
 {
 if (strlen(VAR9) != fwrite(VAR9, sizeof(char), strlen(VAR9), VAR6))
 {
 FUN2(1);
 }
 }
 if (VAR6)
 {
 fclose(VAR6);
 }
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 20;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int VAR2 = VAR10;
 {
 size_t VAR4 = 0;
 VAR5 *VAR6 = NULL;
 const char *VAR7 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 == NULL)
 {
 FUN2(1);
 }
 for (VAR4 = 0; VAR4 < (VAR8)VAR2; VAR4++)
 {
 if (strlen(VAR9) != fwrite(VAR9, sizeof(char), strlen(VAR9), VAR6)) FUN2(1);
 }
 if (VAR6)
 {
 fclose(VAR6);
 }
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 {
 char VAR11[VAR12] = "";
 if (fgets(VAR11, VAR12, stdin) != NULL)
 {
 VAR2 = FUN6(VAR11);
 }
 else
 {
 FUN7("");
 }
 }
 VAR10 = VAR2;
 FUN4();
}
void FUN8()
{
 FUN3();
 FUN5();
}
#endif
