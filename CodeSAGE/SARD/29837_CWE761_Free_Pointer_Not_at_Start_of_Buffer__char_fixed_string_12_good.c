#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 strcpy(VAR2, VAR3);
 if(FUN2())
 {
 {
 size_t VAR4;
 for (VAR4=0; VAR4 < strlen(VAR2); VAR4++)
 {
 if (VAR2[VAR4] == VAR5)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
 }
 else
 {
 {
 size_t VAR4;
 for (VAR4=0; VAR4 < strlen(VAR2); VAR4++)
 {
 if (VAR2[VAR4] == VAR5)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
