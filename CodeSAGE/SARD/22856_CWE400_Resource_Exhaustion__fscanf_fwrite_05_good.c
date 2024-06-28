#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(VAR4)
 {
 FUN2("");
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
 FUN3(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7)) FUN3(1);
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
 }
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 fscanf(stdin, "", &VAR2);
 }
 if(VAR3)
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
 FUN3(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7)) FUN3(1);
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
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3)
 {
 {
 size_t VAR5 = 0;
 VAR6 *VAR7 = NULL;
 const char *VAR8 = "";
 VAR7 = fopen(VAR8, "");
 if (VAR7 == NULL)
 {
 FUN3(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7))
 {
 FUN3(1);
 }
 }
 if (VAR7)
 {
 fclose(VAR7);
 }
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 VAR2 = 20;
 }
 if(VAR3)
 {
 {
 size_t VAR5 = 0;
 VAR6 *VAR7 = NULL;
 const char *VAR8 = "";
 VAR7 = fopen(VAR8, "");
 if (VAR7 == NULL)
 {
 FUN3(1);
 }
 for (VAR5 = 0; VAR5 < (VAR9)VAR2; VAR5++)
 {
 if (strlen(VAR10) != fwrite(VAR10, sizeof(char), strlen(VAR10), VAR7))
 {
 FUN3(1);
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
 FUN4();
 FUN5();
 FUN6();
}
#endif
