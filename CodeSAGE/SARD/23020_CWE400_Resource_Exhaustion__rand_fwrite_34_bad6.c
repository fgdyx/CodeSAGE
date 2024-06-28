#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE400_Resource_Exhaustion__rand_fwrite_34_unionType VAR3;
 VAR2 = -1;
 /* POTENTIAL FLAW: Set count to a random value */
 VAR2 = FUN2();
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 size_t VAR6 = 0;
 VAR7 *VAR8 = NULL;
 const char *VAR9 = "";
 VAR8 = fopen(VAR9, "");
 if (VAR8 == NULL)
 {
 FUN3(1);
 }
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation
 * This can cause a file to become very large */
 for (VAR6 = 0; VAR6 < (VAR10)VAR2; VAR6++)
 {
 if (strlen(VAR11) != fwrite(VAR11, sizeof(char), strlen(VAR11), VAR8))
 {
 FUN3(1);
 }
 }
 if (VAR8)
 {
 fclose(VAR8);
 }
 }
 }
}
#endif
