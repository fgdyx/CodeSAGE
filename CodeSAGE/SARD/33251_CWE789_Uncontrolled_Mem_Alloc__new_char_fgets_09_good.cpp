#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(VAR6)
 {
 FUN3("");
 }
 else
 {
 {
 char * VAR7;
 if (VAR2 > strlen(VAR8) && VAR2 < 100)
 {
 VAR7 = new char[VAR2];
 strcpy(VAR7, VAR8);
 FUN3(VAR7);
 delete [] VAR7;
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
 if(VAR3)
 {
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(VAR3)
 {
 {
 char * VAR7;
 if (VAR2 > strlen(VAR8) && VAR2 < 100)
 {
 VAR7 = new char[VAR2];
 strcpy(VAR7, VAR8);
 FUN3(VAR7);
 delete [] VAR7;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN5()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR6)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3)
 {
 {
 char * VAR7;
 if (VAR2 > strlen(VAR8))
 {
 VAR7 = new char[VAR2];
 strcpy(VAR7, VAR8);
 FUN3(VAR7);
 delete [] VAR7;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN6()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = 20;
 }
 if(VAR3)
 {
 {
 char * VAR7;
 if (VAR2 > strlen(VAR8))
 {
 VAR7 = new char[VAR2];
 strcpy(VAR7, VAR8);
 FUN3(VAR7);
 delete [] VAR7;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
