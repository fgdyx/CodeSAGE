#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
 size_t VAR4 = strlen(VAR2);
 VAR5 * VAR6;
 if (100-VAR4 > 1)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR2+VAR4, (int)(100-VAR4), VAR6) == NULL)
 {
 FUN2("");
 VAR2[VAR4] = '';
 }
 fclose(VAR6);
 }
 }
 }
 {
 char VAR8[100] = "";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR8, 100-1, VAR2);
 FUN2(VAR8);
 }
}
#endif
