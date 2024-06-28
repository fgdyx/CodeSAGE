#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static char * FUN1(char * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 VAR4 = (char *)malloc((10+1)*sizeof(char));
 }
 return VAR4;
}
static void FUN3()
{
 char * VAR4;
 VAR4 = NULL;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 char VAR5[10+1] = VAR6;
 size_t VAR7, VAR8;
 VAR8 = strlen(VAR5);
 for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
 {
 VAR4[VAR7] = VAR5[VAR7];
 }
 FUN2(VAR4);
 free(VAR4);
 }
}
static char * FUN4(char * VAR4)
{
 if(VAR3)
 {
 VAR4 = (char *)malloc((10+1)*sizeof(char));
 }
 return VAR4;
}
static void FUN5()
{
 char * VAR4;
 VAR4 = NULL;
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 char VAR5[10+1] = VAR6;
 size_t VAR7, VAR8;
 VAR8 = strlen(VAR5);
 for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
 {
 VAR4[VAR7] = VAR5[VAR7];
 }
 FUN2(VAR4);
 free(VAR4);
 }
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
