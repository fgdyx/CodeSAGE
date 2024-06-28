#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 VAR2 = FUN2();
 }
 if(0)
 {
 FUN3("");
 }
 else
 {
 {
 size_t VAR3 = 0;
 VAR4 *VAR5 = NULL;
 const char *VAR6 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR5 = fopen(VAR6, "");
 if (VAR5 == NULL)
 {
 FUN4(1);
 }
 for (VAR3 = 0; VAR3 < (VAR7)VAR2; VAR3++)
 {
 if (strlen(VAR8) != fwrite(VAR8, sizeof(char), strlen(VAR8), VAR5)) FUN4(1);
 }
 if (VAR5)
 {
 fclose(VAR5);
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
 VAR2 = FUN2();
 }
 if(1)
 {
 {
 size_t VAR3 = 0;
 VAR4 *VAR5 = NULL;
 const char *VAR6 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR5 = fopen(VAR6, "");
 if (VAR5 == NULL)
 {
 FUN4(1);
 }
 for (VAR3 = 0; VAR3 < (VAR7)VAR2; VAR3++)
 {
 if (strlen(VAR8) != fwrite(VAR8, sizeof(char), strlen(VAR8), VAR5)) FUN4(1);
 }
 if (VAR5)
 {
 fclose(VAR5);
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
 size_t VAR3 = 0;
 VAR4 *VAR5 = NULL;
 const char *VAR6 = "";
 VAR5 = fopen(VAR6, "");
 if (VAR5 == NULL)
 {
 FUN4(1);
 }
 for (VAR3 = 0; VAR3 < (VAR7)VAR2; VAR3++)
 {
 if (strlen(VAR8) != fwrite(VAR8, sizeof(char), strlen(VAR8), VAR5))
 {
 FUN4(1);
 }
 }
 if (VAR5)
 {
 fclose(VAR5);
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
 size_t VAR3 = 0;
 VAR4 *VAR5 = NULL;
 const char *VAR6 = "";
 VAR5 = fopen(VAR6, "");
 if (VAR5 == NULL)
 {
 FUN4(1);
 }
 for (VAR3 = 0; VAR3 < (VAR7)VAR2; VAR3++)
 {
 if (strlen(VAR8) != fwrite(VAR8, sizeof(char), strlen(VAR8), VAR5))
 {
 FUN4(1);
 }
 }
 if (VAR5)
 {
 fclose(VAR5);
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
