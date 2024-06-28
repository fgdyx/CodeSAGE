#ifndef VAR1
void FUN1(size_t VAR2)
{
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4))
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN3(size_t VAR2)
{
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4) && VAR2 < 100)
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
