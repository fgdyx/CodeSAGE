#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(0)
 {
 FUN3("");
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
 FUN4(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7)) FUN4(1);
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(1)
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
 FUN4(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7)) FUN4(1);
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
 if(0)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 20;
 }
 if(1)
 {
 {
 size_t VAR5 = 0;
 VAR6 *VAR7 = NULL;
 const char *VAR8 = "";
 VAR7 = fopen(VAR8, "");
 if (VAR7 == NULL)
 {
 FUN4(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7))
 {
 FUN4(1);
 }
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = 20;
 }
 if(1)
 {
 {
 size_t VAR5 = 0;
 VAR6 *VAR7 = NULL;
 const char *VAR8 = "";
 VAR7 = fopen(VAR8, "");
 if (VAR7 == NULL)
 {
 FUN4(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7))
 {
 FUN4(1);
 }
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
