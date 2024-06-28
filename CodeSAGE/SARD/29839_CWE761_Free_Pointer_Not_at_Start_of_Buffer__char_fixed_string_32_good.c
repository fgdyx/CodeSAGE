#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 {
 char * VAR2 = *VAR3;
 strcpy(VAR2, VAR5);
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 size_t VAR6;
 for (VAR6=0; VAR6 < strlen(VAR2); VAR6++)
 {
 if (VAR2[VAR6] == VAR7)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
