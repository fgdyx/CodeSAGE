#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
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
static void FUN3()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 {
 size_t VAR6 = strlen(VAR2);
 char * VAR7 = FUN4(VAR8);
 if (VAR7 != NULL)
 {
 strncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN3();
}
#endif
