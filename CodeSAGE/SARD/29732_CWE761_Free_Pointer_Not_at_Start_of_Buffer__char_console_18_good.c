#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
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
 goto VAR4;
VAR4:
 {
 size_t VAR5;
 for (VAR5=0; VAR5 < strlen(VAR2); VAR5++)
 {
 if (VAR2[VAR5] == VAR6)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
