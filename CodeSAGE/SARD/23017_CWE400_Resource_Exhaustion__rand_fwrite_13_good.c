#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = FUN2();
 }
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 {
 size_t VAR4 = 0;
 VAR5 *VAR6 = NULL;
 const char *VAR7 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 == NULL)
 {
 FUN4(1);
 }
 for (VAR4 = 0; VAR4 < (VAR8)VAR2; VAR4++)
 {
 if (strlen(VAR9) != fwrite(VAR9, sizeof(char), strlen(VAR9), VAR6)) FUN4(1);
 }
 if (VAR6)
 {
 fclose(VAR6);
 }
 }
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = FUN2();
 }
 if(VAR3==5)
 {
 {
 size_t VAR4 = 0;
 VAR5 *VAR6 = NULL;
 const char *VAR7 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 == NULL)
 {
 FUN4(1);
 }
 for (VAR4 = 0; VAR4 < (VAR8)VAR2; VAR4++)
 {
 if (strlen(VAR9) != fwrite(VAR9, sizeof(char), strlen(VAR9), VAR6)) FUN4(1);
 }
 if (VAR6)
 {
 fclose(VAR6);
 }
 }
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 {
 size_t VAR4 = 0;
 VAR5 *VAR6 = NULL;
 const char *VAR7 = "";
 VAR6 = fopen(VAR7, "");
 if (VAR6 == NULL)
 {
 FUN4(1);
 }
 for (VAR4 = 0; VAR4 < (VAR8)VAR2; VAR4++)
 {
 if (strlen(VAR9) != fwrite(VAR9, sizeof(char), strlen(VAR9), VAR6))
 {
 FUN4(1);
 }
 }
 if (VAR6)
 {
 fclose(VAR6);
 }
 }
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 VAR2 = 20;
 }
 if(VAR3==5)
 {
 {
 size_t VAR4 = 0;
 VAR5 *VAR6 = NULL;
 const char *VAR7 = "";
 VAR6 = fopen(VAR7, "");
 if (VAR6 == NULL)
 {
 FUN4(1);
 }
 for (VAR4 = 0; VAR4 < (VAR8)VAR2; VAR4++)
 {
 if (strlen(VAR9) != fwrite(VAR9, sizeof(char), strlen(VAR9), VAR6))
 {
 FUN4(1);
 }
 }
 if (VAR6)
 {
 fclose(VAR6);
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
