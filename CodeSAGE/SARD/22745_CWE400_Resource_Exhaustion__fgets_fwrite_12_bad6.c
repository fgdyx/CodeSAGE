#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read count from the console using fgets() */
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
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation
 * This can cause a file to become very large */
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
#endif
