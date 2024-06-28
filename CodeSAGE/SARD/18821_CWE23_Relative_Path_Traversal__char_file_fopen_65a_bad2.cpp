#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 {
 size_t VAR8 = strlen(VAR2);
 VAR9 * VAR10;
 if (VAR6-VAR8 > 1)
 {
 VAR10 = fopen(VAR11, "");
 if (VAR10 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR2+VAR8, (int)(VAR6-VAR8), VAR10) == NULL)
 {
 FUN3("");
 VAR2[VAR8] = '';
 }
 fclose(VAR10);
 }
 }
 }
 FUN4(VAR2);
}
#endif
