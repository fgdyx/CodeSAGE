#ifndef VAR1
static void FUN1(char * VAR2)
{
 {
 size_t VAR3;
 for (VAR3=0; VAR3 < strlen(VAR2); VAR3++)
 {
 if (VAR2[VAR3] == VAR4)
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
 void (*VAR5) (char *) = VAR6;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 {
 size_t VAR7 = strlen(VAR2);
 if (100-VAR7 > 1)
 {
 if (fgets(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == '')
 {
 VAR2[VAR7-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR7] = '';
 }
 }
 }
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
