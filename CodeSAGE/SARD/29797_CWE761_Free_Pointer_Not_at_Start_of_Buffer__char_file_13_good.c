#ifndef VAR1
static void FUN1()
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
 FUN2("");
 VAR2[VAR3] = '';
 }
 fclose(VAR5);
 }
 }
 }
 if(VAR7!=5)
 {
 FUN2("");
 }
 else
 {
 {
 size_t VAR8;
 for (VAR8=0; VAR8 < strlen(VAR2); VAR8++)
 {
 if (VAR2[VAR8] == VAR9)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
 }
}
static void FUN3()
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
 FUN2("");
 VAR2[VAR3] = '';
 }
 fclose(VAR5);
 }
 }
 }
 if(VAR7==5)
 {
 {
 size_t VAR8;
 for (VAR8=0; VAR8 < strlen(VAR2); VAR8++)
 {
 if (VAR2[VAR8] == VAR9)
 {
 FUN2("");
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
 FUN3();
}
#endif
