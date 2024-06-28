#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
 else
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
 if(FUN2())
 {
 {
 size_t VAR5 = 0;
 VAR6 *VAR7 = NULL;
 const char *VAR8 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 == NULL)
 {
 FUN5(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7)) FUN5(1);
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
 }
 }
 else
 {
 {
 size_t VAR5 = 0;
 VAR6 *VAR7 = NULL;
 const char *VAR8 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 == NULL)
 {
 FUN5(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7)) FUN5(1);
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = 20;
 }
 else
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 {
 size_t VAR5 = 0;
 VAR6 *VAR7 = NULL;
 const char *VAR8 = "";
 VAR7 = fopen(VAR8, "");
 if (VAR7 == NULL)
 {
 FUN5(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7))
 {
 FUN5(1);
 }
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
 }
 else
 {
 {
 size_t VAR5 = 0;
 VAR6 *VAR7 = NULL;
 const char *VAR8 = "";
 VAR7 = fopen(VAR8, "");
 if (VAR7 == NULL)
 {
 FUN5(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7))
 {
 FUN5(1);
 }
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
 }
}
void FUN7()
{
 FUN1();
 FUN6();
}
#endif
