#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 }
 else
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 }
 if(FUN2())
 {
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6) && VAR2 < 100)
 {
 VAR5 = new char[VAR2];
 strcpy(VAR5, VAR6);
 FUN4(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN4("");
 }
 }
 }
 else
 {
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6) && VAR2 < 100)
 {
 VAR5 = new char[VAR2];
 strcpy(VAR5, VAR6);
 FUN4(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN5()
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
 char * VAR5;
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = new char[VAR2];
 strcpy(VAR5, VAR6);
 FUN4(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN4("");
 }
 }
 }
 else
 {
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = new char[VAR2];
 strcpy(VAR5, VAR6);
 FUN4(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN4("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
