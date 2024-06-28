#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[250] = "";
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 {
 size_t VAR6 = strlen(VAR2);
 VAR7 * VAR8;
 if (250-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR2+VAR6, (int)(250-VAR6), VAR8) == NULL)
 {
 FUN2("");
 VAR2[VAR6] = '';
 }
 fclose(VAR8);
 }
 }
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN3(VAR2);
 }
}
#endif
