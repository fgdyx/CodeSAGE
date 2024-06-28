#ifndef VAR1
char * FUN1(char * VAR2)
{
 strcpy(VAR2, "");
 return VAR2;
}
char * FUN2(char * VAR2)
{
 {
 size_t VAR3 = strlen(VAR2);
 VAR4 * VAR5;
 if (100-VAR3 > 1)
 {
 VAR5 = fopen(VAR6, "");
 if (VAR5 != NULL)
 {
 if (fgets(VAR2+VAR3, (int)(100-VAR3), VAR5) == NULL)
 {
 FUN3("");
 VAR2[VAR3] = '';
 }
 fclose(VAR5);
 }
 }
 }
 return VAR2;
}
#endif
