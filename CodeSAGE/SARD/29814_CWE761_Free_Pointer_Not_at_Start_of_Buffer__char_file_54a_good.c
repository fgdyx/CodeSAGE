#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
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
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
