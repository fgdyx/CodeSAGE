#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3);
void FUN2()
{
 char * VAR4;
 VAR2<int, char *> VAR3;
 char VAR5[100] = "";
 VAR4 = VAR5;
 {
 size_t VAR6 = strlen(VAR4);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (fgets(VAR4+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN3("");
 VAR4[VAR6] = '';
 }
 fclose(VAR8);
 }
 }
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
