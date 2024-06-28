#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 while(1)
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
 while(1)
 {
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6) && VAR2 < 100)
 {
 VAR5 = new char[VAR2];
 strcpy(VAR5, VAR6);
 FUN3(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 while(1)
 {
 VAR2 = 20;
 break;
 }
 while(1)
 {
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = new char[VAR2];
 strcpy(VAR5, VAR6);
 FUN3(VAR5);
 delete [] VAR5;
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
