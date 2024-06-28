#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 char * VAR3;
 char VAR4[VAR5] = VAR6;
 VAR3 = VAR4;
 {
 size_t VAR7 = strlen(VAR3);
 VAR8 * VAR9;
 if (VAR5-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR3+VAR7, (int)(VAR5-VAR7), VAR9) == NULL)
 {
 FUN3("");
 VAR3[VAR7] = '';
 }
 fclose(VAR9);
 }
 }
 }
 FUN1(&VAR3);
}
#endif
