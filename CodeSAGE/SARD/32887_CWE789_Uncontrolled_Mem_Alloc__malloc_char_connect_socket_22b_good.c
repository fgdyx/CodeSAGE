#ifndef VAR1
extern int VAR2;
extern int VAR3;
extern int VAR4;
void FUN1(size_t VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
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
}
void FUN3(size_t VAR5)
{
 if(VAR3)
 {
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
}
void FUN4(size_t VAR5)
{
 if(VAR4)
 {
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
}
#endif
