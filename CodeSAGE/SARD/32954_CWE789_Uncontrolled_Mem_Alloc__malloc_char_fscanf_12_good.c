#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 fscanf(stdin, "", &VAR2);
 }
 else
 {
 fscanf(stdin, "", &VAR2);
 }
 if(FUN2())
 {
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4) && VAR2 < 100)
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 }
 else
 {
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4) && VAR2 < 100)
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 VAR2 = 20;
 }
 else
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4))
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 }
 else
 {
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4))
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN3(VAR3);
 free(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
