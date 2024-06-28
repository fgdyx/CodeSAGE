#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4)
{
 size_t VAR5 = VAR4[2];
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7))
 {
 VAR6 = (char *)malloc(VAR5*sizeof(char));
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
void FUN3(VAR2<VAR3> VAR4)
{
 size_t VAR5 = VAR4[2];
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7) && VAR5 < 100)
 {
 VAR6 = (char *)malloc(VAR5*sizeof(char));
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
#endif
