#ifndef VAR1
static void FUN1()
{
 size_t VAR2 = VAR3;
 {
 char * VAR4;
 if (VAR2 > strlen(VAR5))
 {
 VAR4 = new char[VAR2];
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
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
 VAR2 = 20;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 size_t VAR2 = VAR6;
 {
 char * VAR4;
 if (VAR2 > strlen(VAR5) && VAR2 < 100)
 {
 VAR4 = new char[VAR2];
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = rand();
 VAR6 = VAR2;
 FUN4();
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
