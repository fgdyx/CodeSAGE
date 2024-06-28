#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = FUN2(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 size_t VAR2 = 0;
 VAR7 *VAR8 = NULL;
 const char *VAR9 = "";
 if (VAR4 > 0 && VAR4 <= 20)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 == NULL)
 {
 FUN4(1);
 }
 for (VAR2 = 0; VAR2 < (VAR10)VAR4; VAR2++)
 {
 if (strlen(VAR11) != fwrite(VAR11, sizeof(char), strlen(VAR11), VAR8)) FUN4(1);
 }
 if (VAR8)
 {
 fclose(VAR8);
 }
 }
 }
 }
}
static void FUN5()
{
 int VAR12,VAR13;
 int VAR4;
 VAR4 = -1;
 for(VAR12 = 0; VAR12 < 1; VAR12++)
 {
 VAR4 = 20;
 }
 for(VAR13 = 0; VAR13 < 1; VAR13++)
 {
 {
 size_t VAR2 = 0;
 VAR7 *VAR8 = NULL;
 const char *VAR9 = "";
 VAR8 = fopen(VAR9, "");
 if (VAR8 == NULL)
 {
 FUN4(1);
 }
 for (VAR2 = 0; VAR2 < (VAR10)VAR4; VAR2++)
 {
 if (strlen(VAR11) != fwrite(VAR11, sizeof(char), strlen(VAR11), VAR8))
 {
 FUN4(1);
 }
 }
 if (VAR8)
 {
 fclose(VAR8);
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
