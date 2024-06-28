#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 char VAR4[VAR5] = "";
 VAR3 = VAR4;
 {
 size_t VAR6 = strlen(VAR3);
 VAR7 * VAR8;
 if (VAR5-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR3+VAR6, (int)(VAR5-VAR6), VAR8) == NULL)
 {
 FUN3("");
 VAR3[VAR6] = '';
 }
 fclose(VAR8);
 }
 }
 }
 FUN1(&VAR3);
}
#endif
