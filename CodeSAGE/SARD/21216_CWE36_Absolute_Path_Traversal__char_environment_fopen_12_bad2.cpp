#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR5 = strlen(VAR2);
 char * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 strncat(VAR2+VAR5, VAR6, VAR4-VAR5-1);
 }
 }
 }
 else
 {
#ifdef VAR8
 strcat(VAR2, "");
#else
 strcat(VAR2, "");
#endif
 }
 {
 VAR9 *VAR10 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR10 = FUN4(VAR2, "");
 if (VAR10 != NULL)
 {
 fclose(VAR10);
 }
 }
}
#endif
