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
 char * VAR8 = FUN4(VAR9);
 if (VAR8 != NULL)
 {
 strncat(VAR4+VAR7, VAR8, 100-VAR7-1);
 }
 }
 VAR2 = 0;
 FUN1(VAR4);
}
static void FUN5(char * VAR4)
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
static void FUN6()
{
 char * VAR4;
 VAR4 = (char *)malloc(100*sizeof(char));
 VAR4[0] = '';
 {
 size_t VAR7 = strlen(VAR4);
 char * VAR8 = FUN4(VAR9);
 if (VAR8 != NULL)
 {
 strncat(VAR4+VAR7, VAR8, 100-VAR7-1);
 }
 }
 VAR3 = 1;
 FUN5(VAR4);
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
