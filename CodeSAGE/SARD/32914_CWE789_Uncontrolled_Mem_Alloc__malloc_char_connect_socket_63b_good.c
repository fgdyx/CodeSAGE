#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 size_t VAR4 = *VAR3;
 {
 char * VAR5;
 if (VAR4 > strlen(VAR6))
 {
 VAR5 = (char *)malloc(VAR4*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN3(VAR2 * VAR3)
{
 size_t VAR4 = *VAR3;
 {
 char * VAR5;
 if (VAR4 > strlen(VAR6) && VAR4 < 100)
 {
 VAR5 = (char *)malloc(VAR4*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
