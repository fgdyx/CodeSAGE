#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static void FUN1(char * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 size_t VAR5;
 for (VAR5=0; VAR5 < strlen(VAR4); VAR5++)
 {
 if (VAR4[VAR5] == VAR6)
 {
 FUN2("");
 break;
 }
 }
 free(VAR4);
 }
 }
}
static void FUN3()
{
 char * VAR4;
 VAR4 = (char *)malloc(100*sizeof(char));
 VAR4[0] = '';
 {
 size_t VAR7 = strlen(VAR4);
 if (100-VAR7 > 1)
 {
 if (fgets(VAR4+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR4);
 if (VAR7 > 0 && VAR4[VAR7-1] == '')
 {
 VAR4[VAR7-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR4[VAR7] = '';
 }
 }
 }
 VAR2 = 0;
 FUN1(VAR4);
}
static void FUN4(char * VAR4)
{
 if(VAR3)
 {
 {
 size_t VAR5;
 for (VAR5=0; VAR5 < strlen(VAR4); VAR5++)
 {
 if (VAR4[VAR5] == VAR6)
 {
 FUN2("");
 break;
 }
 }
 free(VAR4);
 }
 }
}
static void FUN5()
{
 char * VAR4;
 VAR4 = (char *)malloc(100*sizeof(char));
 VAR4[0] = '';
 {
 size_t VAR7 = strlen(VAR4);
 if (100-VAR7 > 1)
 {
 if (fgets(VAR4+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = strlen(VAR4);
 if (VAR7 > 0 && VAR4[VAR7-1] == '')
 {
 VAR4[VAR7-1] = '';
 }
 }
 else
 {
 FUN2("");
 VAR4[VAR7] = '';
 }
 }
 }
 VAR3 = 1;
 FUN4(VAR4);
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
