#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4))
 {
 VAR3 = new char[VAR2];
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 delete [] VAR3;
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN3()
{
 size_t VAR2;
 VAR2 = 0;
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN4(VAR5, NULL, 0);
 }
 else
 {
 FUN2("");
 }
 }
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4) && VAR2 < 100)
 {
 VAR3 = new char[VAR2];
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 delete [] VAR3;
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
