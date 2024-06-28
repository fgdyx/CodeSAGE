#ifndef VAR1
void FUN1(int VAR2)
{
 {
 size_t VAR3 = 0;
 VAR4 *VAR5 = NULL;
 const char *VAR6 = "";
 VAR5 = fopen(VAR6, "");
 if (VAR5 == NULL)
 {
 FUN2(1);
 }
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation
 * This can cause a file to become very large */
 for (VAR3 = 0; VAR3 < (VAR7)VAR2; VAR3++)
 {
 if (strlen(VAR8) != fwrite(VAR8, sizeof(char), strlen(VAR8), VAR5))
 {
 FUN2(1);
 }
 }
 if (VAR5)
 {
 fclose(VAR5);
 }
 }
}
#endif
