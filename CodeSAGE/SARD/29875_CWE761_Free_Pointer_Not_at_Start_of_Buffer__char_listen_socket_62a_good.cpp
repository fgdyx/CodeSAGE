#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 FUN1(VAR2);
 {
 size_t VAR3;
 for (VAR3=0; VAR3 < strlen(VAR2); VAR3++)
 {
 if (VAR2[VAR3] == VAR4)
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
 FUN2();
}
#endif
