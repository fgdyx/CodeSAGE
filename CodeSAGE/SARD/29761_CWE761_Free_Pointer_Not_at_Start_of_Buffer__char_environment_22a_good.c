#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
void FUN1(char * VAR4);
static void FUN2()
{
 char * VAR4;
 VAR4 = (char *)malloc(100*sizeof(char));
 VAR4[0] = '';
 {
 size_t VAR5 = strlen(VAR4);
 char * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR4+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR2 = 0;
 FUN1(VAR4);
}
void FUN4(char * VAR4);
static void FUN5()
{
 char * VAR4;
 VAR4 = (char *)malloc(100*sizeof(char));
 VAR4[0] = '';
 {
 size_t VAR5 = strlen(VAR4);
 char * VAR6 = FUN3(VAR7);
 if (VAR6 != NULL)
 {
 strncat(VAR4+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR3 = 1;
 FUN4(VAR4);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
