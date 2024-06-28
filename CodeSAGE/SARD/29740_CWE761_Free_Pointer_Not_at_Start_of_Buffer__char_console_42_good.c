#ifndef VAR1
static char * FUN1(char * VAR2)
{
 {
 size_t VAR3 = strlen(VAR2);
 if (100-VAR3 > 1)
 {
 if (fgets(VAR2+VAR3, (int)(100-VAR3), stdin) != NULL)
 {
 VAR3 = strlen(VAR2);
 if (VAR3 > 0 && VAR2[VAR3-1] == '')
 {
 VAR2[VAR3-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR3] = '';
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
 size_t VAR4;
 for (VAR4=0; VAR4 < strlen(VAR2); VAR4++)
 {
 if (VAR2[VAR4] == VAR5)
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
