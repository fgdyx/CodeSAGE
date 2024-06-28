#ifndef VAR1
static char * FUN1(char * VAR2)
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
 FUN2("");
 VAR2[VAR3] = '';
 }
 fclose(VAR5);
 }
 }
 }
 return VAR2;
}
static void FUN3()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 VAR2 = FUN1(VAR2);
 {
 size_t VAR7;
 for (VAR7=0; VAR7 < strlen(VAR2); VAR7++)
 {
 if (VAR2[VAR7] == VAR8)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
}
void FUN4()
{
 FUN3();
}
#endif
