#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0;
 {
 size_t VAR2 = *VAR4;
 VAR2 = 20;
 *VAR4 = VAR2;
 }
 {
 size_t VAR2 = *VAR5;
 {
 char * VAR6;
 if (VAR2 > strlen(VAR7))
 {
 VAR6 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 size_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0;
 {
 size_t VAR2 = *VAR4;
 VAR2 = rand();
 *VAR4 = VAR2;
 }
 {
 size_t VAR2 = *VAR5;
 {
 char * VAR6;
 if (VAR2 > strlen(VAR7) && VAR2 < 100)
 {
 VAR6 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
