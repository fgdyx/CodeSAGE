#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 {
 size_t VAR3 = strlen(VAR2);
 char * VAR4 = FUN2(VAR5);
 if (VAR4 != NULL)
 {
 strncat(VAR2+VAR3, VAR4, 100-VAR3-1);
 }
 }
 goto VAR6;
VAR6:
 {
 size_t VAR7;
 for (VAR7=0; VAR7 < strlen(VAR2); VAR7++)
 {
 if (VAR2[VAR7] == VAR8)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
